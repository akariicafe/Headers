@interface SCLSettingsSyncStateSending : SCLSettingsSyncState

- (unsigned long long)status;
- (void)settingsDidChange;
- (void)messageDidSend:(id)a0;
- (void)message:(id)a0 failedWithError:(id)a1;

@end
