@interface SCLSettingsSyncStateSynced : SCLSettingsSyncState

- (void)didEnterWithPreviousState:(id)a0;
- (unsigned long long)status;
- (void)settingsDidChange;

@end
