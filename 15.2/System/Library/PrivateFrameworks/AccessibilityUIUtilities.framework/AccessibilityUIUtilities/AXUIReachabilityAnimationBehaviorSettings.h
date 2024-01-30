@interface AXUIReachabilityAnimationBehaviorSettings : NSObject <UIViewSpringAnimationBehaviorDescribing> {
    double _trackingDampingRatio;
    double _dampingRatio;
    double _trackingResponse;
    double _response;
    double _trackingRetargetImpulse;
    double _retargetImpulse;
}

- (struct { double x0; double x1; BOOL x2; BOOL x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; })parametersForTransitionFromState:(int)a0 toState:(int)a1;
- (id)initWithPayload:(id)a0;

@end
