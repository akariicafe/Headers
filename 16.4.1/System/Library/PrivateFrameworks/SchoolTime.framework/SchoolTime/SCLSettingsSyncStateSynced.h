@interface SCLSettingsSyncStateSynced : SCLSettingsSyncState

- (unsigned long long)status;
- (void)didEnterWithPreviousState:(id)a0;
- (void)settingsDidChange;

@end
