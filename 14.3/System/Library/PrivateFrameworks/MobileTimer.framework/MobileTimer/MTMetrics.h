@protocol NAScheduler;

@interface MTMetrics : NSObject

@property (retain, nonatomic) id<NAScheduler> serializer;

+ (id)_sharedPublicMetrics;

- (void)logAlarmAdded:(BOOL)a0;
- (void)logSyncFailedWithError:(id)a0;
- (void)logTimerUpdated;
- (void)logTimerDeleted;
- (void)logTimerRepeated;
- (id)init;
- (void).cxx_destruct;
- (void)logSyncCompleted;
- (void)logTimerDismissed;
- (void)logTimerAdded;
- (void)logAlarmSnoozeAction:(unsigned long long)a0;
- (void)logAlarmDismissAction:(unsigned long long)a0;
- (void)logAlarmUpdated:(BOOL)a0;
- (void)logAlarmDeleted:(BOOL)a0;

@end
