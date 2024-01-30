@class NSString, UIVisualEffectView, _UIBarBackgroundLayout, UIView, UIImageView, _UIBarBackgroundShadowView;

@interface _UIBarBackground : UIView {
    UIVisualEffectView *_effectView1;
    UIImageView *_colorAndImageView1;
    _UIBarBackgroundShadowView *_shadowView1;
    UIVisualEffectView *_effectView2;
    UIImageView *_colorAndImageView2;
    _UIBarBackgroundShadowView *_shadowView2;
    UIView *_topInsetView;
    double _bg1LastLayoutHeight;
    double _bg2LastLayoutHeight;
    struct { unsigned char needsTopInsetView : 1; unsigned char needsEffectView1 : 1; unsigned char needsColorAndImageView1 : 1; unsigned char needsShadowView1 : 1; unsigned char needsEffectView2 : 1; unsigned char needsColorAndImageView2 : 1; unsigned char needsShadowView2 : 1; } _backgroundFlags;
}

@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) BOOL topAligned;
@property (retain, nonatomic) _UIBarBackgroundLayout *layout;
@property (retain, nonatomic) UIView *customBackgroundView;

- (void)_setupShadowView:(id)a0 effect:(id)a1 image:(id)a2 shadowColor:(id)a3 shadowTint:(id)a4 alpha:(double)a5;
- (id)_shadowView;
- (void)encodeWithCoder:(id)a0;
- (id)_encodableSubviews;
- (void)_orderSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForYOrigin:(double)a0 height:(double)a1;
- (id)_backgroundEffectView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)cleanupBackgroundViews;
- (void)transition:(unsigned long long)a0 toLayout:(id)a1;
- (void)set_shadowView:(id)a0;
- (void)prepareBackgroundViews;
- (void)_updateBackgroundViewVisiblity;
- (void)layoutSubviews;
- (void)transitionBackgroundViews;
- (void)set_backgroundEffectView:(id)a0;
- (void)updateBackground;
- (void).cxx_destruct;
- (void)_setupBackgroundValues;

@end
