@class HMDCameraSnapshotSessionID, HMDCameraSnapshotMetrics, NSString, NSMutableArray, HMDSnapshotCompletionTimer;
@protocol HMDCameraGetSnapshotProtocol;

@interface HMDSnapshotSession : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID;
@property (readonly, nonatomic) id<HMDCameraGetSnapshotProtocol> snapshotGetter;
@property (readonly, nonatomic) HMDSnapshotCompletionTimer *snapshotCompletionTimer;
@property (readonly, nonatomic) NSMutableArray *sessionMessages;
@property (readonly, nonatomic) unsigned long long streamingTierType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)a0 accessory:(id)a1 snapshotGetter:(id)a2 message:(id)a3 waitPeriod:(double)a4 streamingTierType:(unsigned long long)a5 cameraLocallyReachable:(BOOL)a6 snapshotForNotification:(BOOL)a7;
- (void)respond:(id)a0 payload:(id)a1;

@end
