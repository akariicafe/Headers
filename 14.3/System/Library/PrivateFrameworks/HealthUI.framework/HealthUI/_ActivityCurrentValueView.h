@class _ActivityCurrentValueDataSource, HKActivitySummaryDataProvider, HKInteractiveChartAnnotationView, NSLayoutConstraint;

@interface _ActivityCurrentValueView : UIView

@property (readonly, nonatomic) HKInteractiveChartAnnotationView *annotationView;
@property (retain, nonatomic) _ActivityCurrentValueDataSource *currentValueDataSource;
@property (retain, nonatomic) HKActivitySummaryDataProvider *activitySummaryDataProvider;
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithDisplayTypeController:(id)a0 unitPreferenceController:(id)a1 wheelchairUseCharacteristicCache:(id)a2 currentValueViewCallbacks:(id)a3 activitySummaryDataProvider:(id)a4;
- (void)updateWithGraphView:(id)a0 timeScope:(long long)a1;
- (void)_updateWithGraphView:(id)a0 forTimeScopeAboveDay:(long long)a1;
- (void)_updateForDayWithGraphView:(id)a0;
- (id)_findFirstActivitySeriesInGraphView:(id)a0;

@end
