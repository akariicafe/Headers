@class CAGradientLayer;

@interface SBAppSwitcherWallpaperGradientView : _UIBackdropView {
    CAGradientLayer *_gradientLayer;
}

@property (nonatomic) struct SBSwitcherGradientWallpaperAttributes { double leadingAlpha; double trailingAlpha; } attributes;

- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateGradientColors;
- (void).cxx_destruct;
- (id)initWithPrivateStyle:(long long)a0;

@end
