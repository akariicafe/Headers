@class NSMeasurement, NSMeasurementFormatter;

@interface MXHistogramBucket : NSObject <NSSecureCoding> {
    NSMeasurementFormatter *_histogramBucketFormatter;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSMeasurement *bucketStart;
@property (readonly) NSMeasurement *bucketEnd;
@property (readonly) unsigned long long bucketCount;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithBucketStart:(id)a0 bucketEnd:(id)a1 bucketCount:(unsigned long long)a2;

@end
