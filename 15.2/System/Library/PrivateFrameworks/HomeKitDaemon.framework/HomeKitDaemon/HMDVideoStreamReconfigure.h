@class HMFTimer, NSString, NSDictionary, HMDCameraStreamSessionID, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, HMDVideoStreamReconfigureDelegate;

@interface HMDVideoStreamReconfigure : HMFObject <HMFTimerDelegate, HMFLogging> {
    BOOL _reconfigurationMode;
    NSDictionary *_downlinkQualityInfo;
    NSMutableArray *_reconfigureEvents;
    HMFTimer *_upgradeDebouceTimer;
    HMFTimer *_downgradeDebouceTimer;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDCameraStreamSessionID *_sessionID;
    id<HMDVideoStreamReconfigureDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 workQueue:(id)a1 delegate:(id)a2 delegateQueue:(id)a3;
- (void)updateReconfigurationMode:(BOOL)a0;
- (void)downlinkQualityChanged:(id)a0;

@end
