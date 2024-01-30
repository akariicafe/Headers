@class NSObject, NSString, HDProfile, HDSQLitePredicate, _HKFilter, HDActivitySummaryBuilder, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    _HKFilter *_filter;
    HDActivitySummaryBuilder *_activitySummaryBuilder;
    BOOL _initialResultsSent;
    BOOL _needsUpdateAfterUnlock;
    BOOL _shouldBatchSummaries;
    NSMutableDictionary *_previousActivityCachesByCacheIndex;
    long long _lastProcessedAnchor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
}

@property (setter=_setEnumeratedSummaryCount:) long long enumeratedSummaryCount;
@property (readonly, copy, nonatomic) id /* block */ batchedInitialResultsHandler;
@property (readonly, copy, nonatomic) id /* block */ batchedUpdateHandler;
@property BOOL shouldIncludePrivateProperties;
@property BOOL shouldIncludeStatistics;
@property (nonatomic) BOOL orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)_queue_start;
- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)pause;
- (void)start;
- (void)_queue_stop;
- (void)_queue_deliverUpdates;
- (id)initWithProfile:(id)a0 filter:(id)a1 batchedInitialResultsHandler:(id /* block */)a2 batchedUpdateHandler:(id /* block */)a3;
- (void)_queue_deliverErrorToClient:(id)a0;
- (void)_queue_deliverActivitySummariesToClient:(id)a0 isFinalBatch:(BOOL)a1 clearPendingBatches:(BOOL)a2;
- (void)_queue_deliverInitialResults;
- (id)_fetchActivityCacheIndicesWithAnchor:(long long)a0 predicate:(id)a1 error:(id *)a2;
- (void)_queue_deliverActivitySummariesMatchingPredicate:(id)a0;
- (void)_queue_updatePreviousActivityCachesWithNewCaches:(id)a0;
- (id)_queue_addActivityCacheToCachedSamples:(id)a0;
- (id)_queue_filterActivityCaches:(id)a0;
- (void)_queue_updateActivitySummariesWithNewActivityCaches:(id)a0 anchor:(id)a1;
- (BOOL)_shouldStopProcessing;

@end
