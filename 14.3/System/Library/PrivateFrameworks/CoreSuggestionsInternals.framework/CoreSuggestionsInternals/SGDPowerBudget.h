@class _DASScheduler, SGDPowerBudgetThrottlingState, NSDate, NSObject;
@protocol OS_os_log, NSObject;

@interface SGDPowerBudget : NSObject {
    SGDPowerBudgetThrottlingState *_throttlingState;
    NSDate *_lastPlugInTime;
    id<NSObject> _batteryObserver;
    _DASScheduler *_scheduler;
    _Atomic BOOL _discretionaryWorkInProgress;
    NSObject<OS_os_log> *_log;
}

+ (id)defaultBudget;
+ (void)setCanDoWorkOverrideForTesting:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_startDuetBudgetedWork;
- (void)dealloc;
- (void)doDiscretionaryWork:(id /* block */)a0 orElse:(id /* block */)a1;
- (void)_endDuetBudgetedWork;
- (BOOL)_hasDuetBudgetRemaining;
- (BOOL)_hasThrottleBudgetRemaining;
- (BOOL)_startWork;
- (void)_endWork;
- (id)throttlingState;
- (BOOL)canDoExtraDiscretionaryWork;
- (BOOL)_hasExtraThrottleBudgetRemaining;
- (void)_endThrottleBudgetedWork;
- (void)_didConsumeAnExtraBudgetedOperation;
- (BOOL)_canDoDiscretionaryWork:(id *)a0;
- (void)didConsumeAnExtraBudgetedOperation;
- (BOOL)canDoDiscretionaryWork;
- (void)_startThrottleBudgetedWork;

@end
