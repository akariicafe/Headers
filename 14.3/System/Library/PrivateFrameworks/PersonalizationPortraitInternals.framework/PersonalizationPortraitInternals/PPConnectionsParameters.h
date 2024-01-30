@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (double)calendarEventLocationLookaheadTimeSeconds;
- (id)donationAllowedApps;
- (id)init;
- (BOOL)shouldUseAllowedApps;
- (void).cxx_destruct;
- (unsigned long long)quickTypePredictionLimit;
- (long long)unsignedIntegerValueForKey:(id)a0 default:(long long)a1;
- (long long)integerValueForKey:(id)a0 default:(long long)a1;
- (double)foundInAppsSourceLookBackSeconds;
- (double)doubleValueForKey:(id)a0 default:(long long)a1;
- (double)pasteboardItemExpirySeconds;
- (double)userActivityCandidateScore;
- (double)namedEntitySourceLookBackSeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (double)locationAppLastUseTimeoutSeconds;
- (double)userActivityExpirySeconds;
- (id)locationPredictionBlockedApps;
- (unsigned long long)userActivityBatchSize;
- (id)donationBlockedWebsites;
- (double)linguisticTriggerExpirySeconds;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (id)donationAllowedWebsites;
- (long long)locationAppPredictionOverallLaunchFactor;
- (double)calendarEventLocationExpirySeconds;
- (id)donationBlockedApps;
- (double)foundInAppsSourceExpirySeconds;
- (id)assetValueForKey:(id)a0;
- (long long)appSwitcherPredictionExpiry;
- (long long)expirySeconds;
- (BOOL)boolValueForKey:(id)a0 default:(BOOL)a1;
- (BOOL)shouldUseAllowedWebsite;
- (long long)locationAppPredictionInstallHalflife;
- (double)namedEntitySourceExpirySeconds;

@end
