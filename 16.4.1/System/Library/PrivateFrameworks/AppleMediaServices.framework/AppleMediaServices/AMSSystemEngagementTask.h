@class NSError, NSString, NSXPCConnection, SBSRemoteAlertHandle, RBSProcessHandle, AMSEngagementResult, AMSBagKeySet, NSObject, AMSEngagementRequest, FBSDisplayLayoutMonitor, NSXPCListener, AMSProcessInfo;
@protocol OS_dispatch_group, AMSBagProtocol, NSObject;

@interface AMSSystemEngagementTask : AMSTask <AMSSystemEngagementTaskClientInterface, NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, AMSBagConsumer>

@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;
@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;

@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *displayLayoutMonitor;
@property (retain, nonatomic) id<NSObject> displayDidBecomeActiveToken;
@property (retain, nonatomic) id<NSObject> displayWillForegroundToken;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) RBSProcessHandle *presentationTargetHandle;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (retain, nonatomic) AMSEngagementResult *result;
@property (retain, nonatomic) NSXPCConnection *underlyingRemoteConnection;
@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (nonatomic) BOOL disablePresentationTarget;
@property (readonly, nonatomic) AMSEngagementRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (void)remoteAlertHandleDidActivate:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithRequest:(id)a0;
- (id)present;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithRequest:(id)a0 bag:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)_activateIfWithError:(id *)a0;
- (void)_finishTaskWithResult:(id)a0 error:(id)a1;
- (void)_invalidateRemoteAlert;
- (void)_listenForAppForegroundWithHandle:(id)a0 usesAuditToken:(BOOL)a1;
- (id)_snapshotBagDataPromise;
- (id)_unlockDeviceIfNeeded;
- (void)engagementTaskDidFinishWithResult:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)initializeClientToViewServiceConnection;

@end
