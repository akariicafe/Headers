@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric

@property (nonatomic) long long metricType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0 enhancedLinkQuality:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
