@class RTDefaultsManager, RTManagedConfiguration, NSMutableDictionary;

@interface RTWorkoutSchedulerMetrics : NSObject

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSMutableDictionary *metricsDictionary;
@property (nonatomic) unsigned char isDeviceEligible;
@property (nonatomic) unsigned long long memoryFootprintDeferredSchedulerDailyCount;

+ (id)metricsTaskTypeToString:(unsigned long long)a0;

- (id)initWithDefaultsManager:(id)a0;
- (void)setup;
- (void)dealloc;
- (void).cxx_destruct;
- (void)onDailyMetricNotification:(id)a0;
- (void)collectDailyMetrics;
- (void)createTaskMetricsDictionary:(id)a0;
- (void)incrementMetricDefaultForKey:(id)a0;
- (id)initWithDefaultsManager:(id)a0 managedConfiguration:(id)a1;
- (void)startCollectMetricsTaskType:(unsigned long long)a0 totalNAtStart:(long long)a1;
- (void)stopCollectMetricsTaskType:(unsigned long long)a0;
- (void)submitDailyMetricsToCoreAnalytics:(id)a0;
- (void)submitTaskMetricsToCoreAnalytics:(id)a0;
- (id)supportedTaskKeys;

@end
