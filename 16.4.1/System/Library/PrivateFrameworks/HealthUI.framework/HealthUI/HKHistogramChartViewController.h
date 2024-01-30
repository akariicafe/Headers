@class HKScalarGraphViewController, HKHistogramAnnotationViewDataSource, HKLollipopController, HKHistogramChartDataSource, HKHealthStore, HKDisplayType, HKHistogramBarSeries, NSString, HKHistogramChartDataFormatter, UILabel;

@interface HKHistogramChartViewController : HKViewController <HKGraphViewDelegate, HKLollipopDelegate, HKHistogramChartDataSourceDataFetchObserver>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (nonatomic) double minimumGraphViewHeight;
@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) HKScalarGraphViewController *graphViewController;
@property (retain, nonatomic) HKHistogramBarSeries *histogramSeries;
@property (retain, nonatomic) HKHistogramChartDataSource *dataSource;
@property (retain, nonatomic) HKHistogramChartDataFormatter *dataFormatter;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (retain, nonatomic) HKHistogramAnnotationViewDataSource *annotationViewDataSource;
@property (retain, nonatomic) HKLollipopController *lollipopController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultVerticalAxis;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_descriptionDateFormatter;
- (id)_displayDescriptionForDataSource:(id)a0;
- (void)_pinView:(id)a0 toParentView:(id)a1;
- (void)didCompleteFetchForDataSource:(id)a0;
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
- (id)initWithHealthStore:(id)a0 dataSource:(id)a1 dataFormatter:(id)a2 minimumGraphViewHeight:(double)a3;
- (id)seriesSelectionLineColorForGraphView:(id)a0;
- (long long)stackCountForGraphView:(id)a0;
- (void)updateAnnotationDataSource:(id)a0 pointContexts:(id)a1;

@end
