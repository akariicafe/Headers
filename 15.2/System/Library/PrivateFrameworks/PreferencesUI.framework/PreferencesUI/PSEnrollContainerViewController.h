@class BiometricKitUIEnrollViewController;

@interface PSEnrollContainerViewController : UIViewController

@property (retain, nonatomic) BiometricKitUIEnrollViewController *enrollController;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)teardown;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;
- (void)dealloc;

@end
