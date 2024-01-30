@class NSMeasurement;

@interface MXDiskIOMetric : MXMetric

@property (readonly) NSMeasurement *cumulativeLogicalWrites;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCumulativeLogicalWritesMeasurement:(id)a0;

@end
