@class NSDictionary, NSMutableDictionary, NSMutableSet;

@interface TIMetricDescriptorRegistry : NSObject

@property (readonly, nonatomic) NSDictionary *config;
@property (readonly, nonatomic) NSMutableDictionary *metricDescriptors;
@property (readonly, nonatomic) NSMutableSet *invalidMetricNames;
@property (nonatomic) BOOL loaded;

+ (id)registryWithConfig:(id)a0;
+ (id)registryWithDescriptors:(id)a0 andInvalidMetricNames:(id)a1;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)initWithDescriptors:(id)a0 andInvalidMetricNames:(id)a1;
- (id)metricDescriptorWithName:(id)a0;
- (void)loadMetricDescriptors;
- (id)contextFromError:(id)a0;
- (id)valueFromError:(id)a0 forKey:(id)a1;

@end
