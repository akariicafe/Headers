@class UIViewController;

@interface SSScreenshotsWindowRootViewController : UIViewController

@property (retain, nonatomic) UIViewController *managedViewController;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0 forWindow:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
