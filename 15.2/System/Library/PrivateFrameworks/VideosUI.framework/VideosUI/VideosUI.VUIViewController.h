@interface VideosUI.VUIViewController : UIViewController

@property (nonatomic, readonly) BOOL shouldAutomaticallyForwardAppearanceMethods;

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
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
