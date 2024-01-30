@class UIFont, NSArray, UIColor, NSLock, NSString, HKFillStyle, NSNumber;

@interface HKSleepStageDaySeries : HKGraphSeries <HKAxisLabelDataSource, HKSleepStageCategoryHighlightable>

@property (nonatomic) struct CGSize { double width; double height; } cornerRadiiStorage;
@property (copy, nonatomic) NSArray *sleepStageFillStylesStorage;
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundFillStyleStorage;
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundInactiveFillStyleStorage;
@property (copy, nonatomic) NSNumber *highlightedSleepStageStorage;
@property (retain, nonatomic) UIFont *sleepStageLabelFontStorage;
@property (retain, nonatomic) UIColor *sleepStageLabelColorStorage;
@property (readonly, nonatomic) NSLock *seriesMutableStateLock;
@property (nonatomic) struct CGSize { double x0; double x1; } cornerRadii;
@property (copy, nonatomic) NSArray *sleepStageFillStyles;
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundFillStyle;
@property (copy, nonatomic) HKFillStyle *sleepStageBackgroundInactiveFillStyle;
@property (copy, nonatomic) UIFont *sleepStageLabelFont;
@property (copy, nonatomic) UIColor *sleepStageLabelColor;
@property (copy, nonatomic) NSNumber *highlightedSleepStage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)overlayType;
- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (double)distanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5 seriesRenderingDelegate:(id)a6;
- (BOOL)supportsMultiTouchSelection;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x0; double x1; })a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_drawSleepStageLabels:(struct CGContext { } *)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_addSomnogramConnectionPath:(id)a0 toBezierPath:(id)a1;
- (id)_buildConnectionFromStageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toStageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_buildConnectionPathFromBackgroundRects:(id)a0;
- (void)_drawLabelAndRuleLineForString:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 horizontalOffset:(double)a2 verticalOffset:(double)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 context:(struct CGContext { } *)a5;
- (void)_drawPaths:(id)a0 withFillStyles:(id)a1 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 context:(struct CGContext { } *)a3;
- (void)_drawStagesBackgroundWithRects:(id)a0 buildPath:(id)a1 cornerRadii:(struct CGSize { double x0; double x1; })a2 highlightedSleepStage:(id)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 renderContext:(struct CGContext { } *)a5;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_enumerationRectForStage:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_nonSleepStageBarRectForCoordinate:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_rebuildFillStyles;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_sleepStageBarRectForCoordinate:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_visibleSleepStagesInBlockCoordinates:(id)a0 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 screenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)_yAxisOffsetForCoordinate:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)cacheKeysForModelRange:(id)a0 zoomScale:(double)a1;
- (id)determineBottomConnectionPathFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadius:(double)a2;
- (id)determineTopConnectionPathFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 cornerRadius:(double)a2;
- (void)drawOverlayInContext:(struct CGContext { } *)a0 seriesOverlayData:(id)a1;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (id)mergeOverlappingRects:(id)a0;
- (struct CGPoint { double x0; double x1; })renderPositionForLabelLocation:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomScale:(double)a2 contentOffset:(struct CGPoint { double x0; double x1; })a3 constantOffset:(double)a4 isHorizontal:(BOOL)a5 optionalOffset:(struct CGPoint { double x0; double x1; })a6;
- (double)xAxisSelectedCoordinate:(double)a0 blockCoordinate:(id)a1 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
