@class UITouch;

@interface MPSwipeGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _startLocation;
    double _startTime;
    UITouch *_trackingTouch;
}

@property (readonly, nonatomic) long long swipeDirection;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
