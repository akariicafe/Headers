@class HKSampleTypeUpdateController, HKHealthStore, HKInteractiveChartDataFormatter, HKChartDataCacheController, HKDisplayCategoryController, HKSelectedTimeScopeController, HKUnitPreferenceController, _HKWheelchairUseCharacteristicCache, HKSampleTypeDateRangeController, NSDictionary, HKDateCache, HKDisplayTypeController;
@protocol HKCardioFitnessDataSourceProvider, HKSleepDataSourceProvider;

@interface HKHealthChartFactory : NSObject <HKSleepDataSourceProvider, HKCardioFitnessDataSourceProvider>

@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly, nonatomic) HKDisplayCategoryController *displayCategoryController;
@property (readonly, nonatomic) HKChartDataCacheController *chartDataCacheController;
@property (readonly, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (retain, nonatomic) NSDictionary *identifierToDisplayTypeMapping;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) id<HKSleepDataSourceProvider> sleepDataSourceProvider;
@property (retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (retain, nonatomic) id<HKCardioFitnessDataSourceProvider> cardioFitnessDataSourceProvider;

+ (id)_standardIdentifierMappings;

- (id)init;
- (void).cxx_destruct;
- (id)supportedTypeIdentifiers;
- (id)initWithHealthStore:(id)a0;
- (id)CHRRoomApplicationItems;
- (id)interactiveChartForTypeIdentifier:(id)a0 preferredOverlay:(long long)a1 displayDateInterval:(id)a2;
- (id)chartForTypeIdentifier:(id)a0 dateRange:(id)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 disableXAxis:(BOOL)a3;
- (id)_mapTypeIdentifierToDisplayType:(id)a0;
- (long long)_resolvedTimeScopeForTypeIdentifier:(id)a0 displayDateInterval:(id)a1;
- (id)_customTypeIdentifierController:(id)a0 displayDate:(id)a1 preferredOverlay:(long long)a2;
- (id)_displayTypeForTypeIdentifier:(id)a0;
- (id)standardSleepChartFormatter;
- (id)makeCardioFitnessInteractiveChartViewControllerWithDisplayDate:(id)a0 applicationItems:(id)a1 preferredOverlay:(long long)a2;
- (id)makeSleepDataSourceFromHealthStore:(id)a0 representativeDisplayType:(id)a1;
- (id)chartForTypeIdentifier:(id)a0 dateRange:(id)a1 minimumSize:(struct CGSize { double x0; double x1; })a2;
- (id)activityChartForDisplayDate:(id)a0;
- (id)activityChartForActivityMoveMode:(long long)a0 displayDate:(id)a1;

@end
