@interface SCLSettingsSyncStateFailed : SCLSettingsSyncState

- (void)xpcActivityStarted;
- (unsigned long long)status;
- (void)didEnterWithPreviousState:(id)a0;
- (void)significantUserInteractionOccurred;
- (void)settingsDidChange;
- (id)retryCriteriaWithInterval:(long long)a0;
- (void)transitionToPendingState;

@end
