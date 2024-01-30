@class HMDAccessorySetupCoordinator, NSString, HMSetupAccessoryDescription, HMDHomeManager, NSUUID, HMFMessageDispatcher, HMDSBSRemoteAlertHandleProvider, NSObject, HMDXPCClientConnection;
@protocol OS_dispatch_queue, HMDSBSRemoteAlertHandle;

@interface HMDAccessorySetupManager : HMFObject <HMDSBSRemoteAlertHandleObserver, HMFLogging, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSString *accessorySetupHostBundleIdentifier;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) HMDHomeManager *homeManager;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider;
@property (copy) id /* block */ pendingAccessorySetupCompletionHandler;
@property (retain) HMSetupAccessoryDescription *pendingSetupAccessoryDescription;
@property (retain) id<HMDSBSRemoteAlertHandle> alertHandle;
@property double activationStartTime;
@property (retain, nonatomic) HMDXPCClientConnection *accessorySetupHostClientConnection;
@property (retain, nonatomic) HMDAccessorySetupCoordinator *accessorySetupCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (void)configure;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)_launchHUISWithNFCProxSetupURL:(id)a0;
- (void)handleNFCProxSetupNotification:(id)a0;
- (id)_accessorySetupResultFromCompletedInfo:(id)a0 clientIdentifierSalt:(id)a1;
- (id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)a0 error:(id *)a1;
- (void)_finishAccessorySetupWithSetupCompletedInfo:(id)a0 setupError:(id)a1;
- (void)_handleFailAccessorySetupMessage:(id)a0;
- (void)_handleFinishAccessorySetupMessage:(id)a0;
- (void)_handlePerformAccessorySetupMessage:(id)a0;
- (void)_handleResumeAccessorySetupMessage:(id)a0;
- (void)_launchHUISWithRequest:(id)a0 connection:(id)a1 completionHandler:(id /* block */)a2;
- (void)_launchHUISWithSetupAccessoryDescription:(id)a0 deviceSetupRequest:(id)a1 resumeSetupUserInfo:(id)a2 completionHandler:(id /* block */)a3;
- (id)_setupRequestBlockingPairedAccessories;
- (void)_updateAccessoryDescription:(id)a0 usingConnection:(id)a1;
- (void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)a0;
- (id)initWithWorkQueue:(id)a0 homeManager:(id)a1;
- (id)initWithWorkQueue:(id)a0 homeManager:(id)a1 messageDispatcher:(id)a2 alertHandleProvider:(id)a3;
- (void)launchAccessorySetupHostToPerformMatterDeviceSetupWithRequest:(id)a0 clientProxy:(id)a1 completionHandler:(id /* block */)a2;
- (void)launchAccessorySetupHostToRequestSetupCodeForAccessoryWithUUID:(id)a0 accessoryName:(id)a1 homeUUID:(id)a2 clientConnection:(id)a3 completionHandler:(id /* block */)a4;

@end
