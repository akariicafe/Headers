@class NSUUID, HMDSnapshotRequestHandler, HMDSnapshotFile, NSString, HMDCameraResidentMessageHandler, HMDCameraSnapshotSessionID, HMDDevice, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (readonly, nonatomic) HMDDevice *remoteDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)_sendMessageWithName:(id)a0 payload:(id)a1 responseHandler:(id /* block */)a2;
- (void)_sendConfirmationToResident:(id /* block */)a0;
- (void)_sendRequestWithTierType:(unsigned long long)a0 toResident:(id /* block */)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 accessory:(id)a2 delegateQueue:(id)a3 uniqueIdentifier:(id)a4 snapshotRequestHandler:(id)a5 residentMessageHandler:(id)a6 remoteDevice:(id)a7;

@end
