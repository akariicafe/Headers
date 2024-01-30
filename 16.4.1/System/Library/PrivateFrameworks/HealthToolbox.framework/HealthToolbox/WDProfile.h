@class HKDisplayCategoryController, HKDateCache, HKChartDataCacheController, WDSourceOrderController, WDUserActivityManager, _HKWheelchairUseCharacteristicCache, HKDisplayTypeController, HKHealthStore, HKUnitPreferenceController, HKSelectedTimeScopeController, WDFavoriteDisplayTypesController, HKManualEntryValidationController, NSString, HKSampleTypeDateRangeController, WDUserDefaults, HKSampleTypeUpdateController, HKHealthRecordsStore, HKUCUMUnitDisplayConverter, WDNotificationManager;
@protocol UIStateRestoring;

@interface WDProfile : NSObject <UIStateRestoring> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) HKDisplayCategoryController *displayCategoryController;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore;
@property (readonly, nonatomic) HKManualEntryValidationController *manualEntryValidationController;
@property (readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly, nonatomic) HKUCUMUnitDisplayConverter *ucumDisplayConverter;
@property (readonly, nonatomic) HKChartDataCacheController *dataCacheController;
@property (readonly, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController;
@property (readonly, nonatomic) WDNotificationManager *notificationManager;
@property (readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (readonly, nonatomic) HKSampleTypeUpdateController *updateController;
@property (readonly, nonatomic) WDSourceOrderController *sourceOrderController;
@property (readonly, nonatomic) WDUserActivityManager *userActivityManager;
@property (readonly, nonatomic) WDUserDefaults *userDefaults;
@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (readonly, nonatomic) NSString *presentationContext;
@property (readonly, nonatomic) id<UIStateRestoring> restorationParent;
@property (readonly, nonatomic) Class objectRestorationClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHealthStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_createHealthStore;

@end
