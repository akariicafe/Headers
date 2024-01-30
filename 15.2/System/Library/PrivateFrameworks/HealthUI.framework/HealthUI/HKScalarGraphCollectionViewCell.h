@class NSArray, NSString, HKLollipopController, HKScalarGraphViewController, UIView;

@interface HKScalarGraphCollectionViewCell : UICollectionViewCell <HKGraphViewDelegate>

@property (retain, nonatomic) NSArray *graphSeries;
@property (weak, nonatomic) HKScalarGraphViewController *graphViewController;
@property (weak, nonatomic) HKLollipopController *lollipopController;
@property (weak, nonatomic) UIView *header;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (long long)stackCountForGraphView:(id)a0;
- (void)graphView:(id)a0 didUpdateSeries:(id)a1 newDataArrived:(BOOL)a2 changeContext:(long long)a3;
- (id)graphView:(id)a0 graphSeriesForZoom:(long long)a1 stackOffset:(long long)a2;
- (BOOL)graphViewPointSelectionDifferentiatesSeriesGroups:(id)a0;
- (void)graphViewDidBeginSelection:(id)a0;
- (void)graphView:(id)a0 didUpdateSelectedPoint:(id)a1;
- (void)graphViewDidEndSelection:(id)a0;
- (void)graphView:(id)a0 didUpdateFromDateZoom:(long long)a1 toDateZoom:(long long)a2 newVisibleRange:(id)a3;
- (void)graphView:(id)a0 didUpdateVisibleValueRange:(id)a1 changeContext:(long long)a2;
- (void)graphView:(id)a0 didFinishUserScrollingToValueRange:(id)a1;
- (void)graphViewSizeChanged:(id)a0;
- (void)graphView:(id)a0 didUpdateYAxisWidth:(double)a1 toWidth:(double)a2;
- (id)seriesSelectionLineColorForGraphView:(id)a0;
- (void)graphView:(id)a0 didUpdateLegendViewsWithTopLegendFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)graphViewDidTapYAxis:(id)a0;
- (void)graphViewExternalSelectionEnd:(id)a0;

@end
