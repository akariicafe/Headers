@class NSMeasurement;

@interface MXGPUMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeGPUTime;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCumulativeGPUTimeMeasurement:(id)a0;

@end
