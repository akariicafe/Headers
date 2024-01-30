@class UIStatusBarStyleAttributes, UIImageView;

@interface UIStatusBarBackgroundView : UIView {
    UIStatusBarStyleAttributes *_style;
    UIImageView *_glowView;
    BOOL _glowEnabled;
    BOOL _suppressGlow;
}

- (id)style;
- (id)_baseImage;
- (void)setGlowAnimationEnabled:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(id)a1 backgroundColor:(id)a2;
- (id)_glowImage;
- (BOOL)_styleCanGlow;
- (void)_setGlowAnimationEnabled:(BOOL)a0 waitForNextCycle:(BOOL)a1;
- (void)_startGlowAnimationWaitForNextCycle:(BOOL)a0;
- (void)_stopGlowAnimation;
- (id)_backgroundImageName;
- (void)setSuppressesGlow:(BOOL)a0;
- (void).cxx_destruct;

@end
