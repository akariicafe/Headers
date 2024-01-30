@class UIWindow, UIActivityIndicatorView, UIImageView, UIView, UIVisualEffectView;

@interface _TVAppLoadingView : UIView {
    UIView *_wallpaperView;
    UIWindow *_overlayWindow;
    BOOL _hiding;
    double _timeout;
    double _delay;
    UIImageView *_maskView;
    UIVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) UIActivityIndicatorView *spinner;

+ (id)loadingScreen;

- (void)setTimeout:(double)a0;
- (void)timeout;
- (void).cxx_destruct;
- (void)didRotate:(id)a0;
- (BOOL)isVisible;
- (void)hide;
- (void)setLoadingDelay:(double)a0;
- (void)showOverKeyWindowWithSpinnerOnly:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateImage:(id)a1;
- (void)showOverKeyWindow;
- (double)hideAnimationDuration;

@end
