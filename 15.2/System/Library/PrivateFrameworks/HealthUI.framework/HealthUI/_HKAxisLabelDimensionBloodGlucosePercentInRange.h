@class NSNumberFormatter;

@interface _HKAxisLabelDimensionBloodGlucosePercentInRange : NSObject <HKAxisLabelDimension>

@property (readonly, nonatomic) NSNumberFormatter *formatter;

- (void).cxx_destruct;
- (id)init;
- (id)stringForLocation:(id)a0;
- (double)niceStepSizeLargerThan:(double)a0;
- (double)ticksPerStepSize:(double)a0;
- (void)setStepSizeForLabels:(double)a0;

@end
