@class NSDictionary;

@interface CHSWidgetMetricsSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDictionary *metricsByFamily;
@property (readonly, nonatomic) unsigned long long families;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetricsByFamily:(id)a0;
- (id)_initWithMetricsByFamily:(id)a0;
- (id)metricsForFamily:(long long)a0;
- (id)initWithMetricsSpecification:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
