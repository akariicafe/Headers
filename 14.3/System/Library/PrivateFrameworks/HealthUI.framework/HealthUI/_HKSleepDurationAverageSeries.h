@class NSString;

@interface _HKSleepDurationAverageSeries : HKSleepDurationSeries

@property (nonatomic) double averageValue;
@property (copy, nonatomic) NSString *averageDescription;

- (id)init;
- (void).cxx_destruct;
- (long long)overlayType;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (void)drawOverlayInContext:(struct CGContext { } *)a0 seriesOverlayData:(id)a1;
- (void)setAverageValue:(double)a0 averageDescription:(id)a1;

@end
