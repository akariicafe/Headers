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
@property (retain, nonatomic) NSString *subscriptionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)viewDidLoad;
- (void)_setup;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithAccount:(id)a0 bag:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)_startLoading;
- (void).cxx_destruct;
- (void)_setupLayout;
- (void)_setChildViewController:(id)a0;
- (void)_setupChildViewController;
- (id)initWithAccount:(id)a0 bag:(id)a1 clientInfo:(id)a2;

@end
