@class UIScrollViewPinchGestureRecognizer;

@interface _UIScrollViewMockPinchGestureRecognizer : NSObject {
    double _scale;
    double _velocity;
    long long _state;
}

@property (retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (id)forwardingTargetForSelector:(SEL)a0;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (double)scale;
- (double)velocity;
- (id)_activeTouchesForEvent:(id)a0;
- (void).cxx_destruct;
- (void)simulateScale:(double)a0 velocity:(double)a1;

@end
