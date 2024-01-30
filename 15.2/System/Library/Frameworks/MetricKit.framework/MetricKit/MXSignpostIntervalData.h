@class NSMeasurement, MXAverage, MXHistogram, NSMeasurementFormatter;

@interface MXSignpostIntervalData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMeasurementFormatter *measurementFormatter;
@property (readonly) MXHistogram *histogrammedSignpostDuration;
@property (readonly) NSMeasurement *cumulativeCPUTime;
@property (readonly) MXAverage *averageMemory;
@property (readonly) NSMeasurement *cumulativeLogicalWrites;
@property (readonly) NSMeasurement *cumulativeHitchTimeRatio;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHistogramDurationData:(id)a0 withCumulativeCPUTime:(id)a1 withAverageMemory:(id)a2 withCumulativeLogicalWrites:(id)a3 withCumulativeHitchTimeRatio:(id)a4;
- (id)initWithHistogramDurationData:(id)a0 withCumulativeCPUTime:(id)a1 withAverageMemory:(id)a2 withCumulativeLogicalWrites:(id)a3;
- (id)initWithHistogramDurationData:(id)a0 withCumulativeCPUTime:(id)a1 withPeakMemory:(id)a2 withAverageMemory:(id)a3 withCumulativeLogicalWrites:(id)a4;

@end
