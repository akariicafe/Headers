@class NWUsageTargetSelector, NSString, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface TrafficMonitor : NSObject {
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

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)initWithQueue:(id)a0;
- (id)getState;
- (void).cxx_destruct;
- (void)didSampleFlows;
- (void)setUserInitiatedFlowThreshold:(BOOL)a0;
- (void)_timerMaintenance;
- (void)_refreshValues;
- (BOOL)userInitiatedFlowThreshold;

@end
