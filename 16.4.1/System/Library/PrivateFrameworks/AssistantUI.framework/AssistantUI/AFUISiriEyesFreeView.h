@class UIImageView, SiriUIBackgroundBlurView, SiriUIVisualEffectView;

@interface AFUISiriEyesFreeView : UIView {
    SiriUIBackgroundBlurView *_backdropView;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
}

@property (readonly, nonatomic) long long eyesFreeMode;

- (id)backdropView;
- (void).cxx_destruct;
- (void)_configureEyesFreePresentation:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 eyesFreeMode:(long long)a1;

@end
