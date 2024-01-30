@class UIColor, NSArray, NSDictionary, UIImage, NSString, NSLock;

@interface HKHorizontalTimePeriodSeries : HKGraphSeries <HKAxisLabelDataSource>

@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (readonly, nonatomic) NSArray *cachedAxisLabelsStorage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImageStorage;
@property (retain, nonatomic) UIColor *fillColorStorage;
@property (nonatomic) double lineWidthStorage;
@property (retain, nonatomic) NSArray *enumerationValueOrderingStorage;
@property (retain, nonatomic) NSDictionary *valueLabelsStorage;
@property (retain, nonatomic) UIImage *selectedPointMarkerImage;
@property (retain, nonatomic) UIColor *fillColor;
@property (nonatomic) double lineWidth;
@property (retain, nonatomic) NSArray *enumerationValueOrdering;
@property (retain, nonatomic) NSDictionary *valueLabels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (long long)_enumeratedLevelForCoordinate:(id)a0;
- (id)_generateAxisLabels;
- (BOOL)blockCoordinate:(id)a0 greaterThan:(id)a1;
- (BOOL)blockCoordinate:(id)a0 lessThan:(id)a1;
- (id)cacheKeysForModelRange:(id)a0 zoomScale:(double)a1;
- (id)cachedAxisLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })enumerationRectForLevel:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (double)offsetForCoordinate:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)offsetForEnumerationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })renderPositionForLabelLocation:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 constantOffset:(double)a4 isHorizontal:(BOOL)a5 optionalOffset:(struct CGPoint { double x0; double x1; })a6;
- (double)xAxisSelectedCoordinate:(double)a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
