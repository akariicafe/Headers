@class NSMutableDictionary;

@interface PPTMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID;

+ (id)sharedStore;
+ (id)plistMetricsFromDir:(id)a0;

- (void)addMetricsToCache:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;
- (id)getMetadataForSubsystem:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (void)addNewMetricsToStream:(id)a0 forBuild:(id)a1 excludeMetrics:(id)a2;
- (id)updateVersionsForMetricStream:(id)a0 forBuild:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)getMetricsFromCache;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
- (void)cacheFrameworkMetrics;
- (void)loadMetricsForSubsystem:(id)a0;
- (void)cachePlistMetrics;
- (BOOL)shouldPersistMetrics;
- (void)persistMetrics;
- (void)buildDeviceMetadata;

@end
