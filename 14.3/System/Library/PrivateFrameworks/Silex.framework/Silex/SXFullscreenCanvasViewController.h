@protocol SXFullscreenCanvasViewControllerDelegate;

@interface SXFullscreenCanvasViewController : UIViewController

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) id<SXFullscreenCanvasViewControllerDelegate> delegate;

- (long long)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (id)keyCommands;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismiss;
- (void)viewDidLoad;

@end
