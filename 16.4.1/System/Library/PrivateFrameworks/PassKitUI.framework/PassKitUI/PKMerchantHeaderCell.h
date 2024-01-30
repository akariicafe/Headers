@class UIColor, UIVisualEffect, PKSplashImageHeaderView, UIVisualEffectView, UIView;

@interface PKMerchantHeaderCell : PKDashboardCollectionViewCell {
    UIVisualEffectView *_overlayEffectView;
    UIView *_shadowView;
}

@property (readonly, nonatomic) PKSplashImageHeaderView *headerView;
@property (retain, nonatomic) UIVisualEffect *overlayEffect;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) double overlayAlpha;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
