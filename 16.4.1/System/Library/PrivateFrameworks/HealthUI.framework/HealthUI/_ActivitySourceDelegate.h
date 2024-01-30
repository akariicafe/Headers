@class HKUnitPreferenceController, NSCalendar, HKDisplayTypeController;

@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate>

@property (readonly, nonatomic) long long activityValue;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly, nonatomic) NSCalendar *currentCalendar;

- (void).cxx_destruct;
- (void)setUpdateDelegate:(id)a0;
- (double)_centerOffsetForTimeScope:(long long)a0 startDate:(id)a1 calendar:(id)a2;
- (id)_chartPointForActivityValue:(long long)a0 summary:(id)a1 timeScope:(long long)a2;
- (id)_healthChartPointForQuantity:(id)a0 quantityType:(id)a1 activityValue:(long long)a2 referenceDisplayType:(id)a3 activitySummaryData:(id)a4 preferredUnit:(id)a5 date:(id)a6 createBarValue:(BOOL)a7;
- (id)_quantityForActivityValue:(long long)a0 summary:(id)a1;
- (id)activitySummariesForDateRange:(id)a0 timeScope:(long long)a1;
- (id)dataForDateRange:(id)a0 timeScope:(long long)a1;
- (id)initWithActivityValue:(long long)a0 displayTypeController:(id)a1 unitPreferenceController:(id)a2;

@end
