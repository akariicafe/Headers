@class UIViewController, NSString, AMSBagKeySet, AMSEngagementRequest;
@protocol AMSBagProtocol;

@interface AMSUIEngagementTask : AMSTask <AMSUIWebDelegate, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (nonatomic) BOOL presented;
@property (retain, nonatomic) AMSEngagementRequest *request;
@property (copy, nonatomic) id /* block */ resolveBlock;
@property (retain, nonatomic) UIViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void).cxx_destruct;
- (id)presentEngagement;
- (id)initWithRequest:(id)a0 bag:(id)a1 presentingViewController:(id)a2;
- (void)_presentViewController:(id)a0;
- (BOOL)webViewController:(id)a0 handleDelegateAction:(id)a1 completion:(id /* block */)a2;
- (id)_viewControllerForType:(id)a0;

@end
