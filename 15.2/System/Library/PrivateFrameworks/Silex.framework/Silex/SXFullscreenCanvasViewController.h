@protocol SXFullscreenCanvasViewControllerDelegate;

@interface SXFullscreenCanvasViewController : UIViewController

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) id<SXFullscreenCanvasViewControllerDelegate> delegate;

- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)keyCommands;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollToNext;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)scrollToPrevious;

@end
