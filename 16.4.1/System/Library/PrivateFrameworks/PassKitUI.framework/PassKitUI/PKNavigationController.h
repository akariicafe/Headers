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

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)initWithRootViewController:(id)a0;
- (long long)preferredStatusBarStyle;
- (void)dealloc;
- (void)viewDidLoad;
- (id)init;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)_updateBarAppearanceForViewController:(id)a0;
- (void)_updateWithWallpaperImage:(id)a0;
- (void)setNeedsNavigationBarUpdate;
- (void)setupBackgroundViewWithBlurEffect:(long long)a0;
- (void)setupWallpaper;

@end
