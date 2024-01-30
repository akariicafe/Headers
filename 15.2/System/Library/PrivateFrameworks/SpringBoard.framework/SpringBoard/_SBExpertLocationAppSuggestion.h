@interface _SBExpertLocationAppSuggestion : _SBExpertAppSuggestion

- (id)launchURL;
- (id)originatingBundleIdentifier;
- (id)suggestedLocationName;
- (BOOL)launchURLRequiresInboxCopy;
- (id)makeInboxCopyOfLaunchURLToInboxURL:(id)a0;
- (BOOL)isLocationPredictionOfType:(unsigned long long)a0;
- (BOOL)isLocationPredictionFromSource:(unsigned long long)a0;
- (BOOL)isEligibleForLockScreen;

@end
