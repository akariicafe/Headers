@protocol PSEnrollmentNavigationControllerDismissalDelegate;

@interface PSEnrollmentNavigationController : UINavigationController

@property (weak, nonatomic) id<PSEnrollmentNavigationControllerDismissalDelegate> dismissalDelegate;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)_backgroundColorForModalFormSheet;
- (BOOL)canBeShownFromSuspendedState;

@end
