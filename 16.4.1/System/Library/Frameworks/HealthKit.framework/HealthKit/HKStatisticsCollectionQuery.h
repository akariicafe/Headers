@class NSDate, NSString, NSDateInterval, HKStatisticsCollection, NSDateComponents, NSMutableArray, NSNumber, HKStatisticsCollectionCacheSettings;

@interface HKStatisticsCollectionQuery : HKQuery <HKStatisticsCollectionQueryClientInterface> {
    NSMutableArray *_results;
    BOOL _hasReceivedInitialResults;
    BOOL _requireQuantityType;
}

@property (retain) NSNumber *lastAnchor;
@property (retain) HKStatisticsCollection *statisticsCollection;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) HKStatisticsCollectionCacheSettings *cacheSettings;
@property (copy, nonatomic) id /* block */ unitTest_finishedCachingStatisticsHandler;
@property (nonatomic) unsigned long long mergeStrategy;
@property (readonly) NSDate *anchorDate;
@property (readonly) unsigned long long options;
@property (readonly, copy) NSDateComponents *intervalComponents;
@property (copy, nonatomic) id /* block */ initialResultsHandler;
@property (copy, nonatomic) id /* block */ statisticsUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)configurationClass;
+ (id)clientInterfaceProtocol;
+ (void)configureClientInterface:(id)a0;

- (void)queue_populateConfiguration:(id)a0;
- (void)queue_queryDidDeactivate:(id)a0;
- (BOOL)queue_shouldDeactivateAfterInitialResults;
- (void)queue_deliverError:(id)a0;
- (void)queue_validate;
- (void).cxx_destruct;
- (BOOL)_comparisonPredicateContainsStrictStartOrEndDateComparisonPredicate:(id)a0;
- (BOOL)_predicateContainsStrictStartOrEndDateComparisonPredicate:(id)a0;
- (void)_queue_deliverInitialStatisticsObjects:(id)a0 anchor:(id)a1 queryUUID:(id)a2;
- (void)_queue_deliverResetStatisticsObjects:(id)a0 forQuery:(id)a1;
- (void)_queue_deliverStatisticsObjects:(id)a0 forQuery:(id)a1;
- (void)client_deliverStatisticsBatch:(id)a0 resetStatistics:(BOOL)a1 isFinal:(BOOL)a2 anchor:(id)a3 query:(id)a4;
- (void)client_deliverUpdatedStatistics:(id)a0 anchor:(id)a1 query:(id)a2;
- (void)client_finishedCachingStatisticsWithCacheHits:(long long)a0 error:(id)a1;
- (id)initWithQuantityType:(id)a0 quantitySamplePredicate:(id)a1 options:(unsigned long long)a2 anchorDate:(id)a3 intervalComponents:(id)a4;
- (id)initWithSampleType:(id)a0 samplePredicate:(id)a1 options:(unsigned long long)a2 anchorDate:(id)a3 intervalComponents:(id)a4;

@end
