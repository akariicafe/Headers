@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController

@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)teardown;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;

@end
