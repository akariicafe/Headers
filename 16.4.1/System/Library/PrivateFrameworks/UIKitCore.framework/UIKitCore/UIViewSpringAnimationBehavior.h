@interface UIViewSpringAnimationBehavior : NSObject <UIViewSpringAnimationBehaviorDescribing> {
    double _trackingDampingRatio;
    double _trackingResponse;
    double _dampingRatio;
    double _response;
    double _dampingRatioSmoothing;
    double _responseSmoothing;
}

@property (nonatomic) double inertialTargetSmoothing;
@property (nonatomic) double inertialProjectionDeceleration;

+ (id)behaviorWithDampingRatio:(double)a0 response:(double)a1;

- (struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })parametersForTransitionFromState:(int)a0 toState:(int)a1;
- (void)setDampingRatio:(double)a0 response:(double)a1;
- (void)setTrackingDampingRatio:(double)a0 response:(double)a1 dampingRatioSmoothing:(double)a2 responseSmoothing:(double)a3;
- (id)init;

@end
