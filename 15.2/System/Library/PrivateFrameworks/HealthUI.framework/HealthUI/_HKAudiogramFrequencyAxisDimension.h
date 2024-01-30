@interface _HKAudiogramFrequencyAxisDimension : NSObject <HKAxisLabelDimension>

- (id)stringForLocation:(id)a0;
- (double)niceStepSizeLargerThan:(double)a0;
- (double)ticksPerStepSize:(double)a0;
- (void)setStepSizeForLabels:(double)a0;

@end
