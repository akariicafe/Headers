@class UIView, HKActivitySummary, NSArray, NSString, HKUnitPreferenceController, HKActivityRingView, _HKWheelchairUseCharacteristicCache, HKDateCache, HKDisplayTypeController;

@interface HKActivitySummaryAnnotationViewDataSource : NSObject <HKInteractiveChartAnnotationViewDataSource>

@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (nonatomic) BOOL currentValueViewContext;
@property (retain, nonatomic) UIView *ringContainer;
@property (retain, nonatomic) HKActivityRingView *ringView;
@property (readonly, nonatomic) long long firstWeekday;
@property (readonly, nonatomic) NSArray *columnsForPosition;
@property (retain, nonatomic) HKActivitySummary *activitySummary;
@property (nonatomic) long long timeScope;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_bodyColor;
- (BOOL)showSeparators;
- (id)dateViewWithOrientation:(long long)a0;
- (id)leftMarginViewWithOrientation:(long long)a0;
- (long long)numberOfValuesForAnnotationView:(id)a0;
- (id)valueViewForColumnAtIndex:(long long)a0 orientation:(long long)a1;
- (id)_moveTimeColumn;
- (id)_exerciseColumn;
- (id)_buildColumnPositionsFromOptions:(unsigned long long)a0;
- (id)_columnViewWithTitle:(id)a0 titleColor:(id)a1 body:(id)a2 bodyColor:(id)a3 alignment:(long long)a4;
- (id)_dateColumnWithDateComponents:(id)a0 calendar:(id)a1 orientation:(long long)a2;
- (id)_dateTextForDateComponents:(id)a0 calendar:(id)a1 timeScope:(long long)a2;
- (id)_energyColumn;
- (id)_energyColumnAsNumber;
- (id)_energyColumnValueString;
- (id)_exerciseColumnAsNumber;
- (id)_exerciseColumnValueString;
- (BOOL)_hasRingView;
- (id)_moveColumn;
- (id)_moveColumnAsNumber;
- (id)_moveColumnValueString;
- (id)_moveTimeColumnAsNumber;
- (id)_moveTimeColumnValueString;
- (id)_percentStringWithQuantity:(id)a0 goalQuantity:(id)a1;
- (id)_ringColumn;
- (id)_standColumn;
- (id)_standColumnAsNumber;
- (id)_standColumnValueString;
- (id)_valueUnitAttributedStringWithValueString:(id)a0 unitString:(id)a1;
- (id)_valueWithTitle:(id)a0 attributedValue:(id)a1 valueAsNumber:(id)a2;
- (id)_weekContainingDateComponents:(id)a0 calendar:(id)a1 timeScope:(long long)a2;
- (id)activityExerciseTitle;
- (id)activityMoveTitle;
- (id)activityStandTitle;
- (id)descriptionsForActivitySummary;
- (id)initWithDisplayTypeController:(id)a0 unitController:(id)a1 wheelchairUseCharacteristicCache:(id)a2 dateCache:(id)a3 currentValueViewContext:(BOOL)a4 activityOptions:(unsigned long long)a5 firstWeekday:(long long)a6;
- (id)viewForColumnType:(unsigned long long)a0;

@end
