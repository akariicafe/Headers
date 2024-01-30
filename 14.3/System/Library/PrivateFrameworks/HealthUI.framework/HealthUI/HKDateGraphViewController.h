@class NSString;

@interface HKDateGraphViewController : HKGraphViewController <HKGraphViewDelegate> {
    BOOL _hasSetVisibleDateRange;
}

@property (nonatomic) struct CGSize { double width; double height; } minimumSize;
@property (nonatomic) BOOL disableXAxis;
@property (nonatomic) long long dayScopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setDetailView:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2;
- (void)graphView:(id)a0 didUpdateVisibleValueRange:(id)a1 changeContext:(long long)a2;
- (void)graphView:(id)a0 didFinishUserScrollingToValueRange:(id)a1;
- (void)_setupGraphViewSelectionStyle;
- (id)_createGraphViewWithDateZoom:(long long)a0 previousDateZoom:(long long)a1 previousXAxisSpace:(double)a2;
- (id)_dateAxisStyle;
- (id)_xAxisLabelFont;
- (void)_marginStyleChangeForContext:(long long)a0 graphView:(id)a1;

@end
