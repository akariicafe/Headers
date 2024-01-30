@class NSMutableDictionary;

@interface PPTMetadataStore : NSObject

@property (retain, nonatomic) NSMutableDictionary *metricsByID;

+ (id)sharedStore;
+ (id)plistMetricsFromDir:(id)a0;

- (id)getMetadataForSubsystem:(id)a0;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2;
- (id)getAllFrameworkSubsystem;
- (void)cachePlistMetrics;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1;
- (void)loadMetricsForSubsystem:(id)a0;
- (id)init;
- (id)getAllSubsystem;
- (void)addMetricsToCache:(id)a0;
- (void)cacheFrameworkMetrics;
- (void).cxx_destruct;
- (void)buildDeviceMetadata;
- (id)getMetadataForSubsystem:(id)a0 category:(id)a1 name:(id)a2 version:(double)a3;

@end
