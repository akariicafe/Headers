@protocol HKHistogramAxisDimensionDataSource;

@interface HKHistogramAxisDimension : NSObject <HKAxisLabelDimension>

@property (weak, nonatomic) id<HKHistogramAxisDimensionDataSource> dataSource;

- (void).cxx_destruct;
- (id)stringForLocation:(id)a0;
- (double)niceStepSizeLargerThan:(double)a0;
- (double)ticksPerStepSize:(double)a0;
- (void)setStepSizeForLabels:(double)a0;

@end
