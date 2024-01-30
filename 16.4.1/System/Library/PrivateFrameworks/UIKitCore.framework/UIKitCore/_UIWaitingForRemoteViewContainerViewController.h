@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)stopSpinner;

@end
