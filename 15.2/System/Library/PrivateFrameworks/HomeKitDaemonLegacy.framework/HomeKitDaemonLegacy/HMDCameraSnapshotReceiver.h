@class NSUUID, HMDSnapshotRequestHandler, HMDSnapshotFile, HMDCameraSnapshotMetrics, NSString, HMDCameraResidentMessageHandler, HMDCameraSnapshotSessionID, NSDictionary, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, weak, nonatomic) HMDAccessory *accessory;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile;
@property (readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler;
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler;
@property (retain, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)_sendMessageWithName:(id)a0 payload:(id)a1 responseHandler:(id /* block */)a2;
- (void)_sendConfirmationToResident:(id /* block */)a0;
- (id)_sendRequestWithTierType:(unsigned long long)a0 toResident:(id /* block */)a1;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 options:(id)a2 accessory:(id)a3 delegateQueue:(id)a4 uniqueIdentifier:(id)a5 snapshotRequestHandler:(id)a6 residentMessageHandler:(id)a7;

@end
