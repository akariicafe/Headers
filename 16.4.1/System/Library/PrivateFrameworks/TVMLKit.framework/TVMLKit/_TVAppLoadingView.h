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

- (BOOL)isVisible;
- (void)timeout;
- (void)setTimeout:(double)a0;
- (void)didRotate:(id)a0;
- (void)hide;
- (void).cxx_destruct;
- (double)hideAnimationDuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 templateImage:(id)a1;
- (void)setLoadingDelay:(double)a0;
- (void)showOverKeyWindow;
- (void)showOverKeyWindowWithSpinnerOnly:(BOOL)a0;

@end
