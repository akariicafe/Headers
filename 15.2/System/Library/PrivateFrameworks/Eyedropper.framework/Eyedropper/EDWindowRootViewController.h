@class EDLensView;

@interface EDWindowRootViewController : UIViewController

@property (retain, nonatomic) EDLensView *lensView;

- (void)viewDidLoad;
- (void)getRotationContentSettings:(struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; double x5; int x6; } *)a0 forWindow:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
