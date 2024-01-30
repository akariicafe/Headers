@protocol WKDeferringGestureRecognizerDelegate;

@interface WKDeferringGestureRecognizer : UIGestureRecognizer {
    struct WeakObjCPtr<id<WKDeferringGestureRecognizerDelegate> > { id m_weakReference; } _deferringGestureDelegate;
}

@property (readonly, weak, nonatomic) id<WKDeferringGestureRecognizerDelegate> deferringGestureDelegate;

- (BOOL)canBePreventedByGestureRecognizer:(id)a0;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setDefaultPrevented:(BOOL)a0;
- (id).cxx_construct;
- (id)initWithDeferringGestureDelegate:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)shouldDeferGestureRecognizer:(id)a0;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;

@end
