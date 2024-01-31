@class UIViewController, UIView;
@protocol AVFullScreenViewControllerDelegate;

@interface AVFullScreenViewController : UIViewController

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate;
@property (weak, nonatomic) AVFullScreenViewController *associatedFullScreenViewController;
@property (weak, nonatomic) AVFullScreenViewController *sourceFullScreenViewController;

- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (BOOL)avkit_isEffectivelyFullScreen;
- (long long)preferredWhitePointAdaptivityStyle;
- (long long)preferredStatusBarStyle;
- (void)loadView;
- (id)keyCommands;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillMoveToWindow:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)_canShowWhileLocked;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)attachContentView;

@end
