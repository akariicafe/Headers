@class AMSProcessInfo, NSString, AMSUIDynamicViewControllerDelegateProxy, AMSBagKeySet, NSDictionary, ACAccount;
@protocol AMSBagProtocol, AMSUIDynamicViewControllerDelegate;

@interface AMSUIDynamicViewController : AMSUICommonViewController <AMSUIDynamicViewControllerDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (readonly, nonatomic) AMSUIDynamicViewControllerDelegateProxy *delegateProxy;
@property (readonly, nonatomic) AMSUIDynamicViewController *dynamicViewController;
@property (retain, nonatomic) NSDictionary *internalClientOptions;
@property (retain, nonatomic) ACAccount *account;
@property (nonatomic) BOOL anonymousMetrics;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSDictionary *clientOptions;
@property (weak, nonatomic) id<AMSUIDynamicViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *mediaClientIdentifier;
@property (retain, nonatomic) NSDictionary *metricsOverlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)_setup;
- (void)viewDidLoad;
- (BOOL)isBeingDismissed;
- (id)preload;
- (void)viewDidAppear:(BOOL)a0;
- (id)title;
- (void)viewWillLayoutSubviews;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (BOOL)isMovingFromParentViewController;
- (id)navigationItem;
- (id)initWithBag:(id)a0 URL:(id)a1;
- (id)initWithBag:(id)a0 bagValue:(id)a1;
- (void)reloadContentViewImpressionItems;
- (id)initWithBag:(id)a0 javaScriptBagValue:(id)a1;
- (void)_setupContentSize;
- (id)initWithBag:(id)a0 javaScriptURL:(id)a1;

@end
