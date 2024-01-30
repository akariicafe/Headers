@class NSString;

@interface ACMDialog : UIViewController

@property (readonly) long long statusBarStyle;
@property long long savedStatusBarStyle;
@property (readonly) NSString *backgroundImageName;

+ (id)dialog;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)applicationWillResignActive;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (id)init;
- (long long)modalTransitionStyle;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)disableControls:(BOOL)a0;
- (void)showWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)hideWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldManuallyChangeStatusBarStyle;

@end
