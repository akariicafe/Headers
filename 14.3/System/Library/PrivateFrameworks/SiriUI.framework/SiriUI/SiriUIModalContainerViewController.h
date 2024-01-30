@class UIViewController;
@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<SiriUIModalContainerViewControllerDelegate> delegate;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (id)initWithContentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;

@end
