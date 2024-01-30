@interface AMSFeatureFlagRemote : AMSFeatureFlag

+ (id)fetchRemoteFlagState;

- (BOOL)isRemote;
- (void)_updateDevelopmentPhase;
- (void)_activateFlag;
- (long long)_developmentPhase;
- (id)_preferencesKey;
- (void)_updateInternalEnabledState;

@end
