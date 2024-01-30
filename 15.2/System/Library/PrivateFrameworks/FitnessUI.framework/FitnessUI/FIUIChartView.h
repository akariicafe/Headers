@class UIView, NSString, NSArray, FIUIChartTimeAxisDescriptor, NSDateInterval, FIUIChartDataGroup, NSNumber, FIUIChartBackgroundView;
@protocol FIUIChartDataSource, FIUIChartAxisDescriptor;

@interface FIUIChartView : UIView <FIUIChartDataGroupDataSource, FIUIChartSeriesDataSource> {
    FIUIChartDataGroup *_dataGroup;
    NSArray *_xAxisLabels;
    NSArray *_xAxisSubLabels;
    NSArray *_yAxisLabels;
    NSArray *_chartSeries;
    UIView *_containerView;
}

@property (weak, nonatomic) id<FIUIChartDataSource> dataSource;
@property (retain, nonatomic) FIUIChartTimeAxisDescriptor *xAxisDescriptor;
@property (retain, nonatomic) id<FIUIChartAxisDescriptor> yAxisDescriptor;
@property (retain, nonatomic) FIUIChartBackgroundView *backgroundView;
@property (nonatomic) double yAxisEdgeInset;
@property (nonatomic) double xAxisToLabelPadding;
@property (nonatomic) BOOL labelsInsetChartBackground;
@property (nonatomic) BOOL xAxisLabelsShouldBaselineAlign;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } seriesEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentBufferEdgeInsets;
@property (nonatomic) double animationDuration;
@property (retain, nonatomic) NSDateInterval *dateInterval;
@property (copy, nonatomic) NSNumber *minYValue;
@property (copy, nonatomic) NSNumber *maxYValue;
@property (copy, nonatomic) NSNumber *highlightedYValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_orderSubviews;
- (void)reloadData;
- (void)layoutSubviews;
- (void)_updateBackgroundView;
- (id)initWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_layoutContainerView;
- (void)_adjustMinMaxValues;
- (void)_updateHighlightedValue;
- (void)_reloadDataSeries;
- (void)_updateDataSeries;
- (double)_yAxisLabelPadding;
- (double)_xAxisLabelPaddingForBackground:(BOOL)a0;
- (unsigned long long)_numberOfSeries;
- (id)_seriesAtIndex:(unsigned long long)a0;
- (void)_layoutChartSeries;
- (void)_layoutAxisLabels;
- (void)_layoutXAxisLabels;
- (void)_layoutYAxisLabels;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_insetChartRect;
- (double)_absolutePositionForXPlaneValue:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_chartRect;
- (float)_relativePositionForXPlaneValue:(id)a0;
- (unsigned long long)_numberOfDataPointsForSeriesAtIndex:(unsigned long long)a0;
- (id)_dataPointAtIndex:(unsigned long long)a0 forSeriesAtIndex:(unsigned long long)a1;
- (id)_dataPointsForSeriesAtIndex:(unsigned long long)a0;
- (id)_labelsForSeriesAtIndex:(unsigned long long)a0;
- (unsigned long long)numberOfDataSetsInGroup:(id)a0;
- (unsigned long long)dataGroup:(id)a0 numberOfPointsInSetAtIndex:(unsigned long long)a1;
- (id)dataGroup:(id)a0 pointForSetAtIndex:(unsigned long long)a1 pointIndex:(unsigned long long)a2;
- (id)dataGroup:(id)a0 dataPointsForSetAtIndex:(unsigned long long)a1;
- (id)dataGroup:(id)a0 labelsForSetAtIndex:(unsigned long long)a1;
- (id)minXValueForChartSeries:(id)a0;
- (id)maxXValueForChartSeries:(id)a0;
- (id)minYValueForChartSeries:(id)a0;
- (id)maxYValueForChartSeries:(id)a0;
- (void)selectAxisPoint:(long long)a0 selected:(BOOL)a1;

@end
