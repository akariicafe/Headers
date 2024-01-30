@class HMFTimer, HMDCameraStreamSessionID, NSDictionary, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDVideoStreamReconfigureDelegate;

@interface HMDVideoStreamReconfigure : HMFObject <HMFTimerDelegate, HMFLogging>

@property (retain, nonatomic) NSDictionary *downlinkQualityInfo;
@property (readonly, nonatomic) NSMutableArray *reconfigureEvents;
@property (retain, nonatomic) HMFTimer *upgradeDebouceTimer;
@property (retain, nonatomic) HMFTimer *downgradeDebouceTimer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, weak) id<HMDVideoStreamReconfigureDelegate> delegate;
@property (nonatomic) BOOL reconfigurationMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void)_processDownlinkQuality;
- (void)_processDownlinkQualityChanged:(id)a0;
- (BOOL)_isReconfigureFlipFlop;
- (void)_callNetworkImproved;
- (void)_callNetworkDeteriorated;
- (void)_addReconfigureEvent:(unsigned long long)a0;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)updateReconfigurationMode:(BOOL)a0;
- (void)downlinkQualityChanged:(id)a0;

@end
