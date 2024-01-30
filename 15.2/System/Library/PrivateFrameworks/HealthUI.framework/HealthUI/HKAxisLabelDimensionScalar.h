@class NSString, NSNumberFormatter;

@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension>

@property (retain, nonatomic) NSNumberFormatter *formatter;
@property (retain, nonatomic) NSString *negativeZeroString;

+ (long long)_fractionDigitsForStep:(double)a0;

- (void).cxx_destruct;
- (id)init;
- (id)stringForLocation:(id)a0;
- (double)niceStepSizeLargerThan:(double)a0;
- (double)ticksPerStepSize:(double)a0;
- (void)setStepSizeForLabels:(double)a0;

@end
