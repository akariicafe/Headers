@protocol HKAxisLabelDimension;

@interface HKNumericAxis : HKAxis

@property (readonly, nonatomic) id<HKAxisLabelDimension> labelDimension;
@property (readonly, nonatomic) double topVerticalLabelPadding;
@property (readonly, nonatomic) double bottomVerticalLabelPadding;

+ (id)standardNumericYAxisWithConfigurationOverrides:(id)a0;
+ (id)ticksAndLabelsForRangeInModelCoordinates:(id)a0 maximumLabelCount:(long long)a1 endingOptions:(long long)a2 dimension:(id)a3;
+ (double)_adjustRangeDownWithStartValue:(double)a0 endValue:(double)a1 factor:(double)a2;
+ (double)_adjustRangeUpWithStartValue:(double)a0 endValue:(double)a1 factor:(double)a2;
+ (double)_roundDownByMultiple:(double)a0 factor:(double)a1;
+ (double)_roundUpByMultiple:(double)a0 factor:(double)a1;
+ (id)preferredAxisStyle;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)stringFromNumber:(id)a0;
- (id)adjustValueRangeForLabels:(id)a0;
- (id)adjustedRangeForFittedRange:(id)a0 chartRange:(struct HKRange { double x0; double x1; })a1;
- (id)cacheKeysForModelRange:(id)a0 zoomScale:(double)a1;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (double)labelSpacingFactorForNumberFormatter;
- (double)offsetForLegendView;

@end
