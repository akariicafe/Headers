@class NSMeasurement, MXAverage;

@interface MXMemoryMetric : MXMetric

@property (readonly) NSMeasurement *peakMemoryUsage;
@property (readonly) MXAverage *averageSuspendedMemory;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithPeakMemoryUsageMeasurement:(id)a0 averageMemoryUsageMeasurement:(id)a1;

@end
