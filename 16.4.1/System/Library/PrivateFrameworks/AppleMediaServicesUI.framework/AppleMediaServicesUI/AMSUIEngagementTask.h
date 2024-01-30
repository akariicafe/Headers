@class NSError, NSString, AMSEngagementRequest, AMSEngagementResult, AMSBagKeySet, AMSUIEngagementViewController, UIViewController, AMSProcessInfo;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSUIDynamicViewControllerDelegate, AMSUIEngagementViewControllerDelegate, PRXFlowDelegate, AMSBagConsumer> {
    BOOL _finished;
    BOOL _running;
}

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) UIViewController *cachedNavigationController;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) BOOL presented;
@property (retain, nonatomic) AMSEngagementRequest *request;
@property (retain, nonatomic) AMSEngagementResult *result;
@property (readonly, nonatomic) AMSUIEngagementViewController *taskController;
@property (retain, nonatomic) UIViewController *presentingViewController;
@property (nonatomic) BOOL allowMultiplePresentations;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (nonatomic) BOOL remotePresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (BOOL)isFinished;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (long long)_modalPresentationStyle;
- (id)initWithRequest:(id)a0 bag:(id)a1 presentingViewController:(id)a2;
- (id)presentEngagement;
- (id)_infoWithBuyParams:(id)a0 additionalInfo:(id)a1;
- (BOOL)_isInitialEngagementViewController;
- (BOOL)_isRemotePresentationEnabled;
- (BOOL)_isRemoteViewService;
- (BOOL)_isWindowPresentation;
- (id)_presentEngagementLocally;
- (id)_presentEngagementRemotely;
- (id)_presentTaskController;
- (id)_presentViewController:(id)a0 dismissBlock:(id /* block */)a1;
- (void)engagementViewController:(id)a0 didResolveWithResult:(id)a1 error:(id)a2;
- (void)engagementViewControllerShouldDismiss:(id)a0;

@end
