@class _TVRelatedWrappingView, UIView;

@interface _TVRelatedContentShelfView : UIView {
    UIView *_lastFocusedView;
    _TVRelatedWrappingView *_relatedWrappingView;
}

@property (weak, nonatomic) UIView *shelfView;
@property (retain, nonatomic) UIView *relatedView;
@property (nonatomic) double relatedHeight;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void)_layoutRelatedView;

@end
