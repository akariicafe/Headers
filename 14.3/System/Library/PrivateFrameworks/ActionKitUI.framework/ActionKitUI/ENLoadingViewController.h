@class UIActivityIndicatorView;
@protocol ENLoadingViewControllerDelegate;

@interface ENLoadingViewController : UIViewController

@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) id<ENLoadingViewControllerDelegate> delegate;

- (void)cancel:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;

@end
