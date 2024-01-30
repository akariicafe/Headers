@class TBDataSourceMediator;

@interface WiFi3BarsTileCacheObserver : NSObject

@property (retain, nonatomic) TBDataSourceMediator *dataSourceMediator;

- (id)initWithDataSourceMediator:(id)a0;
- (void)_submitCacheAvailabilityMetric;
- (void)_scheduleXPCActivity;
- (void).cxx_destruct;

@end
