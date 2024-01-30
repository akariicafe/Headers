@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (double)calendarEventLocationExpirySeconds;
- (id)donationAllowedApps;
- (double)namedEntitySourceExpirySeconds;
- (double)foundInAppsSourceLookBackSeconds;
- (BOOL)shouldUseAllowedApps;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)linguisticTriggerExpirySeconds;
- (long long)appSwitcherPredictionExpiry;
- (id)donationAllowedWebsites;
- (long long)locationAppPredictionInstallMaxScore;
- (double)pasteboardItemExpirySeconds;
- (unsigned long long)quickTypePredictionLimit;
- (double)userActivityCandidateScore;
- (id)donationBlockedWebsites;
- (long long)locationAppPredictionInstallHalflife;
- (double)locationAppLastUseTimeoutSeconds;
- (BOOL)shouldUseAllowedWebsite;
- (unsigned long long)userActivityBatchSize;
- (double)userActivityExpirySeconds;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (double)foundInAppsSourceExpirySeconds;
- (id)init;
- (long long)locationAppPredictionOverallLaunchFactor;
- (id)locationPredictionBlockedApps;
- (double)namedEntitySourceLookBackSeconds;
- (id)donationBlockedApps;
- (void).cxx_destruct;
- (long long)expirySeconds;

@end
