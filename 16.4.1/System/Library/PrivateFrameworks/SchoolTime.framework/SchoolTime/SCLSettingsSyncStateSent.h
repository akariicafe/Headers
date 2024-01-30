@interface SCLSettingsSyncStateSent : SCLSettingsSyncState

- (void)xpcActivityStarted;
- (unsigned long long)status;
- (void)didEnterWithPreviousState:(id)a0;
- (void)settingsDidChange;
- (void)message:(id)a0 didFailToAcknowledgeWithError:(id)a1;
- (void)messageWasDelivered:(id)a0;

@end
