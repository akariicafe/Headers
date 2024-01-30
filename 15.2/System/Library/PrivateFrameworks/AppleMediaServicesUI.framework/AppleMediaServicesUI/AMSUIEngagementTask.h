@class UIViewController, NSString, AMSEngagementResult, AMSBagKeySet, NSError, AMSProcessInfo, AMSEngagementRequest;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, PRXFlowDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL presented;
@property (retain, nonatomic) AMSEngagementRequest *request;
@property (retain, nonatomic) AMSEngagementResult *result;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) BOOL remotePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (void)_presentViewController:(id)a0;
- (long long)_modalPresentationStyle;
- (void)dynamicViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (void)webViewController:(id)a0 didFinishPurchaseWithResult:(id)a1 error:(id)a2;
- (id)initWithRequest:(id)a0 bag:(id)a1 presentingViewController:(id)a2;
- (id)presentEngagement;
- (void)webViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (BOOL)_isRemotePresentationEnabled;
- (id)_presentEngagementRemotely;
- (id)_presentEngagementLocally;
- (id)_viewControllerForType:(id)a0;
- (void)_receivedPurchaseResult:(id)a0;
- (void)_finishWithResultInfo:(id)a0 error:(id)a1;
- (BOOL)_isRemoteViewService;
- (id)_infoWithBuyParams:(id)a0 additionalInfo:(id)a1;

@end
