@class NWUsageTargetSelector, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TrafficMonitor : NSObject <FlowScheduledRefreshDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_samples;
    BOOL _userInitiatedFlowThreshold;
    BOOL _hasRunningTimer;
    BOOL _activePolling;
    id /* block */ _fetchBlock;
    double _samplePeriodThroughput;
    double _prevTrafficTimestamp;
    double _currentIdleStartTime;
    unsigned long long _prevTrafficCount;
    unsigned long long _numPollsHandled;
    unsigned long long _numPollsInitiated;
    unsigned long long _numPollsIgnored;
}

@property (readonly, nonatomic) BOOL trafficThreshold;
@property (readonly, nonatomic) double samplePeriodThroughput;
@property (readonly, nonatomic) double currentIdleDuration;
@property (readonly, nonatomic) double currentIdleStartTime;
@property (copy, nonatomic) id /* block */ fetchBlock;
@property (nonatomic) BOOL activePolling;
@property (retain, nonatomic) NWUsageTargetSelector *targetForPolling;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) double minSamplePeriod;
@property (nonatomic) double minSamplePeriodThroughputThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)didPollFlowsAt:(double)a0 periodic:(BOOL)a1;
- (id)getState;
- (void)_refreshValues;
- (BOOL)userInitiatedFlowThreshold;
- (void)setUserInitiatedFlowThreshold:(BOOL)a0;
- (int)didPollFlowsCallbackOrder;
- (void).cxx_destruct;
- (void)_timerMaintenance;
- (id)initWithQueue:(id)a0;

@end
