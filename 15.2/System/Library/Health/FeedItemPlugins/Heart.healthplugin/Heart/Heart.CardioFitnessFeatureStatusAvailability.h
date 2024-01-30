@interface Heart.CardioFitnessFeatureStatusAvailability : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ userDefaultObservers;
    void /* unknown type, empty encoding */ notificationCancellable;
    void /* unknown type, empty encoding */ previousOnboardingStatus;
    void /* unknown type, empty encoding */ previousNotificationStatus;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ featureStatusSubject;
}

- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (void)featureStatusManager:(id)a0 didUpdateNotificationStatus:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
