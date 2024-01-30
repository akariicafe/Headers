@class NSString, HMDCameraSnapshotIDSStreamReceiver;
@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate;

@interface HMDCameraSnapshotRemoteStreamReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSStreamReceiverDelegate, HMFLogging>

@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteStreamReceiverDelegate> delegate;
@property (retain, nonatomic) HMDCameraSnapshotIDSStreamReceiver *relayReceiver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)dealloc;
- (id)logIdentifier;
- (void)getSnapshot:(unsigned long long)a0;
- (void)_getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 options:(id)a2 accessory:(id)a3 delegate:(id)a4 delegateQueue:(id)a5 uniqueIdentifier:(id)a6 snapshotRequestHandler:(id)a7 residentMessageHandler:(id)a8;
- (void)snapShotSendFailed:(id)a0;
- (void)_callDidSaveImageDelegateWithError:(id)a0;
- (void)_callGettingImageDelegate:(id)a0;
- (void)relayReceiver:(id)a0 didReceiveFile:(id)a1;

@end
