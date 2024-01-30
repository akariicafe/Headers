@interface SleepHealthAppPlugin.SleepRoomDataProvider : _TtCs12_SwiftObject <HKFeatureAvailabilityProvidingObserver> {
    void /* unknown type, empty encoding */ dataType;
    void /* unknown type, empty encoding */ sleepScheduleProvider;
    void /* unknown type, empty encoding */ gregorianCalendarCache;
    void /* unknown type, empty encoding */ currentSleepEnabledSubscriber;
    void /* unknown type, empty encoding */ sleepStore;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ onboardingDataSource;
    void /* unknown type, empty encoding */ sleepScheduleOffDataSource;
    void /* unknown type, empty encoding */ nextOccurrenceDataSource;
    void /* unknown type, empty encoding */ scheduleDataSource;
    void /* unknown type, empty encoding */ optionsDataSource;
}

- (void)featureAvailabilityProvidingDidUpdateOnboardingCompletion:(id)a0;
- (void)featureAvailabilityProvidingDidUpdatePairedDeviceCapability:(id)a0;

@end
