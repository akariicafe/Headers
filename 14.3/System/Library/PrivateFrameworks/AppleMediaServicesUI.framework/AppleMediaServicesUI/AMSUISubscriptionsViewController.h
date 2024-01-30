@class AMSUIWebViewController, NSString, NSDictionary, AMSBagKeySet, ACAccount, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUISubscriptionsViewController : UIViewController <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) AMSUIWebViewController *webViewController;
@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)_setup;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_startLoading;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void)_setChildViewController:(id)a0;
- (void)viewDidLoad;
- (void)_setupChildViewController;
- (void)viewWillLayoutSubviews;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientInfo:(id)a2;
- (void)_setupLayout;

@end
