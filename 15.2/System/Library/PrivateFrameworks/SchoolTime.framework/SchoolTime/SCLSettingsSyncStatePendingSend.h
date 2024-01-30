@interface SCLSettingsSyncStatePendingSend : SCLSettingsSyncState

- (unsigned long long)status;
- (void)significantUserInteractionOccurred;
- (void)xpcActivityStarted;
- (void)didEnterWithPreviousState:(id)a0;
- (void)settingsDidChange;
- (void)commitSettings;
- (void)enqueueFailedWithError:(id)a0;
- (void)didEnqueueMessage:(id)a0;

@end
