@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer {
    struct CGPoint { double x; double y; } _touch0InitialLocation;
    struct CGPoint { double x; double y; } _touch1InitialLocation;
    double _lastTransitionProgress;
}

@property (readonly, nonatomic) double transitionProgress;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } centerOffset;
@property (readonly, nonatomic) unsigned long long transitionDirection;
@property (readonly, nonatomic) BOOL transitionShouldFinish;

- (void)setState:(long long)a0;
- (void)reset;
- (void)_resetTransitionState;

@end
