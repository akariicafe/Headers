@class NSString;

@interface ACMDialog : UIViewController

@property (readonly) long long statusBarStyle;
@property long long savedStatusBarStyle;
@property (readonly) NSString *backgroundImageName;

+ (id)dialog;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (long long)modalTransitionStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)disableControls:(BOOL)a0;
- (void)hideWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)shouldManuallyChangeStatusBarStyle;
- (void)showWithParentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
