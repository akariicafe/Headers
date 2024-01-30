@class NSHashTable, HKActivitySummary, HKCurrentActivityCacheQuery, NSPredicate, HKHealthStore, NSMutableDictionary, NSDictionary, NSObject, FIUIWeeklyGoalModel, HKActivityCache, _HKCurrentActivitySummaryQuery;
@protocol OS_dispatch_queue;

@interface FIUIModel : NSObject {
    FIUIWeeklyGoalModel *_weeklyGoalModel;
    NSHashTable *_observers;
    NSMutableDictionary *_currentActivitySummaryQueryClients;
    NSMutableDictionary *_currentActivityCacheQueryClients;
    _HKCurrentActivitySummaryQuery *_queue_currentActivitySummaryQuery;
    HKCurrentActivityCacheQuery *_queue_currentActivityCacheQuery;
    long long _queue_activitySummaryQueryRetries;
    long long _queue_activityCacheQueryRetries;
    HKActivitySummary *_queue_currentActivitySummaryForClients;
    HKActivityCache *_queue_currentActivityCacheForClients;
    NSObject<OS_dispatch_queue> *_activityQueryClientQueue;
    NSPredicate *_sourcesPredicate;
    NSObject<OS_dispatch_queue> *_sourcesQueue;
}

@property (readonly, nonatomic) FIUIWeeklyGoalModel *weeklyGoalModel;
@property (readonly, nonatomic) NSPredicate *sourcesPredicate;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) NSDictionary *currentActivitySummaryQueryCollectionIntervalOverrides;

+ (BOOL)isWheelchairUser;
+ (id)_dailyTotalsQueryFromDate:(id)a0 toDate:(id)a1 dataType:(id)a2 predicate:(id)a3 sendUpdates:(BOOL)a4 handler:(id /* block */)a5;
+ (id)dailyTotalQueryForDate:(id)a0 dataType:(id)a1 predicate:(id)a2 sendUpdates:(BOOL)a3 handler:(id /* block */)a4;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)executeQuery:(id)a0;
- (void)addObserver:(id)a0;
- (void)stopQuery:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (id)startCurrentActivitySummaryQueryWithHandler:(id /* block */)a0;
- (void)stopCurrentActivitySummaryQueryForClientToken:(id)a0;
- (void)_setKnownSources:(id)a0;
- (id)_createCurrentActivitySummaryQuery;
- (void)_queue_restartCurrentActivitySummaryQueryAfterError;
- (void)_printStatisticsCollection:(id)a0;
- (void)_printUpdatedStatistics:(id)a0;

@end
