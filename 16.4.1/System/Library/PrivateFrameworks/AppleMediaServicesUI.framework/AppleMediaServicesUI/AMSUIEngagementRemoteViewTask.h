@class NSError, NSString, AMSEngagementRequest, AMSEngagementResult, NSObject, UIViewController, NSXPCListener, AMSProcessInfo;
@protocol OS_dispatch_group, AMSBagProtocol;

@interface AMSUIEngagementRemoteViewTask : AMSTask <AMSUIEngagementTaskHostInterface>

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (retain, nonatomic) AMSEngagementRequest *request;
@property (retain, nonatomic) AMSEngagementResult *result;
@property (retain, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) struct CGSize { double width; double height; } preferredContentSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_snapshotBagDataPromise;
- (void)engagementTaskDidFinishWithResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)presentEngagement;
- (void)_presentViewController:(id)a0;
- (void)_unblock;
- (void)preferredContentSizeDidChange:(struct CGSize { double x0; double x1; })a0;
- (id)initWithRequest:(id)a0 presentingViewController:(id)a1;

@end
