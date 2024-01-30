@class UIDelayedAction, UIView;
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_touchDelay;
    struct CGPoint { double x; double y; } _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}

+ (BOOL)_shouldDefaultToTouches;

- (void)clearTimer;
- (void)_resetGestureRecognizer;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)_clientView;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)_shouldMakeTimerForDelayedContentTouches:(id)a0;
- (void)dealloc;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)sendTouchesShouldBeginForTouches:(id)a0 withEvent:(id)a1;
- (void)sendDelayedTouches;

@end
