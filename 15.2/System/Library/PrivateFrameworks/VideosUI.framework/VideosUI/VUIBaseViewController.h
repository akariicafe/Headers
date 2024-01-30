@interface VUIBaseViewController : UIViewController

- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)willMoveToParentViewController:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewDidAppear:(BOOL)a0;

@end
