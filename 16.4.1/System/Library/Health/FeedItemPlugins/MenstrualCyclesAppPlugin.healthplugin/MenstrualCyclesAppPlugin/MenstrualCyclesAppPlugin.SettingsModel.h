@interface MenstrualCyclesAppPlugin.SettingsModel : NSObject <HKMCSettingsManagerObserver> {
    void /* unknown type, empty encoding */ settingsManager;
}

- (void)settingsManagerDidUpdateNotificationSettings:(id)a0;
- (void)settingsManagerDidUpdateAnalysisSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)settingsManagerDidUpdateHiddenDisplayTypes:(id)a0;

@end
