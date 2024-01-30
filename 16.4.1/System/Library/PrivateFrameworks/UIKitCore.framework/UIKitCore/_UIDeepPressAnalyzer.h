@class _UIVelocityIntegrator;

@interface _UIDeepPressAnalyzer : NSObject

@property (retain, nonatomic) _UIVelocityIntegrator *touchForceIntegrator;
@property (retain, nonatomic) _UIVelocityIntegrator *locationIntegrator;
@property (readonly, nonatomic, getter=isDeepPressLikely) BOOL deepPressLikely;

- (void)analyzeTouches:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (double)_touchForceFromTouches:(id)a0;
- (void)analyzeTouchForce:(double)a0 centroidAtLocation:(struct CGPoint { double x0; double x1; })a1;

@end
