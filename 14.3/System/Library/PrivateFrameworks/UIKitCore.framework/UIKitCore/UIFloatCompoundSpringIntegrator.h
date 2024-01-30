@interface UIFloatCompoundSpringIntegrator : NSObject

+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; } x2; })integrateWithState:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; } x2; })a0 springParameters:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; BOOL x3; BOOL x4; BOOL x5; })a1 deltaTime:(double)a2;
+ (struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })advanceParametersWithState:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; double x2; double x3; })a0 springParameters:(struct { struct { double x0; double x1; double x2; } x0; struct { double x0; double x1; double x2; } x1; struct { double x0; double x1; double x2; } x2; BOOL x3; BOOL x4; BOOL x5; })a1 deltaTime:(double)a2;

@end
