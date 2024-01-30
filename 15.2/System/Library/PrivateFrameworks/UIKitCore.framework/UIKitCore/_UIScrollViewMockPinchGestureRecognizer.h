@class UIScrollViewPinchGestureRecognizer;

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {
    double _scale;
    double _velocity;
    long long _state;
}

@property (retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (void)simulateScale:(double)a0 velocity:(double)a1;
- (id)forwardingTargetForSelector:(SEL)a0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (double)scale;
- (void).cxx_destruct;
- (id)_activeTouchesForEvent:(id)a0;
- (double)velocity;

@end
