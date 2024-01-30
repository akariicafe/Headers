@interface SCLSettingsSyncStatePendingSend : SCLSettingsSyncState

- (void)significantUserInteractionOccurred;
- (void)didEnterWithPreviousState:(id)a0;
- (unsigned long long)status;
- (void)xpcActivityStarted;
- (void)settingsDidChange;
- (void)commitSettings;
- (void)enqueueFailedWithError:(id)a0;
- (void)didEnqueueMessage:(id)a0;

@end
