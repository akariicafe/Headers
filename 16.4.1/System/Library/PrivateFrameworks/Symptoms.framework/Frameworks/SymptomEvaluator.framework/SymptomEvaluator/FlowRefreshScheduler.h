@class NSString, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source, FlowImmediateRefreshDelegate;

@interface FlowRefreshScheduler : NSObject <ManagedEventInfoProtocol> {
    double _lastRefresh;
    double _lastScheduledExpiry;
    double _scheduledExpiry;
    double _currentDutyCycle;
    double _minimumDutyCycle;
    BOOL _inProgressRepeatingPoll;
    BOOL _inProgressSingleShotPoll;
    long long _seqno;
    NSMutableDictionary *_requests;
    long long _delegateSeqno;
    NSMutableDictionary *_delegates;
    NSMutableArray *_recentSingleShots;
    unsigned long long _numSingleShotCalls;
    unsigned long long _numSingleShotImmediateCallbacks;
    unsigned long long _numSingleShotNoDelay;
    unsigned long long _numSingleShotWaitExistingTimer;
    unsigned long long _numSingleShotPossNewTimer;
    unsigned long long _numSingleShotNoExistingTimer;
    unsigned long long _numPeriodicCalls;
    unsigned long long _numPeriodicCancels;
    unsigned long long _numInvalidCancels;
    unsigned long long _numTimerExpiries;
    unsigned long long _numDidPollFlows;
    unsigned long long _numImmediateTimerSpeedups;
    unsigned long long _numImmediateTimerCancellations;
    unsigned long long _numDelayedTimerSlowdowns;
    unsigned long long _numDelayedTimerCancellationsScheduled;
    unsigned long long _numDelayedTimerCancellationsRun;
    NSObject<OS_dispatch_source> *_timer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<FlowImmediateRefreshDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)refreshDataUsageFor:(id)a0 maxStale:(double)a1 maxDelay:(double)a2 logAs:(id)a3 callback:(id /* block */)a4;
+ (void)dumpState;

- (void)_generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (id)getState;
- (void)recalculateTimer;
- (void)refreshDataUsageFor:(id)a0 maxStale:(double)a1 maxDelay:(double)a2 logAs:(id)a3 callback:(id /* block */)a4;
- (void)setRepeatingTimer:(double)a0 initialDelay:(double)a1;
- (void)dumpState;
- (void)didPollFlowsAt:(double)a0;
- (void)addDelegate:(id)a0;
- (void)cancelTimer;
- (void)_refreshTimer;
- (void)removeDelegate:(id)a0;
- (void)cancelRefresh:(long long)a0;
- (long long)periodicRefreshDataUsageFor:(id)a0 interval:(double)a1 maxStale:(double)a2 maxDelay:(double)a3 logAs:(id)a4;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
