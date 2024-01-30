@interface UIFloatSpringIntegrator : NSObject

+ (struct { double x0; double x1; })integrateWithState:(struct { double x0; double x1; })a0 springParameters:(struct { double x0; double x1; double x2; })a1 deltaTime:(double)a2;

@end
