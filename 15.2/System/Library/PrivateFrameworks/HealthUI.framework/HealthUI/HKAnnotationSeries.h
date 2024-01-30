@class NSArray;

@interface HKAnnotationSeries : HKGraphSeries <HKDateRangeDataSourceDelegate>

@property (readonly, nonatomic) NSArray *chartPoints;

+ (id)_buildChartPointsForDateInterval:(id)a0 trendData:(id)a1;

- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)a0;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (BOOL)supportsMultiTouchSelection;
- (id)dataForDateRange:(id)a0 timeScope:(long long)a1;
- (id)initWithDateInterval:(id)a0 trendData:(id)a1;

@end
