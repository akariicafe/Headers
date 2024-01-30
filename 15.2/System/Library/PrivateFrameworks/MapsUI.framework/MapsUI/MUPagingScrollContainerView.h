@class UIScrollView, MUPagingScrollControlsView, UIView;

@interface MUPagingScrollContainerView : UIView {
    UIView *_containedView;
    UIScrollView *_containedScrollView;
    MUPagingScrollControlsView *_controlsView;
}

@property (nonatomic) long long cornerStyle;
@property (nonatomic) BOOL automaticallyFlipsForRTL;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithHorizontalScrollView:(id)a0;
- (void)_updateCorner;

@end
