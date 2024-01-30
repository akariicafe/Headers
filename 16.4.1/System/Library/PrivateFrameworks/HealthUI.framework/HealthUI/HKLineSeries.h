@class NSArray, HKLineSeriesPointMarkerStyle, HKLineSeriesPresentationStyle, NSNumber;

@interface HKLineSeries : HKGraphSeries

@property (retain, nonatomic) NSArray *unhighlightedPresentationStyles;
@property (retain, nonatomic) NSArray *highlightedPresentationStyles;
@property (retain, nonatomic) NSArray *selectedPresentationStyles;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *selectedPointMarkerStyle;
@property (retain, nonatomic) HKLineSeriesPresentationStyle *inactivePresentationStyle;
@property (nonatomic) BOOL flatLastValue;
@property (nonatomic) BOOL extendLastValue;
@property (nonatomic) BOOL extendFirstValue;
@property (retain, nonatomic) NSNumber *maximumConnectionDistance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 blockCoordinate:(id)a1;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)_currentPresentationStyles;
- (void)_enumerateCoordinateList:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 presentationStyle:(id)a2 zoomLevelConfiguration:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 block:(id /* block */)a5;
- (void)_enumerateCoordinateList:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 weightedAverageWidth:(double)a2 block:(id /* block */)a3;
- (void)_enumerateCoordinateListByRemovingOffscreenPoints:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 presentationStyle:(id)a2 zoomLevelConfiguration:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 block:(id /* block */)a5;
- (void)_enumeratePathsFromBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 presentationStyle:(id)a4 seriesRenderingDelegate:(id)a5 forceGapBetweenUntransformedPoints:(id /* block */)a6 handler:(id /* block */)a7;
- (void)_enumerateSawToothPathsFromBlockCoordinates:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 zoomLevelConfiguration:(id)a2 presentationStyle:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 seriesRenderingDelegate:(id)a5 forceGapBetweenUntransformedPoints:(id /* block */)a6 handler:(id /* block */)a7;
- (void)_enumerateSinePathsFromBlockCoordinates:(id)a0 transfrom:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 zoomLevelConfiguration:(id)a2 presentationStyle:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 handler:(id /* block */)a5;
- (void)_renderLegendPointLabelInContext:(struct CGContext { } *)a0 point:(struct CGPoint { double x0; double x1; })a1 untransformedPoint:(struct CGPoint { double x0; double x1; })a2 presentationStyle:(id)a3 leftOfPoint:(BOOL)a4;
- (void)_renderLineEndCapsInContext:(struct CGContext { } *)a0 endCaps:(id)a1 endCapImage:(id)a2;
- (void)_renderPointLabelInContext:(struct CGContext { } *)a0 renderingData:(struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; double x1; long long x2; })a1 numberFormatter:(id)a2 labelAttributes:(id)a3 seriesRenderingDelegate:(id)a4;
- (void)_renderPointLabelsInContext:(struct CGContext { } *)a0 blockCoordinates:(id)a1 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 presentationStyle:(id)a4 zoomLevelConfiguration:(id)a5 seriesRenderingDelegate:(id)a6;
- (void)_renderPointLegendLabelWithText:(id)a0 drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 labelAttributes:(id)a2;
- (void)_renderPointMarkersInContext:(struct CGContext { } *)a0 blockCoordinates:(id)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 pointMarkerImage:(id)a3;
- (void)_updateSecondaryRenderContextWithBlockCoordinates:(id)a0 secondaryRenderContext:(id)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 zoomLevelConfiguration:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (void)addAxisAnnotationForValue:(double)a0 axisAnnotationDelegate:(id)a1;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6 forceGapBetweenUntransformedPoints:(id /* block */)a7;

@end
