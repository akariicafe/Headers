@class LAUIPhysicalButtonView;

@interface BKUIIndicatorViewController : UIViewController

@property (retain, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) BOOL shouldShow;

- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_updateUI;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;

@end
