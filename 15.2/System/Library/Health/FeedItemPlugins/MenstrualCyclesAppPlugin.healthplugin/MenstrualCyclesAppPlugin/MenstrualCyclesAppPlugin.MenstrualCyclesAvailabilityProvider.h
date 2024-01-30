@interface MenstrualCyclesAppPlugin.MenstrualCyclesAvailabilityProvider : NSObject <NSObject> {
    void /* unknown type, empty encoding */ isRunning;
    void /* unknown type, empty encoding */ internalAvailability;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ notifyQueue;
    void /* unknown type, empty encoding */ onboardingManager;
    void /* unknown type, empty encoding */ userCharacteristics;
    void /* unknown type, empty encoding */ didUpdate;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)onboardingStatusDidUpdate:(id)a0;

@end
