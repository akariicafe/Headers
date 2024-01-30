@class HMDXPCClientConnection, NSString, HMDAccessorySetupCoordinator, NSUUID, NSMutableDictionary, HMDSBSRemoteAlertHandleProvider, HMFMessageDispatcher, NSObject, HMDAddAccessoryRequestInformation;
@protocol OS_dispatch_queue, HMDFeaturesDataSource, HMDSBSRemoteAlertHandle;

@interface HMDAccessorySetupManager : HMFObject <HMDSBSRemoteAlertHandleObserver, HMFMessageReceiver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSString *accessorySetupHostBundleIdentifier;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMFMessageDispatcher *homeDataMessageDispatcher;
@property (readonly) HMFMessageDispatcher *accessorySetupMessageDispatcher;
@property (readonly) HMDSBSRemoteAlertHandleProvider *alertHandleProvider;
@property (readonly) id<HMDFeaturesDataSource> featuresDataSource;
@property (readonly) NSMutableDictionary *completionHandlersByAddAccessoryRequestID;
@property (retain, nonatomic) HMDAddAccessoryRequestInformation *pendingAddAccessoryRequestInformation;
@property (retain) id<HMDSBSRemoteAlertHandle> alertHandle;
@property (retain, nonatomic) HMDXPCClientConnection *homeUIServiceConnection;
@property (retain, nonatomic) HMDAccessorySetupCoordinator *accessorySetupCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

- (void)configure;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (id)initWithWorkQueue:(id)a0 homeDataMessageDispatcher:(id)a1;
- (id)initWithWorkQueue:(id)a0 homeDataMessageDispatcher:(id)a1 accessorySetupMessageDispatcher:(id)a2 alertHandleProvider:(id)a3 featuresDataSource:(id)a4;
- (void)clearPendingAddAccessoryRequestInformation;
- (id)_createSetupAccessoryPayloadWithSetupPayloadURL:(id)a0 error:(id *)a1;
- (void)_launchHUISWithNFCProxSetupURL:(id)a0;
- (void)_launchHUISWithSetupAccessoryDescription:(id)a0 resumeSetupUserInfo:(id)a1 connection:(id)a2 completionHandler:(id /* block */)a3;
- (void)_finishAddAccessoryRequestInformationWithRequestIdentifier:(id)a0 accessorySetupCompletedInfo:(id)a1 setupError:(id)a2;
- (void)_handleAddAndSetUpAccessoriesMessage:(id)a0;
- (void)_handleAddAndSetUpAccessoriesForTopologyMessage:(id)a0;
- (void)_handleResumeAccessorySetupMessage:(id)a0;
- (void)_handleFinishAccessorySetupMessage:(id)a0;
- (void)handleNFCProxSetupNotification:(id)a0;
- (void)handleHomeUIServiceXPCConnectionStateDidChangeNotification:(id)a0;

@end
