@protocol HKZoomScale, HKAxisLabelDimension;

@interface HKNumericAxis : HKAxis

@property (readonly, nonatomic) id<HKZoomScale> scalarZoomScaleEngine;
@property (retain, nonatomic) id<HKAxisLabelDimension> labelDimension;
@property (nonatomic) double topVerticalLabelPadding;
@property (nonatomic) double bottomVerticalLabelPadding;

+ (id)standardNumericYAxisWithLabelDimension:(id)a0;
+ (id)ticksAndLabelsForRangeInModelCoordinates:(id)a0 maximumLabelCount:(long long)a1 endingOptions:(long long)a2 dimension:(id)a3;
+ (double)_roundUpByMultiple:(double)a0 factor:(double)a1;
+ (double)_roundDownByMultiple:(double)a0 factor:(double)a1;
+ (id)preferredAxisStyle;

- (id)stringFromNumber:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (id)adjustedRangeForFittedRange:(id)a0 chartRange:(struct HKRange { double x0; double x1; })a1;
- (id)zoomScaleEngine;
- (double)labelSpacingFactorForNumberFormatter;
- (id)adjustValueRangeForLabels:(id)a0;

@end
