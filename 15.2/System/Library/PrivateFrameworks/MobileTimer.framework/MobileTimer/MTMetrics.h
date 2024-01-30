@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logTimerDeleted;
- (void)logAlarmAdded:(BOOL)a0;
- (void)logSyncFailedWithError:(id)a0;
- (void)logTimerUpdated;
- (void)logTimerAdded;
- (void)logMultipleTimersAdded:(id)a0;
- (void)logTimerDismissed;
- (void)logAlarmDeleted:(BOOL)a0;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)logAlarmUpdated:(BOOL)a0;
- (id)init;
- (void)logTimerRepeated;
- (void)logSyncCompleted;
- (void)logAlarmDismissAction:(unsigned long long)a0;

@end
