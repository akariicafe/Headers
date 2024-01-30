@interface SCLSettingsSyncStateSent : SCLSettingsSyncState

- (unsigned long long)status;
- (void)xpcActivityStarted;
- (void)didEnterWithPreviousState:(id)a0;
- (void)settingsDidChange;
- (void)messageWasDelivered:(id)a0;
- (void)message:(id)a0 didFailToAcknowledgeWithError:(id)a1;

@end
