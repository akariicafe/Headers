@class HKActivitySummary, UIView, NSString, HKUnitPreferenceController, HKActivityRingView, _HKWheelchairUseCharacteristicCache, HKDateCache, HKDisplayTypeController;

@interface HKActivitySummaryAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>

@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (nonatomic) BOOL currentValueViewContext;
@property (retain, nonatomic) UIView *ringContainer;
@property (retain, nonatomic) HKActivityRingView *ringView;
@property (readonly, nonatomic) long long firstWeekday;
@property (retain, nonatomic) HKActivitySummary *activitySummary;
@property (nonatomic) long long timeScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bodyColor;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (id)_dateColumnWithDateComponents:(id)a0 calendar:(id)a1 orientation:(long long)a2;
- (BOOL)_hasRingView;
- (id)_ringColumn;
- (id)_moveColumn;
- (id)_exerciseColumn;
- (id)_standColumn;
- (id)_valueUnitAttributedStringWithValueString:(id)a0 unitString:(id)a1;
- (id)_standColumnValueString;
- (id)activityStandTitle;
- (id)_columnViewWithTitle:(id)a0 titleColor:(id)a1 body:(id)a2 bodyColor:(id)a3 alignment:(long long)a4;
- (id)_exerciseColumnValueString;
- (id)activityExerciseTitle;
- (id)_energyColumnValueString;
- (id)activityMoveTitle;
- (id)_moveTimeColumnValueString;
- (id)_moveTimeColumn;
- (id)_energyColumn;
- (id)_moveTimeColumnAsNumber;
- (id)_energyColumnAsNumber;
- (id)_dateTextForDateComponents:(id)a0 calendar:(id)a1 timeScope:(long long)a2;
- (id)_weekContainingDateComponents:(id)a0 calendar:(id)a1 timeScope:(long long)a2;
- (id)_moveColumnValueString;
- (id)_moveColumnAsNumber;
- (id)_valueWithTitle:(id)a0 attributedValue:(id)a1 valueAsNumber:(id)a2;
- (id)_exerciseColumnAsNumber;
- (id)_standColumnAsNumber;
- (id)initWithDisplayTypeController:(id)a0 unitController:(id)a1 wheelchairUseCharacteristicCache:(id)a2 dateCache:(id)a3 currentValueViewContext:(BOOL)a4 firstWeekday:(long long)a5;
- (id)_percentStringWithQuantity:(id)a0 goalQuantity:(id)a1;
- (id)descriptionsForActivitySummary;

@end
