@class UIColor, UIFont, NSString;

@interface HKLevelCategoryTimePeriodSeries : HKHorizontalTimePeriodSeries

@property (nonatomic) double markerRadius;
@property (retain, nonatomic) UIColor *innerMarkColor;
@property (retain, nonatomic) UIFont *categoryLevelFont;
@property (retain, nonatomic) UIColor *categoryLevelColor;
@property (retain, nonatomic) UIColor *specialMarkColor;
@property (retain, nonatomic) NSString *specialMarkLegendLabel;
@property (nonatomic) BOOL drawSampleSpans;

- (id)init;
- (void).cxx_destruct;
- (id)coordinatesForBlock:(id)a0 blockPath:(struct { long long x0; long long x1; })a1 xAxis:(id)a2 yAxis:(id)a3;
- (void)drawSeriesWithBlockCoordinates:(id)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 zoomLevelConfiguration:(id)a2 pointTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a3 renderContext:(struct CGContext { } *)a4 secondaryRenderContext:(id)a5;
- (id)findAxisLabelsInModelRange:(id)a0 zoomScale:(double)a1;
- (BOOL)_interiorCategoryLabels;
- (void)_drawCategoryLabels:(struct CGContext { } *)a0 axisRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_drawMarkerWithContext:(struct CGContext { } *)a0 style:(long long)a1 color:(struct CGColor { } *)a2 innerColor:(struct CGColor { } *)a3 specialColor:(struct CGColor { } *)a4 location:(struct CGPoint { double x0; double x1; })a5 radius:(double)a6;
- (double)offsetForEnumerationRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)marginsForYAxis:(id)a0 chartRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
