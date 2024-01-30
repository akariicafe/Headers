@class UIFont, NSArray, NSString, HKSelectedRangeFormatter, UILabel, HKUIMetricColors, HKValueRange;
@protocol HKCurrentValueViewDataSourceDelegate;

@interface HKInteractiveChartAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>

@property (retain, nonatomic) NSArray *annotationLabels;
@property (nonatomic) long long timeScope;
@property (retain) HKValueRange *lastDateRange;
@property (retain, nonatomic) UILabel *mainDateLabel;
@property (retain, nonatomic) NSString *lastUpperDateString;
@property (retain, nonatomic) NSString *lastLowerDateString;
@property (retain, nonatomic) NSString *lastCombinedDateString;
@property (retain, nonatomic) UIFont *majorFont;
@property (retain, nonatomic) UIFont *minorFont;
@property (weak, nonatomic) id<HKCurrentValueViewDataSourceDelegate> currentValueViewDataSourceDelegate;
@property (readonly, nonatomic) HKSelectedRangeFormatter *selectedRangeFormatter;
@property (retain, nonatomic) HKUIMetricColors *metricColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (id)initWithSelectedRangeFormatter:(id)a0 metricColors:(id)a1 currentValueViewDataSourceDelegate:(id)a2;
- (void)updateWithSelectionContext:(id)a0 displayType:(id)a1 timeScope:(long long)a2;
- (void)_buildDateLabels;
- (BOOL)_isMultiSelectionDateRange;
- (void)_updateDateText;

@end
