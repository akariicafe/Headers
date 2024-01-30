@interface SleepHealthAppPlugin.SleepOnboardingFlowController : OBWelcomeController <HKSPSleepStoreObserver> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
}

- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)dealloc;

@end
