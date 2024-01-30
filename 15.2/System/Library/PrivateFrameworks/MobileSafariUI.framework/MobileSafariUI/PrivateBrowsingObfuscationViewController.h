@class SFCapsuleNavigationBarTheme, UIVisualEffectView, UIToolbar;

@interface PrivateBrowsingObfuscationViewController : UIViewController {
    UIVisualEffectView *_bottomBarBackground;
}

@property (weak, nonatomic) UIVisualEffectView *URLButtonBackground;
@property (weak, nonatomic) UIVisualEffectView *topBarBackground;
@property (weak, nonatomic) UIToolbar *bottomBar;
@property (weak, nonatomic) UIVisualEffectView *capsuleBackground;
@property (retain, nonatomic) SFCapsuleNavigationBarTheme *theme;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_updateTheme;

@end
