@class UIViewController, UIView;

@interface _TVProductCollectionViewCell : UICollectionViewCell {
    UIView *_titleView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _activeMargins;
    BOOL _marginActive;
}

@property (weak, nonatomic) UIViewController *viewController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } partialMargins;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;

- (BOOL)canBecomeFocused;
- (id)preferredFocusEnvironments;
- (id)titleView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setTitleView:(id)a0 margins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 show:(BOOL)a2;
- (void)showTitleView:(BOOL)a0;
- (BOOL)isShowingTitleView;
- (void)enableWithMargins:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)disableMargins;

@end
