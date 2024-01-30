@class NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PPConnectionsParameters : NSObject {
    NSDictionary *_assets;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (long long)appSwitcherPredictionExpiry;
- (double)linguisticTriggerExpirySeconds;
- (id)donationBlockedWebsites;
- (long long)expirySeconds;
- (double)namedEntitySourceLookBackSeconds;
- (long long)locationAppPredictionInstallMaxScore;
- (id)donationAllowedApps;
- (double)pasteboardItemExpirySeconds;
- (double)calendarEventLocationExpirySeconds;
- (double)namedEntitySourceExpirySeconds;
- (long long)locationAppPredictionLaunchTimeOfDayFactor;
- (double)locationAppLastUseTimeoutSeconds;
- (BOOL)shouldUseAllowedWebsite;
- (id)donationAllowedWebsites;
- (double)foundInAppsSourceExpirySeconds;
- (void).cxx_destruct;
- (id)init;
- (double)userActivityCandidateScore;
- (unsigned long long)quickTypePredictionLimit;
- (long long)locationAppPredictionOverallLaunchFactor;
- (long long)locationAppPredictionInstallHalflife;
- (double)calendarEventLocationLookaheadTimeSeconds;
- (double)userActivityExpirySeconds;
- (BOOL)shouldUseAllowedApps;
- (unsigned long long)userActivityBatchSize;
- (id)donationBlockedApps;
- (id)locationPredictionBlockedApps;
- (double)foundInAppsSourceLookBackSeconds;

@end
