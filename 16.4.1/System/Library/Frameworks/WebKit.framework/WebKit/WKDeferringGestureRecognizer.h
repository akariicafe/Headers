@interface WKDeferringGestureRecognizer : UIGestureRecognizer {
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate>> { id m_weakReference; } _deferringGestureDelegate;
}

@property (nonatomic) BOOL immediatelyFailsAfterTouchEnd;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id).cxx_construct;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)initWithDeferringGestureDelegate:(id)a0;
- (BOOL)shouldDeferGestureRecognizer:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)endDeferral:(BOOL)a0;
- (void).cxx_destruct;
- (void)setState:(long long)a0;

@end
