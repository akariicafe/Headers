@class UIDelayedAction, UIView;
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_touchDelay;
    struct CGPoint { double x; double y; } _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}

+ (BOOL)_shouldDefaultToTouches;

- (void)sendTouchesShouldBeginForDelayedTouches:(id)a0;
- (void)clearTimer;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)sendDelayedTouches;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)_clientView;
- (void)sendTouchesShouldBeginForTouches:(id)a0 withEvent:(id)a1;
- (void)_resetGestureRecognizer;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (BOOL)_shouldMakeTimerForDelayedContentTouches:(id)a0;

@end
