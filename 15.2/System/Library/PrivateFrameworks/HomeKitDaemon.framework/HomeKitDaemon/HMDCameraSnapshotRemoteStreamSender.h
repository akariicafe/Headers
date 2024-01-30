@class HMDCameraSnapshotLocal, HMDCameraSnapshotIDSStreamInitiator, NSString;
@protocol HMDCameraSnapshotRemoteStreamSenderDelegate;

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging>

@property (readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteStreamSenderDelegate> delegate;
@property (readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (void)streamInitiator:(id)a0 didFailToSendFile:(id)a1;
- (void)snapshotLocal:(id)a0 didSaveSnapshotFile:(id)a1 error:(id)a2 sessionID:(id)a3;
- (void)snapShotTransferComplete;
- (void)getSnapshot:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 options:(id)a2 device:(id)a3 accessory:(id)a4 delegate:(id)a5 delegateQueue:(id)a6 uniqueIdentifier:(id)a7 snapshotRequestHandler:(id)a8;
- (void)sendSnapshotAtPath:(id)a0;
- (void)_callDidStartCaptureImageDelegate:(id)a0;
- (void)_callDidCompleteSendImageDelegate:(id)a0;

@end
