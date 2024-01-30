@class HKDisplayTypeController, HKChartDataCacheController, HKHealthStore, HKSelectedTimeScopeController, HKSampleTypeDateRangeController, HKUnitPreferenceController, HKDisplayCategoryController, HKDateCache, HKSampleTypeUpdateController;

@interface HKOverlayRoomApplicationItems : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKSelectedTimeScopeController *timeScopeController;
@property (retain, nonatomic) HKDateCache *dateCache;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) HKChartDataCacheController *chartDataCacheController;
@property (retain, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (retain, nonatomic) HKSampleTypeDateRangeController *sampleDateRangeController;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKDisplayCategoryController *categoryController;

+ (id)applicationItemsWithItems:(id)a0;

- (void).cxx_destruct;

@end
