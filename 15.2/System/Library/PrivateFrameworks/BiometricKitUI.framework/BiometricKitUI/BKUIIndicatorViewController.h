@class LAUIPhysicalButtonView;

@interface BKUIIndicatorViewController : UIViewController

@property (retain, nonatomic) LAUIPhysicalButtonView *physicalButtonView;
@property (nonatomic) BOOL shouldShow;

- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)_updateUI;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;

@end
