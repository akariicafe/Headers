@class WKWebView, WKScrollViewDelegateForwarder;
@protocol UIScrollViewDelegate;

@interface WKScrollView : UIScrollView {
    struct WeakObjCPtr<id<UIScrollViewDelegate> > { id m_weakReference; } _externalDelegate;
    WKScrollViewDelegateForwarder *_delegateForwarder;
    BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    double _keyboardBottomInsetAdjustment;
    BOOL _scrollEnabledByClient;
    BOOL _scrollEnabledInternal;
    BOOL _zoomEnabledByClient;
    BOOL _zoomEnabledInternal;
}

@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate;
@property (readonly, nonatomic) BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;

- (void)setZoomEnabled:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (double)_rubberBandOffsetForOffset:(double)a0 maxOffset:(double)a1 minOffset:(double)a2 range:(double)a3 outside:(BOOL *)a4;
- (void)setContentInsetAdjustmentBehavior:(long long)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)_setContentInsetAdjustmentBehaviorInternal:(long long)a0;
- (void)dealloc;
- (void)setContentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_adjustForAutomaticKeyboardInfo:(id)a0 animated:(BOOL)a1 lastAdjustment:(double *)a2;
- (void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize { double x0; double x1; })a0;
- (void)_setScrollEnabledInternal:(BOOL)a0;
- (void)_updateZoomability;
- (id).cxx_construct;
- (void)setScrollEnabled:(BOOL)a0;
- (void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })_currentTopLeftRubberbandAmount;
- (void)_setZoomEnabledInternal:(BOOL)a0;
- (void)setDelegate:(id)a0;
- (void)_updateScrollability;
- (id)delegate;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_systemContentInset;
- (void)_updateDelegate;

@end
