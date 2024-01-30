@class NSMutableDictionary;

@interface CHSMutableWidgetMetricsSpecification : CHSWidgetMetricsSpecification

@property (readonly, copy, nonatomic) NSMutableDictionary *metricsByFamily;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetricsByFamily:(id)a0;
- (void)setMetrics:(id)a0 forFamily:(long long)a1;

@end
