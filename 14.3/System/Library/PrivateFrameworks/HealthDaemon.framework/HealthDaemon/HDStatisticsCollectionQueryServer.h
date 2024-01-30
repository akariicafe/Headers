@class NSDate, NSString, _HKDateIntervalCollection, NSMutableDictionary, HDStatisticsCollectionCalculator, HDStatisticsCollectionCalculatorDefaultDataSource, HDStatisticsCollectionCalculatorDefaultSourceOrderProvider, HKQuantityType;

@interface HDStatisticsCollectionQueryServer : HDQueryServer <HDQuantitySeriesObserver> {
    _HKDateIntervalCollection *_intervalCollection;
    HDStatisticsCollectionCalculatorDefaultDataSource *_dataSource;
    HDStatisticsCollectionCalculatorDefaultSourceOrderProvider *_sourceOrderProvider;
    HDStatisticsCollectionCalculator *_calculator;
    NSMutableDictionary *_pendingQuantitiesBySeries;
    BOOL _addedSamplesRequireProtectedData;
    BOOL _requiresFetch;
    BOOL _hasScheduledUpdate;
    BOOL _deliversUpdates;
    unsigned long long _mergeStrategy;
    HKQuantityType *_quantityType;
}

@property (copy, nonatomic) id /* block */ unitTest_queryServerStatisticsEnumerationHandler;
@property (copy, nonatomic) id /* block */ unitTest_queryServerUpdateStatisticsHandler;
@property (copy, nonatomic) id /* block */ unitTest_queryServerUnableToUpdateStatisticsHandler;
@property (readonly, nonatomic) NSDate *anchorDate;
@property (readonly, nonatomic) unsigned long long statisticsOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (Class)queryClass;
+ (BOOL)supportsAnchorBasedAuthorization;

- (void).cxx_destruct;
- (id)quantityType;
- (id /* block */)transactionalQuantityInsertHandlerForProfile:(id)a0 journaled:(BOOL)a1 count:(long long)a2;
- (BOOL)_shouldListenForUpdates;
- (void)_queue_start;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)profile:(id)a0 didDiscardSeriesOfType:(id)a1;
- (BOOL)_shouldObserveDatabaseProtectedDataAvailability;
- (void)_queue_fetchAndDeliverAllStatistics;
- (void)_queue_updateStatistics;
- (void)_queue_performUpdate;
- (void)_queue_didReceiveQuantity:(id)a0 type:(id)a1 dateInterval:(id)a2 series:(id)a3 anchor:(id)a4;
- (void)_queue_scheduleUpdate;
- (void)_queue_deliverUpdatedStatistics:(id)a0 error:(id)a1;
- (id)_queue_filteredPendingSeriesWithError:(id *)a0;
- (void)_queue_sendAccumulatedStatistics:(id)a0 isFinal:(BOOL)a1 statisticsCount:(long long *)a2 shouldResetStatistics:(BOOL *)a3;
- (void)_queue_accumulateUpdatedStatistics:(id)a0 accumulatedStatistics:(id)a1 sendHandler:(id /* block */)a2;
- (BOOL)_queue_objectIsRelevant:(id)a0;

@end
