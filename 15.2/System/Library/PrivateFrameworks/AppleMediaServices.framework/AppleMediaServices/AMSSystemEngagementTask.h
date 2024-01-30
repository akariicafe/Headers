@class NSError, NSString, SBSRemoteAlertHandle, AMSEngagementRequest, AMSEngagementResult, AMSBagKeySet, NSObject, NSXPCListener, AMSProcessInfo;
@protocol OS_dispatch_group, AMSBagProtocol;

@interface AMSSystemEngagementTask : AMSTask <AMSSystemEngagementTaskClientInterface, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (retain, nonatomic) AMSEngagementResult *result;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, nonatomic) AMSEngagementRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)initWithRequest:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (id)_snapshotBagDataPromise;
- (id)_unlockDeviceIfNeeded;
- (void)_invalidateRemoteAlert;
- (void)_activateRemoteAlertWithBagData:(id)a0 clientInfoData:(id)a1 engagementRequestData:(id)a2;
- (void)engagementTaskDidFinishWithResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (id)present;

@end
