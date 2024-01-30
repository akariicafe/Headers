@class NSCalendar, HKDisplayTypeController, NSString, HKActivitySummaryDataProvider, HKUnitPreferenceController;
@protocol HKDateRangeDataUpdateDelegate;

@interface _ActivitySourceDelegate : NSObject <HKDateRangeDataSourceDelegate, HKActivitySummaryDataProviderObserver>

@property (readonly, nonatomic) HKActivitySummaryDataProvider *dataProvider;
@property (readonly, nonatomic) long long activityValue;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (weak, nonatomic) id<HKDateRangeDataUpdateDelegate> updateDelegate;
@property (readonly, nonatomic) NSCalendar *currentCalendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dataForDateRange:(id)a0 timeScope:(long long)a1;
- (void)activitySummaryDataProviderDidUpdateActivitySummaries:(id)a0;
- (id)initWithDataProvider:(id)a0 activityValue:(long long)a1 displayTypeController:(id)a2 unitPreferenceController:(id)a3;
- (id)_chartPointForActivityValue:(long long)a0 summary:(id)a1 timeScope:(long long)a2;
- (id)_quantityForActivityValue:(long long)a0 summary:(id)a1;
- (double)_centerOffsetForTimeScope:(long long)a0 startDate:(id)a1 calendar:(id)a2;
- (id)_healthChartPointForQuantity:(id)a0 quantityType:(id)a1 activityValue:(long long)a2 referenceDisplayType:(id)a3 activitySummaryData:(id)a4 preferredUnit:(id)a5 date:(id)a6 createBarValue:(BOOL)a7;

@end
