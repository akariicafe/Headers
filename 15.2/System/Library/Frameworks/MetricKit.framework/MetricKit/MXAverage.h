@class NSMeasurement, NSMeasurementFormatter;

@interface MXAverage : NSObject <NSSecureCoding> {
    NSMeasurementFormatter *_averageMeasurementFormatter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMeasurement *averageMeasurement;
@property (readonly) long long sampleCount;
@property (readonly) double standardDeviation;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithMeasurement:(id)a0 sampleCount:(long long)a1 standardDeviation:(double)a2;
- (id)initWithDoubleValue:(double)a0 sampleCount:(long long)a1 standardDeviation:(double)a2 unit:(id)a3;

@end
