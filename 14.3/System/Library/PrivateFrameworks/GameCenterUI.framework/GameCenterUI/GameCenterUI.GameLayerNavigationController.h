@interface GameCenterUI.GameLayerNavigationController : UINavigationController <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ doneButton;
}

@property (nonatomic) struct CGSize { double x0; double x1; } preferredContentSize;

- (void).cxx_destruct;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (id)initWithCoder:(id)a0;
- (BOOL)_requiresCustomPresentationController;
- (void)didTapDone;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;

@end
