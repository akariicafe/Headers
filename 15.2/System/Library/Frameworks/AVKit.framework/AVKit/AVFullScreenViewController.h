@class UIViewController, UIView;
@protocol AVFullScreenViewControllerDelegate;

@interface AVFullScreenViewController : UIViewController

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate;
@property (weak, nonatomic) AVFullScreenViewController *associatedFullScreenViewController;
@property (weak, nonatomic) AVFullScreenViewController *sourceFullScreenViewController;

- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)prefersStatusBarHidden;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (id)_presentationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (id)keyCommands;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (BOOL)_requiresCustomPresentationController;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillMoveToWindow:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)avkit_isEffectivelyFullScreen;
- (void)attachContentView;

@end
