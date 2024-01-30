@class UIFont, Stock, StockGraphView, NSMutableArray, ChartLabelInfoManager, StockChartData, StockChartDisplayMode;
@protocol SPChartViewDelegate;

@interface SPChartView : UIView <StockGraphViewContainer> {
    long long _selectedInterval;
    StockGraphView *_graph;
    NSMutableArray *_xAxisLabels;
    NSMutableArray *_yAxisLabels;
    ChartLabelInfoManager *_labelInfoManager;
}

@property (readonly, nonatomic) UIFont *labelFont;
@property (nonatomic) unsigned long long chartViewType;
@property (nonatomic, getter=isCompactGraph) BOOL compactGraph;
@property (nonatomic) BOOL showsHorizontalLines;
@property (retain, nonatomic) StockChartData *chartData;
@property (retain, nonatomic) Stock *stock;
@property (weak, nonatomic) id<SPChartViewDelegate> delegate;
@property (readonly, nonatomic) StockChartDisplayMode *currentDisplayMode;

- (void)setBackgroundGradient:(struct CGGradient { } *)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearData;
- (void).cxx_destruct;
- (double)lineGraphBottomPadding;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineGraphFrame;
- (void)_prepareYAxisLabelsAndPositions;
- (void)_prepareXAxisLabelsAndPositions;
- (void)_prepareXAxisLabelsForLabelInfoArray:(id)a0;
- (void)_setDayLabelsWithInterval:(unsigned int)a0 realTimePositions:(BOOL)a1;
- (void)_setHourLabels;
- (void)_setMonthAndYearLabels;
- (id)_smallCapsFontFrom:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })graphViewFrameForMode:(id)a0;
- (id)initWithStockChartDisplayMode:(id)a0;
- (void)setYAxisLabelCount:(unsigned long long)a0;
- (void)stockGraphViewReadyForDisplay:(id)a0;
- (double)widestYLabelWidthForMode:(id)a0;

@end
