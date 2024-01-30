@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;

- (void).cxx_destruct;
- (id)initWithDataSourceMediator:(id)a0;
- (void)_scheduleXPCActivity;
- (void)_submitCacheAvailabilityMetric;

@end
