@class NSDate, NSString, HMFTimer, NSError, NSMutableDictionary, HAP2AccessorySessionInfo, NSObject, HMDAccessory;
@protocol OS_dispatch_queue;

@interface HMDAccessorySessionMetric : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) HMDAccessory *accessory;
@property (copy, nonatomic) NSDate *sessionStartTime;
@property (nonatomic) BOOL hasActiveSession;
@property (copy, nonatomic) NSDate *reachableStartTime;
@property (nonatomic) BOOL isReachable;
@property (copy, nonatomic) NSDate *metricCollectionStartTime;
@property (copy, nonatomic) NSMutableDictionary *errorCounts;
@property (retain, nonatomic) HMFTimer *sessionMetricTimer;
@property (readonly, nonatomic) double timerInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (copy, nonatomic) NSString *accessoryTransport;
@property (nonatomic) double activeSessionDurationSec;
@property (nonatomic) double reachableDurationSec;
@property (nonatomic) unsigned long long sessionFailures;
@property (nonatomic) unsigned long long successfulSessionRetries;
@property (copy, nonatomic) NSError *topError;
@property (nonatomic) double submissionIntervalSec;
@property (readonly, nonatomic) BOOL isHomeThreadCapable;
@property (readonly, nonatomic) BOOL isCurrentPrimaryResident;
@property (readonly, nonatomic) double sessionCheckIntervalSec;
@property (copy, nonatomic) HAP2AccessorySessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (void)_submitMetric;
- (id)_currentTransportForAccessory:(id)a0;
- (void)_resetSessionMetric;
- (id)expectedTransport;
- (void)submitMetricAndStop;
- (void)updateReachableState:(BOOL)a0;
- (void)updateSessionState:(BOOL)a0 sessionInfo:(id)a1 withError:(id)a2;

@end
