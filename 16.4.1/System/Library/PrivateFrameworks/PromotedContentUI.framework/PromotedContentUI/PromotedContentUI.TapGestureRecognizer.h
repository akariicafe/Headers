@interface PromotedContentUI.TapGestureRecognizer : UIGestureRecognizer <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ kMaximumTimeSinceTap;
    void /* unknown type, empty encoding */ touchDownHandler;
    void /* unknown type, empty encoding */ touchMovedHandler;
    void /* unknown type, empty encoding */ touchUpHandler;
    void /* unknown type, empty encoding */ shouldBlockNavigation;
    void /* unknown type, empty encoding */ mostRecentTapLocation;
    void /* unknown type, empty encoding */ lastTrackedTouch;
    void /* unknown type, empty encoding */ mostRecentTapTimestamp;
    void /* unknown type, empty encoding */ location;
    void /* unknown type, empty encoding */ pointIsInsideView;
    void /* unknown type, empty encoding */ preventedTouches;
    void /* unknown type, empty encoding */ $__lazy_storage_$_scrollableAncestor;
}

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (BOOL)canPreventGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)init;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)reset;

@end
