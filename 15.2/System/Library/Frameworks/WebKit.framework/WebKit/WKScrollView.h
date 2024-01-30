@class WKWebView;
@protocol UIScrollViewDelegate;

@interface WKScrollView : UIScrollView {
    struct WeakObjCPtr<id<UIScrollViewDelegate>> { id m_weakReference; } _externalDelegate;
    struct RetainPtr<WKScrollViewDelegateForwarder> { void *m_ptr; } _delegateForwarder;
    BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    BOOL _contentInsetWasExternallyOverridden;
    double _keyboardBottomInsetAdjustment;
    BOOL _scrollEnabledByClient;
    BOOL _scrollEnabledInternal;
    BOOL _zoomEnabledByClient;
    BOOL _zoomEnabledInternal;
    struct optional<UIEdgeInsets> { union { char __null_state_; struct UIEdgeInsets { double top; double left; double bottom; double right; } __val_; } ; BOOL __engaged_; } _contentScrollInsetFromClient;
    struct optional<UIEdgeInsets> { union { char __null_state_; struct UIEdgeInsets { double top; double left; double bottom; double right; } __val_; } ; BOOL __engaged_; } _contentScrollInsetInternal;
}

@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate;
@property (readonly, nonatomic) BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize { double x0; double x1; })a0;
- (void)_updateContentScrollInset;
- (void)setScrollEnabled:(BOOL)a0;
- (void)setZoomEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setScrollEnabledInternal:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (struct CGSize { double x0; double x1; })_currentTopLeftRubberbandAmount;
- (void)setDelegate:(id)a0;
- (double)_rubberBandOffsetForOffset:(double)a0 maxOffset:(double)a1 minOffset:(double)a2 range:(double)a3 outside:(BOOL *)a4;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize { double x0; double x1; })a0;
- (BOOL)_setContentScrollInsetInternal:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void).cxx_destruct;
- (void)_updateZoomability;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_systemContentInset;
- (id)delegate;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)a0;
- (void)_setZoomEnabledInternal:(BOOL)a0;
- (void)_adjustForAutomaticKeyboardInfo:(id)a0 animated:(BOOL)a1 lastAdjustment:(double *)a2;
- (void)setContentInsetAdjustmentBehavior:(long long)a0;
- (id).cxx_construct;
- (void)_updateScrollability;
- (void)_setContentScrollInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_updateDelegate;

@end
