@class NSArray, HKStrokeStyle, UIImage, HKLineSeriesPointMarkerStyle;

@interface HKSleepDurationSeries : HKBarSeries {
    UIImage *_goalLineMarkerImage;
}

@property (copy, nonatomic) NSArray *defaultFillStyles;
@property (copy, nonatomic) NSArray *highlightedFillStyles;
@property (copy, nonatomic) NSArray *inactiveFillStyles;
@property (copy, nonatomic) HKStrokeStyle *goalLineStrokeStyle;
@property (retain, nonatomic) HKLineSeriesPointMarkerStyle *goalLineMarkerStyle;
@property (nonatomic) BOOL extendGoalLineToAxis;
@property (copy, nonatomic) id /* block */ startOfDayTransform;
@property (nonatomic) BOOL hideInBedData;
@property (nonatomic) BOOL hideAsleepData;

- (void)clearCaches;
- (void).cxx_destruct;
- (id)init;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (BOOL)supportsMultiTouchSelection;
- (id)_stringForDuration:(double)a0;
- (void)drawWithBlockCoordinates:(id)a0 visibleBarCount:(long long)a1 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 context:(struct CGContext { } *)a3 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;
- (double)barWidthForVisibleBarCount:(long long)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 minimumSpacing:(double)a2;
- (void)_rebuildPointMarkerImages;
- (BOOL)_currentGoal:(id)a0 differentFrom:(id)a1;
- (void)_drawPaths:(id)a0 withFillStyles:(id)a1 strokeStyle:(id)a2 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 context:(struct CGContext { } *)a4;
- (void)_drawGoalLinePath:(id)a0 context:(struct CGContext { } *)a1;
- (void)_drawGoalLineMarkers:(id)a0 context:(struct CGContext { } *)a1;
- (void)_addGoalAnnotationAtLocation:(double)a0;
- (void)_addAnnotationForValue:(double)a0;
- (BOOL)_dataIsHidden:(long long)a0;
- (id)_durationShortFormatter;
- (id)_durationAbbreviatedFormatter;

@end
