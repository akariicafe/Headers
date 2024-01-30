@class HKAxisLabelCache, HKCoordinateTransform, NSString, HKAxisStyle, NSMutableArray, HKValueRange;
@protocol HKZoomScale, HKAxisLabelDataSource;

@interface HKAxis : NSObject <HKAxisLabelDataSource>

@property (retain, nonatomic) NSMutableArray *axisAnnotations;
@property (retain, nonatomic) HKAxisLabelCache *axisLabelCache;
@property (readonly, nonatomic) BOOL requiresScaling;
@property (retain, nonatomic) HKAxisStyle *preferredStyle;
@property (retain, nonatomic) HKAxisStyle *secondaryStyle;
@property (nonatomic) BOOL automaticallyFitData;
@property (nonatomic) long long maxLabels;
@property (nonatomic) long long minLabels;
@property (nonatomic) long long axisLabelEndings;
@property (readonly, nonatomic) HKCoordinateTransform *transform;
@property (readonly, nonatomic) id<HKZoomScale> zoomScale;
@property (nonatomic) struct HKLinearTransform { double offset; double scale; } pointTransform;
@property (weak, nonatomic) id<HKAxisLabelDataSource> labelDataSource;
@property (retain, nonatomic) HKValueRange *chartableValueRange;
@property (nonatomic) BOOL overrideNoTopBaseline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct HKAxisMinMaxDefinition { double x0; double x1; })expandByPointsLow:(double)a0 high:(double)a1 modelRange:(struct HKAxisMinMaxDefinition { double x0; double x1; })a2 pointRange:(struct HKAxisMinMaxDefinition { double x0; double x1; })a3;
+ (struct HKAxisMinMaxDefinition { double x0; double x1; })contractByPointsLow:(double)a0 high:(double)a1 modelRange:(struct HKAxisMinMaxDefinition { double x0; double x1; })a2 pointRange:(struct HKAxisMinMaxDefinition { double x0; double x1; })a3;

- (void)clearCache;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (struct CGPoint { double x0; double x1; })renderPositionForLabelLocation:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 constantOffset:(double)a4 isHorizontal:(BOOL)a5 optionalOffset:(struct CGPoint { double x0; double x1; })a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })labelRectWithModelRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2;
- (id)adjustedRangeForFittedRange:(id)a0 chartRange:(struct HKRange { double x0; double x1; })a1;
- (struct HKLinearTransform { double x0; double x1; })_pointTransformFromSeriesRanges:(id)a0 linearTransform:(struct HKLinearTransform { double x0; double x1; })a1 chartRange:(struct HKRange { double x0; double x1; })a2;
- (double)bottomBaselineYCoordinateForModelRange:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2;
- (double)topBaselineYCoordinateForModelRange:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2;
- (void)drawBaselineForModelRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 renderView:(id)a4;
- (void)drawGridlinesForModelRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 gridlineRanges:(id)a2 zoomScale:(double)a3 contentOffset:(struct CGPoint { double x0; double x1; })a4 renderView:(id)a5 blendMode:(int)a6;
- (void)drawLabelsWithModelRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 renderView:(id)a4 maximumLabelSize:(struct CGSize { double x0; double x1; } *)a5 omitOffscreenLabels:(BOOL)a6;
- (id)rangeForChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2;
- (long long)dateZoomForZoomScale:(double)a0;
- (void)offsetForValueRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScaleOut:(double *)a2 contentOffsetOut:(struct CGPoint { double x0; double x1; } *)a3;
- (id)zoomScaleEngine;
- (void)clearAnnotations;
- (void)addAxisAnnotation:(id)a0 modelCoordinate:(id)a1;
- (id)adjustValueRangeForLabels:(id)a0;
- (id)initWithTransform:(id)a0 zoomScale:(id)a1;
- (struct HKRange { double x0; double x1; })_chartRangeForChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 zoomScale:(double)a1 contentOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)_offsetForChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 chartRange:(struct HKRange { double x0; double x1; })a1 zoomScaleOut:(double *)a2 contentOffsetOut:(struct CGPoint { double x0; double x1; } *)a3;
- (BOOL)isEqualToAxis:(id)a0;
- (struct HKLinearTransform { double x0; double x1; })pointTransformFittingValueRange:(id)a0 toChartRange:(struct HKRange { double x0; double x1; })a1;
- (BOOL)_styleIsHorizontal:(id)a0;
- (id)_cachedAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (double)_maximumWidthOfAnnotations:(id)a0 axisStyle:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelBackgroundRectWithLabels:(id)a0 font:(id)a1 maxAnnotationWidth:(double)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 style:(id)a4;
- (void)_drawTextForModelRange:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 renderView:(id)a4 style:(id)a5 maximumLabelSize:(struct CGSize { double x0; double x1; } *)a6 omitOffscreenLabels:(BOOL)a7;
- (id)_baselineForModelRange:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 style:(id)a4;
- (id)_gridLinesForModelRange:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 gridlineRanges:(id)a2 zoomScale:(double)a3 contentOffset:(struct CGPoint { double x0; double x1; })a4 style:(id)a5 gridLineType:(long long)a6;
- (double)_axisOffsetWithStyle:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalAlignmentOut:(long long *)a2;
- (void)_drawTextBackgroundWithLabels:(id)a0 font:(id)a1 offset:(double)a2 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 style:(id)a4 renderView:(id)a5;
- (double)_axisFillWidthForStyle:(id)a0 labels:(id)a1 font:(id)a2;
- (double)_maxLabelWidthFromLabels:(id)a0 font:(id)a1;
- (void)enumerateTickCoordinatesInModelRange:(id)a0 zoomScale:(double)a1 handler:(id /* block */)a2;
- (long long)axisLabelCountWithTextInModelRange:(id)a0 zoomScale:(double)a1;
- (BOOL)_containsTopBaselineWithModelRange:(id)a0 zoomScale:(double)a1;
- (void)_addTickMarksForPosition:(unsigned long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 modelRange:(id)a2 zoomScale:(double)a3 contentOffset:(struct CGPoint { double x0; double x1; })a4 toBezierPath:(id)a5 style:(id)a6;
- (void)_renderTickMarksForModelRange:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 style:(id)a4 renderView:(id)a5;
- (long long)axisAnnotationCount;

@end
