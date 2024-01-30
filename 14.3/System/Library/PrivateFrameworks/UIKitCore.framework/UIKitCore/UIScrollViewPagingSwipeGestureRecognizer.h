@class UIDelayedAction;

@interface UIScrollViewPagingSwipeGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_swipeFailureDelay;
    struct CGPoint { double x; double y; } _startLocation;
    struct CGPoint { double x; double y; } _lastLocation;
    double _lastTime;
    int _directionalFailureCount;
}

+ (BOOL)_shouldDefaultToTouches;

- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)enoughTimeElapsed:(id)a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)_processNewLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)clearTimer;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
