@class UIViewController;
@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<SiriUIModalContainerViewControllerDelegate> delegate;

- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void).cxx_destruct;

@end
