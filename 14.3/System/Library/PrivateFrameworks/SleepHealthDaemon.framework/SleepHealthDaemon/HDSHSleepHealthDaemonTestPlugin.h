@class HDSHProfileExtension, HDSHSleepOnboardingTestStore, NSDate;

@interface HDSHSleepHealthDaemonTestPlugin : HDSHSleepHealthDaemonPlugin {
    HDSHSleepOnboardingTestStore *_sleepStore;
    HDSHProfileExtension *_mainExtension;
}

@property (retain, nonatomic) NSDate *currentDate;
@property (nonatomic) BOOL springBoardGreetingDisabled;

- (id)init;
- (void).cxx_destruct;
- (id)extensionForProfile:(id)a0;
- (id)_availabilityStoreForFeature:(id)a0;
- (long long)onboardingCompletedVersionForFeature:(id)a0;
- (id)onboardingCompletedDateForFeature:(id)a0;
- (void)notifyForOnboardingVersionChangeForFeature:(id)a0;

@end
