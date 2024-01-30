@class NSArray, SKUIScrollingTabBarBackgroundView;

@interface SKUICrossFadingTabBar : UIView

@property (readonly, nonatomic) SKUIScrollingTabBarBackgroundView *backgroundView;
@property (copy, nonatomic) NSArray *tabBarButtons;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
