@class UITouch, NSTimer;

@interface MPTapGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { double x; double y; } _tapLocation;
    UITouch *_trackingTouch;
    NSTimer *_tapHandleTimer;
}

@property unsigned long long tapCount;

- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)reset;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)_setTapTimerWithDuration:(double)a0;
- (void)_resetTapTimer;
- (void)_delayedHandleTaps:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
