@interface SleepHealthAppPlugin.SleepRoomDataProvider : NSObject <HKFeatureAvailabilityProvidingObserver, HKSPSleepStorePrivateObserver> {
    void /* unknown type, empty encoding */ dataType;
    void /* unknown type, empty encoding */ sleepScheduleProvider;
    void /* unknown type, empty encoding */ gregorianCalendarCache;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ sleepFocusPromotionStore;
    void /* unknown type, empty encoding */ sleepFocusPromotionDataSource;
    void /* unknown type, empty encoding */ onboardingDataSource;
    void /* unknown type, empty encoding */ sleepScheduleOffDataSource;
    void /* unknown type, empty encoding */ nextOccurrenceDataSource;
    void /* unknown type, empty encoding */ scheduleDataSource;
    void /* unknown type, empty encoding */ optionsDataSource;
    void /* unknown type, empty encoding */ updateHandler;
    void /* unknown type, empty encoding */ restorationUserActivity;
}

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;
- (void)sleepStore:(id)a0 sleepFocusConfigurationDidUpdate:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
