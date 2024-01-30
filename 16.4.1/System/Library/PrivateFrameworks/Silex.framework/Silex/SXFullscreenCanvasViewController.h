@protocol SXFullscreenCanvasViewControllerDelegate;

@interface SXFullscreenCanvasViewController : UIViewController

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) BOOL isTransitioning;
@property (weak, nonatomic) id<SXFullscreenCanvasViewControllerDelegate> delegate;

- (void)dismiss;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (long long)preferredStatusBarUpdateAnimation;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollToNext;
- (void)scrollToPrevious;

@end
