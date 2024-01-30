@class NSURL, UIViewController, NSString;
@protocol TKApplicationViewControllerDelegate;

@interface TKApplicationViewController : UIViewController

@property (retain, nonatomic) UIViewController *childViewController;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *viewName;
@property (retain, nonatomic) UIViewController *loadingViewController;
@property (weak, nonatomic) id<TKApplicationViewControllerDelegate> delegate;

+ (id)applicationViewController:(id)a0;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didLoadViewController:(id)a0;
- (void)dismissApplicationControllerAnimated:(BOOL)a0;
- (BOOL)handleApplicationControllerError;
- (id)initWithBundleURL:(id)a0 loadPage:(id)a1;
- (id)initWithBundleURL:(id)a0 loadPage:(id)a1 withData:(id)a2;
- (id)initWithBundleURL:(id)a0 loadPage:(id)a1 withDataRequest:(id)a2;
- (id)initWithBundleURL:(id)a0 viewName:(id)a1 delegate:(id /* block */)a2;

@end
