@class HMFTimer, NSString, NSPointerArray, HMFUnfairLock, HMISystemResourceUsageMonitor;

@interface HMIVideoAnalyzerScheduler : HMFObject <HMFLogging, HMFTimerDelegate, HMISystemResourceUsageMonitorDelegate> {
    HMFUnfairLock *_lock;
    HMFTimer *_tick;
    NSPointerArray *_internalAnalyzers;
    HMISystemResourceUsageMonitor *_usageMonitor;
    long long _usageLevel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (void)systemResourceUsageDidChangeTo:(long long)a0;
- (void)_compactInternalAnalyzers;
- (void)registerAnalyzer:(id)a0;
- (id)_getAnalyzers;
- (void)_updateAnalyzer:(id)a0 withIndex:(unsigned long long)a1;
- (void)_logState;

@end
