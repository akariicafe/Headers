@class NSString, NSDictionary, HDCurrentActivitySummaryHelper, HKActivitySummary;

@interface HDCurrentActivitySummaryQueryServer : HDQueryServer <HDCurrentActivitySummaryHelperObserver> {
    HDCurrentActivitySummaryHelper *_currentSummaryHelper;
    HKActivitySummary *_lastActivitySummary;
    NSDictionary *_collectionIntervals;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;
+ (id)createTaskServerWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3 error:(id *)a4;

- (BOOL)_shouldExecuteWhenProtectedDataIsUnavailable;
- (BOOL)_shouldListenForUpdates;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;
- (void)_queue_stop;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateTodayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)currentActivitySummaryHelper:(id)a0 didUpdateYesterdayActivitySummary:(id)a1 changedFields:(unsigned long long)a2;
- (void)_queue_startDataCollection;
- (void)_queue_stopDataCollection;

@end
