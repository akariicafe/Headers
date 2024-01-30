@class UIViewController, UIView;
@protocol AVFullScreenViewControllerDelegate;

@interface AVFullScreenViewController : UIViewController

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate;
@property (weak, nonatomic) AVFullScreenViewController *associatedFullScreenViewController;
@property (weak, nonatomic) AVFullScreenViewController *sourceFullScreenViewController;

- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)avkit_isEffectivelyFullScreen;
- (id)_presentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)keyCommands;
- (void).cxx_destruct;
- (void)viewWillMoveToWindow:(id)a0;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (BOOL)_requiresCustomPresentationController;
- (BOOL)canBecomeFirstResponder;
- (void)attachContentView;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)_canShowWhileLocked;
- (BOOL)modalPresentationCapturesStatusBarAppearance;

@end
