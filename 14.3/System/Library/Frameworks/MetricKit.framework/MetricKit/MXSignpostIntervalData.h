@class NSMeasurement, MXAverage, MXHistogram, NSMeasurementFormatter;

@interface MXSignpostIntervalData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (readonly) NSMeasurement *peakMemory;
@property (readonly) MXHistogram *histogrammedSignpostDuration;
@property (readonly) NSMeasurement *cumulativeCPUTime;
@property (readonly) MXAverage *averageMemory;
@property (readonly) NSMeasurement *cumulativeLogicalWrites;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithHistogramDurationData:(id)a0 withCumulativeCPUTime:(id)a1 withPeakMemory:(id)a2 withAverageMemory:(id)a3 withCumulativeLogicalWrites:(id)a4;
- (id)initWithHistogramDurationData:(id)a0 withCumulativeCPUTime:(id)a1 withAverageMemory:(id)a2 withCumulativeLogicalWrites:(id)a3;

@end
