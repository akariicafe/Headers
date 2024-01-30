@interface SCLSettingsSyncStateSending : SCLSettingsSyncState

- (unsigned long long)status;
- (void)settingsDidChange;
- (void)message:(id)a0 failedWithError:(id)a1;
- (void)messageDidSend:(id)a0;

@end
