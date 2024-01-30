@class MXHistogram;

@interface MXCellularConditionMetric : MXMetric

@property (readonly) MXHistogram *histogrammedCellularConditionTime;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCellularConditionTime:(id)a0;

@end
