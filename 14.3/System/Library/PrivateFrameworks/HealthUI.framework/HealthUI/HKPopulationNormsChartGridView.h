@class HKPopulationNormsAxisView;

@interface HKPopulationNormsChartGridView : UIView

@property (retain, nonatomic) HKPopulationNormsAxisView *yAxisView;
@property (retain, nonatomic) HKPopulationNormsAxisView *xAxisView;
@property (readonly, nonatomic) unsigned long long xAxisSegmentCount;
@property (readonly, nonatomic) unsigned long long yAxisSegmentCount;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_determineYAxisWidth;
- (double)_determineXAxisHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_determineCanvasRectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 yAxisWidth:(double)a1 xAxisHeight:(double)a2;
- (id)initWithXAxisLabels:(id)a0 YAxisLabels:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })determineCanvasRect;
- (void)relocalizeAxisLabels;

@end
