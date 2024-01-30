@class NSDateComponents, NSString, HDActivityCacheDataSource, HDSourceManager, NSDate, _HKDelayedOperation, HKStatisticsCollection;

@interface HDActivityStatisticsQueryServer : HDQueryServer <HDDataObserver> {
    HKStatisticsCollection *_statisticsCollection;
    BOOL _deliversUpdates;
    _HKDelayedOperation *_updateOperation;
    _HKDelayedOperation *_resetOperation;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDateComponents *_moveIntervalComponents;
    NSDateComponents *_exerciseIntervalComponents;
    HDActivityCacheDataSource *_dataSource;
    HDSourceManager *_sourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)queryClass;

- (void)_queue_didDeactivate;
- (void).cxx_destruct;
- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_stop;
- (void)_queue_deliverUpdates;
- (void)_queue_reset;
- (id)_allObservedQuantityTypes;
- (BOOL)_queue_queryIsRunning;
- (void)_createDataSourceIfNecessary;
- (id)_queue_queryResultFromDataSourceWithError:(id *)a0;
- (void)_queue_deliverError:(id)a0;
- (void)_queue_deliverResult:(id)a0;

@end
