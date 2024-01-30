@class UIViewController;
@protocol SiriUIModalContainerViewControllerDelegate;

@interface SiriUIModalContainerViewController : UIViewController

@property (readonly, nonatomic) UIViewController *contentViewController;
@property (weak, nonatomic) id<SiriUIModalContainerViewControllerDelegate> delegate;

- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (id)childViewControllerForStatusBarStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithContentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;

@end
