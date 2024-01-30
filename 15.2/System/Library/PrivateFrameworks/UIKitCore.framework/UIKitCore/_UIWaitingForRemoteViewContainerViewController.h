@class UIActivityIndicatorView;

@interface _UIWaitingForRemoteViewContainerViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;

- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)stopSpinner;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
