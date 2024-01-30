@class NSString, NSCalendar;

@interface HKDateGraphViewController : HKGraphViewController <HKGraphViewDelegate> {
    BOOL _hasSetVisibleDateRange;
}

@property (retain, nonatomic) NSCalendar *currentCalendar;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) BOOL disableXAxis;
@property (nonatomic) long long dayScopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)setDetailView:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2 currentCalendar:(id)a3;
- (void)graphView:(id)a0 didUpdateVisibleValueRange:(id)a1 changeContext:(long long)a2;
- (void)graphView:(id)a0 didFinishUserScrollingToValueRange:(id)a1;
- (void)_setupGraphViewSelectionStyle;
- (id)_createGraphViewWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2 currentCalendar:(id)a3;
- (id)_dateAxisStyle;
- (id)_xAxisLabelFont;
- (void)_marginStyleChangeForContext:(long long)a0 graphView:(id)a1;

@end
