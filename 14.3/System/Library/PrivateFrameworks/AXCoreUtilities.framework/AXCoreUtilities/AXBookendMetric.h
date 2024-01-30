@interface AXBookendMetric : AXMetric <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)startMeasurement;
- (void)endMeasurement;

@end
