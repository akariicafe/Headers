@class UIButton, UIScrollView;

@interface MUPagingScrollControlsView : UIView {
    UIButton *_previousPageButton;
    UIButton *_nextPageButton;
    UIScrollView *_scrollView;
}

@property (readonly, nonatomic) BOOL shouldFlipPagingDirection;
@property (readonly, nonatomic) BOOL hoverActive;
@property (nonatomic) BOOL automaticallyFlipsForRTL;

- (void)_scrollNext;
- (void)_scrollPrevious;
- (void)handleHover:(id)a0;
- (void)_updateChevronVisibility;
- (void)_adjustScrollIndexByOffset:(long long)a0;
- (void)setHoverActive:(BOOL)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setupConstraints;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)initWithHorizontalScrollView:(id)a0;

@end
