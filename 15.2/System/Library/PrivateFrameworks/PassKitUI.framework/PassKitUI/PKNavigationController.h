@class NSString, UIImageView, UIVisualEffectView, UIView;

@interface PKNavigationController : UINavigationController <UINavigationControllerDelegate> {
    BOOL _hasExplicitlyDefinedSupportedInterfaceOrientations;
    unsigned long long _explicitlyDefinedSupportedInterfaceOrientations;
    UIView *_backgroundView;
    UIImageView *_wallpaperView;
    UIVisualEffectView *_blurView;
    BOOL _hasStatusBarStyleOverride;
    long long _statusBarStyleOverride;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (long long)preferredStatusBarStyle;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void)viewDidLoad;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)_updateBarAppearanceForViewController:(id)a0;
- (void)_updateWithWallpaperImage:(id)a0;
- (void)setupBackgroundViewWithBlurEffect:(long long)a0;
- (void)setupWallpaper;
- (void)setNeedsNavigationBarUpdate;

@end
