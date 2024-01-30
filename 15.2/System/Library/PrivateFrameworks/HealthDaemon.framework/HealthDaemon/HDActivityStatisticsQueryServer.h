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

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)_queue_start;
- (void).cxx_destruct;
- (void)_queue_stop;
- (void)_queue_didDeactivate;

@end
