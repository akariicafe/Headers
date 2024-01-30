@class UIScrollViewPanGestureRecognizer;

@interface _UIScrollViewMockPanGestureRecognizer : NSObject {
    struct CGPoint { double x; double y; } _translation;
    struct CGPoint { double x; double y; } _velocity;
    long long _state;
}

@property (retain, nonatomic) UIScrollViewPanGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (struct CGPoint { double x0; double x1; })translationInView:(id)a0;
- (struct CGPoint { double x0; double x1; })velocityInView:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void).cxx_destruct;
- (void)setTranslation:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)simulateTranslation:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1;

@end
