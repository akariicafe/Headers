@class UIViewController, UIView;
@protocol AVFullScreenViewControllerDelegate;

@interface AVFullScreenViewController : UIViewController

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) UIViewController<AVFullScreenViewControllerDelegate> *delegate;
@property (weak, nonatomic) AVFullScreenViewController *associatedFullScreenViewController;
@property (weak, nonatomic) AVFullScreenViewController *sourceFullScreenViewController;

- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (BOOL)shouldAutorotate;
- (void)viewWillMoveToWindow:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)targetForAction:(SEL)a0 withSender:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)_canShowWhileLocked;
- (BOOL)modalPresentationCapturesStatusBarAppearance;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (long long)preferredWhitePointAdaptivityStyle;
- (BOOL)avkit_isEffectivelyFullScreen;
- (long long)preferredStatusBarStyle;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)attachContentView;

@end
