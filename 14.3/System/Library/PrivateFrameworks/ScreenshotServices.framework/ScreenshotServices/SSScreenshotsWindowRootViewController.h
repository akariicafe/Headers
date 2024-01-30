@class UIViewController;

@interface SSScreenshotsWindowRootViewController : UIViewController

@property (retain, nonatomic) UIViewController *managedViewController;

- (void).cxx_destruct;
- (void)getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0 forWindow:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
