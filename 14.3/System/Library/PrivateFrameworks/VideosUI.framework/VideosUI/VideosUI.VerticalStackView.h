@interface VideosUI.VerticalStackView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ platterView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_expandableView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panelView;
    void /* unknown type, empty encoding */ footerView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_platterContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_hangerView;
    void /* unknown type, empty encoding */ panGesture;
    void /* unknown type, empty encoding */ topPlatterGradient;
    void /* unknown type, empty encoding */ bottomExpandableGradient;
    void /* unknown type, empty encoding */ bottomPlatterGradient;
    void /* unknown type, empty encoding */ lastExpandableViewFrame;
    void /* unknown type, empty encoding */ lastPanelFrame;
    void /* unknown type, empty encoding */ initialExpandableHeight;
    void /* unknown type, empty encoding */ maxExpandableHeight;
    void /* unknown type, empty encoding */ scrollDraggedOffset;
    void /* unknown type, empty encoding */ isScrollable;
    void /* unknown type, empty encoding */ isPartiallyExpanded;
}

- (void)scrollViewDidScroll:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)panGestureHandler:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;

@end
