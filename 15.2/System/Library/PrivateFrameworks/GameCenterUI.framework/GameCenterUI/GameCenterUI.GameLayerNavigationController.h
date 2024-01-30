@interface GameCenterUI.GameLayerNavigationController : UINavigationController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithRootViewController:(id)a0;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void)viewDidLoad;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (BOOL)_requiresCustomPresentationController;
- (void)didTapDone;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
