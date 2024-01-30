@class NSString, NSMutableDictionary, TIMetricDescriptorRegistry, NSDate, NSDictionary;

@interface TIFeatureUsageMetricsCache : NSObject {
    NSString *_inputMode;
    TIMetricDescriptorRegistry *_metricDescriptorRegistry;
    NSDate *_testingTimestamp;
    NSDate *_queryEndDate;
    NSMutableDictionary *_cachedMetrics;
    NSDictionary *_defaultMetrics;
    BOOL _sufficientData;
}

- (void)setTestingTimestamp:(id)a0;
- (id)initWithInputMode:(id)a0 metricDescriptorRegistry:(id)a1;
- (id)defaultMetricsFromContext:(id)a0;
- (id)featureUsageMetricFromName:(id)a0 forContext:(id)a1;
- (void).cxx_destruct;
- (void)loadMetricsFromUserModelDataStore:(id)a0 withContext:(id)a1;
- (id)metricsFromUserModel:(id)a0 withContext:(id)a1;
- (id)startOfDay;

@end
