@class NSString, HMDCameraSnapshotIDSRelayReceiver;
@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;

@interface HMDCameraSnapshotRemoteRelayReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging>

@property (weak, nonatomic) id<HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate;
@property (retain, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_callDidSaveImageDelegateWithError:(id)a0;
- (void)_callGettingImageDelegate:(id)a0;
- (void)_getSnapshot:(unsigned long long)a0;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegate:(id)a3 delegateQueue:(id)a4 uniqueIdentifier:(id)a5 snapshotRequestHandler:(id)a6 residentMessageHandler:(id)a7 remoteDevice:(id)a8;
- (void)relayReceiver:(id)a0 didReceiveData:(id)a1 error:(id)a2;
- (void)relayReceiverDidAcceptIDSInvitation:(id)a0;
- (void)relayReceiverIDSSessionDidStart:(id)a0;
- (void)snapShotSendFailed:(id)a0;

@end
