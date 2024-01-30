@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logAlarmAdded:(BOOL)a0;
- (void)logTimerDeleted;
- (void)logSyncCompleted;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logTimerUpdated;
- (void)logTimerRepeated;
- (void)logAlarmDeleted:(BOOL)a0;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logTimerDismissed;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logTimerAdded;
- (id)init;
- (void)logSyncFailedWithError:(id)a0;
- (void).cxx_destruct;
- (void)logMultipleTimersAdded:(id)a0;

@end
