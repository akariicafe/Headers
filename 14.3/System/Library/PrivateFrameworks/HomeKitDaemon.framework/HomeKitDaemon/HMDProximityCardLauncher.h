@class NSString, SBSRemoteAlertHandle, HMDAddAccessoryRequestInformation, NSObject;
@protocol OS_dispatch_queue;

@interface HMDProximityCardLauncher : NSObject <SBSRemoteAlertHandleObserver>

@property (class, readonly, nonatomic) NSString *proximityCardServiceBundleIdentifier;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) HMDAddAccessoryRequestInformation *internal_pendingAddAccessoryRequestInformation;
@property (retain, nonatomic) SBSRemoteAlertHandle *alertHandle;
@property (readonly, nonatomic) HMDAddAccessoryRequestInformation *pendingAddAccessoryRequestInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)handleNfcProxCardPayload:(id)a0;
- (void)_handleNfcProxCardPayload:(id)a0 completionHandler:(id /* block */)a1;
- (void)clearPendingAddAccessoryRequestInformation;

@end
