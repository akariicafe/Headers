@interface SCLSettingsSyncStateFailed : SCLSettingsSyncState

- (unsigned long long)status;
- (void)significantUserInteractionOccurred;
- (void)xpcActivityStarted;
- (void)didEnterWithPreviousState:(id)a0;
- (void)settingsDidChange;
- (void)transitionToPendingState;
- (id)retryCriteriaWithInterval:(long long)a0;

@end
