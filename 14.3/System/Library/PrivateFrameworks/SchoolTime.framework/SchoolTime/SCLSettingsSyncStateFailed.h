@interface SCLSettingsSyncStateFailed : SCLSettingsSyncState

- (void)significantUserInteractionOccurred;
- (void)didEnterWithPreviousState:(id)a0;
- (unsigned long long)status;
- (void)xpcActivityStarted;
- (void)settingsDidChange;
- (void)transitionToPendingState;
- (id)retryCriteriaWithInterval:(long long)a0;

@end
