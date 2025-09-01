
#pragma once

#include "optionslist.hpp"
#include "util/option.hpp"

// Application-specific program options for Cube-and-Conquer for SAT solving.
// memberName                               short option name, long option name          default   min  max

OPTION_GROUP(grpAppSatCnc, "app/satcnc", "SAT solving via CnC options")
OPT_INT(cutoffDepth, "cutoff", "", 100000, 1, LARGE_INT, "")
OPT_INT(cubeSize, "cube-size", "", 10, 1, LARGE_INT, "")
