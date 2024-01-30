@class HKGraphSeries, NSString;

@interface HKScalarGraphSeriesDelegate : NSObject <HKGraphViewDelegate>

@property (readonly, nonatomic) HKGraphSeries *graphSeries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)graphView:(id)a0 didFinishUserScrollingToValueRange:(id)a1;
- (void)graphView:(id)a0 didUpdateFromDateZoom:(long long)a1 toDateZoom:(long long)a2 newVisibleRange:(id)a3;
- (void)graphView:(id)a0 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)graphView:(id)a0 didUpdateSelectedPoint:(id)a1;
- (void)graphView:(id)a0 didUpdateSeries:(id)a1 newDataArrived:(BOOL)a2 changeContext:(long long)a3;
- (void)graphView:(id)a0 didUpdateVisibleValueRange:(id)a1 changeContext:(long long)a2;
- (void)graphView:(id)a0 didUpdateYAxisWidth:(double)a1 toWidth:(double)a2;
- (id)graphView:(id)a0 graphSeriesForZoom:(long long)a1 stackOffset:(long long)a2;
- (void)graphViewDidBeginSelection:(id)a0;
- (void)graphViewDidEndSelection:(id)a0;
- (void)graphViewDidTapYAxis:(id)a0;
- (void)graphViewExternalSelectionEnd:(id)a0;
- (BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)a0;
- (void)graphViewSizeChanged:(id)a0;
- (id)seriesSelectionLineColorForGraphView:(id)a0;
- (long long)stackCountForGraphView:(id)a0;
- (id)initWithGraphSeries:(id)a0;

@end
