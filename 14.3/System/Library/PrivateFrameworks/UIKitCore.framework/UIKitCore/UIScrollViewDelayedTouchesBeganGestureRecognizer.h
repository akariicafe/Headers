@class UIDelayedAction, UIView;
@protocol UIScrollViewDelayedTouchesBeganGestureRecognizerClient;

@interface UIScrollViewDelayedTouchesBeganGestureRecognizer : UIGestureRecognizer {
    UIDelayedAction *_touchDelay;
    struct CGPoint { double x; double y; } _startSceneReferenceLocation;
    UIView<UIScrollViewDelayedTouchesBeganGestureRecognizerClient> *_client;
}

+ (BOOL)_shouldDefaultToTouches;

- (void)_resetGestureRecognizer;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)dealloc;
- (id)_clientView;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)sendTouchesShouldBeginForTouches:(id)a0 withEvent:(id)a1;
- (void)sendDelayedTouches;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)sendTouchesShouldBeginForDelayedTouches:(id)a0;
- (BOOL)_shouldMakeTimerForDelayedContentTouches:(id)a0;
- (void)clearTimer;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
