@interface SCLSettingsSyncStateSent : SCLSettingsSyncState

- (void)didEnterWithPreviousState:(id)a0;
- (unsigned long long)status;
- (void)xpcActivityStarted;
- (void)settingsDidChange;
- (void)messageWasDelivered:(id)a0;
- (void)message:(id)a0 didFailToAcknowledgeWithError:(id)a1;

@end
