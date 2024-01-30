@class UIButton, UIView;
@protocol MUScrollViewProtocol;

@interface MUPagingScrollControlsView : UIView {
    UIButton *_previousPageButton;
    UIButton *_nextPageButton;
    UIView<MUScrollViewProtocol> *_scrollView;
}

@property (readonly, nonatomic) BOOL shouldFlipPagingDirection;
@property (readonly, nonatomic) BOOL hoverActive;
@property (nonatomic) BOOL automaticallyFlipsForRTL;

- (void)_setupConstraints;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)_setupSubviews;
- (void)_scrollPrevious;
- (void)setHoverActive:(BOOL)a0;
- (void)_adjustScrollIndexByOffset:(long long)a0;
- (void)_scrollNext;
- (void)_updateChevronVisibility;
- (void)handleHover:(id)a0;
- (id)initWithHorizontalScrollView:(id)a0;

@end
