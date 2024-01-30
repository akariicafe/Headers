@class NSError, AMSUIErrorView, NSString;
@protocol AMSBagProtocol;

@interface AMSUICommonErrorViewController : AMSUICommonViewController

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (copy, nonatomic) id /* block */ cancelAction;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) AMSUIErrorView *errorView;
@property (copy, nonatomic) id /* block */ retryAction;
@property (retain, nonatomic) NSString *logKey;

- (void)_setup;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (id)navigationItem;
- (void)_cancelButtonAction;
- (void)_showCancelButton;
- (void)_setupNavigationItem;
- (id)initWithError:(id)a0 logKey:(id)a1 bag:(id)a2 retryAction:(id /* block */)a3 cancelAction:(id /* block */)a4;

@end
