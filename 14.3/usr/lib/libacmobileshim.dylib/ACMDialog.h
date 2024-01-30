@class NSString;

@interface ACMDialog : UIViewController

@property (readonly) long long statusBarStyle;
@property long long savedStatusBarStyle;
@property (readonly) NSString *backgroundImageName;

+ (id)dialog;

- (long long)modalTransitionStyle;
- (id)init;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void)applicationDidEnterBackground;
- (void)viewWillAppear:(BOOL)a0;
- (void)applicationDidBecomeActive;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)applicationWillResignActive;
- (void)applicationWillEnterForeground;
- (void)disableControls:(BOOL)a0;
- (void)showWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)hideWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldManuallyChangeStatusBarStyle;

@end
