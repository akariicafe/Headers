@class PLMonotonicTimer, PLXPCListenerOperatorComposition, NSDictionary, PLEntryNotificationOperatorComposition, NSDate, PLNSNotificationOperatorComposition, NSMutableSet;

@interface PLProcessMonitorAgent : PLAgent

@property (retain) NSDate *currentCachedDate;
@property (retain) NSDate *previousCacheDate;
@property double currentCachedTotalCPUTime;
@property BOOL firstBoot;
@property (retain) PLMonotonicTimer *logTimer;
@property (retain) PLEntryNotificationOperatorComposition *batteryLevelChanged;
@property (retain) PLNSNotificationOperatorComposition *asertionNotifications;
@property (retain) NSMutableSet *processes;
@property (retain) NSDictionary *lastThreadIdToKTMonitorEntryDict;
@property (retain) NSDate *lastEntryDate;
@property BOOL launchServiceStatsEnabled;
@property long long processExitSummaryCount;
@property (retain) NSDictionary *lastFreezerProcs;
@property (retain) NSDictionary *diffFreezerProcs;
@property (retain) PLXPCListenerOperatorComposition *appResumePredictionsListener;
@property (retain) PLXPCListenerOperatorComposition *appResumeInferredCarryListener;
@property (retain) PLXPCListenerOperatorComposition *appNotFrozenListener;

+ (id)entryEventBackwardDefinitions;
+ (id)defaults;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointMemoryTracking;
+ (id)entryEventPointProcessSnapshot;
+ (id)entryEventPointProcessExit;
+ (id)entryEventPointFreezerStats;
+ (id)entryEventPointFreezerDemotion;
+ (id)entryEventPointSharedCacheReslid;
+ (id)entryEventPointAppResumePredictions;
+ (id)entryEventPointAppNotFrozen;
+ (id)entryEventPointSystemFreezerStats;
+ (id)entryEventForwardProcessID;
+ (id)entryEventForwardAppResumeInferredCarry;
+ (id)entryEventBackwardDefinitionProcessMonitor;
+ (id)entryEventBackwardProcessExitHistogram;
+ (id)entryEventBackwardDefinitionProcessPeakMemory;
+ (id)entryEventIntervalDefinitionProcessMonitorDiff;
+ (id)entryEventIntervalDefinitionKernelTaskMonitor;
+ (unsigned long long)PIDToCoalitionID:(int)a0;

- (void)log;
- (void).cxx_destruct;
- (id)trimConditionsForEntryKey:(id)a0 forTrimDate:(id)a1;
- (id)init;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void)processesOfInterest:(id)a0;
- (void)disableProcessExitLogging;
- (void)logEventIntervalProcessMonitorInterval;
- (void)logEventBackwardProcessPeakMemoryUsingCache;
- (void)logEventPointMemoryTracking;
- (void)logEventIntervalKernelTaskMonitor;
- (void)logProcessExit;
- (void)logEventPointFreezerStats;
- (void)logEventPointFreezerDemotion;
- (void)logEventPointSystemFreezerStats;
- (void)logProcDirtyStats;
- (void)logEventPointAppResumePredictions:(id)a0;
- (void)logEventPointAppNotFrozen:(id)a0;
- (void)logEventForwardAppResumeInferredCarry:(id)a0;
- (BOOL)isCachedForProcessID:(int)a0;
- (id)eventForwardProcessIDForPID:(int)a0;
- (void)enableProcessExitLogging;
- (void)logEventPointProcessSnapshot;
- (void)getCpuUsageAndMemoryForPid:(int)a0 withBuffer:(void *)a1 withNewProcessArray:(id)a2 withTotalCpu:(double *)a3 withActiveProcesses:(id)a4;
- (int)getLedgerIndex:(long long)a0 forKey:(id)a1;
- (void)updateProcessMonitorCache;
- (void)logEventIntervalProcessMonitorIntervalUsingCache;
- (void)logEventBackwardProcessMonitorUsingCache;
- (void)logEventPointProcessExit:(id)a0 withLabelCount:(id)a1 withStats:(struct { id x0; struct *x1; unsigned int x2; } *)a2 withDate:(id)a3 withNowInSec:(unsigned long long)a4;
- (void)logEventBackwardProcessExitHistogram:(id)a0 withStats:(struct { id x0; struct *x1; unsigned int x2; } *)a1 withDate:(id)a2;
- (id)getFrozenProcesses;
- (int)getFrozenToSwapLedgerIndex:(long long)a0;
- (id)ledgerDataAtIndex:(int)a0 forPid:(long long)a1;
- (id)getProcessesNotInFreezer:(id)a0 withCurrentProcesses:(id)a1;
- (int)getProcDirtyTimeLedgerIndex:(long long)a0;
- (id)processMonitorMultiKeyFromProcessID:(id)a0;
- (void)logEventPointSharedCacheReslid:(id)a0;
- (int)get_kthread_list:(unsigned long long **)a0;
- (BOOL)isCachedForProcessID:(int)a0 andName:(id)a1;
- (void)logEventBackwardProcessMonitor;

@end
