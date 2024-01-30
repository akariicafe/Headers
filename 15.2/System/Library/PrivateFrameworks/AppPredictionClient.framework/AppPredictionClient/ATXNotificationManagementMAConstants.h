@class NSDictionary;

@interface ATXNotificationManagementMAConstants : NSObject {
    NSDictionary *_parameters;
}

@property (readonly, nonatomic) double interruptionManagerRecommendationThresholdForContacts;
@property (readonly, nonatomic) double interruptionManagerRecommendationThresholdForApps;
@property (readonly, nonatomic) long long interruptionManagerMaxSuggestions;
@property (readonly, nonatomic) double interruptionManagerPromptAllowScoreThreshold;
@property (readonly, nonatomic) double interruptionManagerPromptBlockScoreThreshold;
@property (readonly, nonatomic) double thresholdForShowingDigestOnboardingSuggestion;
@property (readonly, nonatomic) long long numPreviousDaysToCheckForNotificationProblemForDigestOnboardingSuggestion;
@property (readonly, nonatomic) long long digestOnboardingSuggestionHour;
@property (readonly, nonatomic) long long digestOnboardingSuggestionMinute;
@property (readonly, nonatomic) double smartPauseManagerPauseDurationSeconds;
@property (readonly, nonatomic) double smartPauseManagerExpirationSeconds;
@property (readonly, nonatomic) double smartPauseManagerRefreshIntervalSeconds;
@property (readonly, nonatomic) long long urgencyTuningManagerMaxNumNonEngagementsAllowedForUrgentNotifications;
@property (readonly, nonatomic) long long sendMessagesToDigestManagerMaxNumNonEngagementsAllowedForMessageNotifications;
@property (readonly, nonatomic) double thresholdForShowingDigestOnboardingSuggestionToSeedUsers;
@property (readonly, nonatomic) long long smartPauseManagerThresholdForNumNotificationsReceivedInLastFiveMinutesForThread;
@property (readonly, nonatomic) long long smartPauseManagerThresholdForNumNotificationsReceivedInLastFiveMinutesForApp;
@property (readonly, nonatomic) double smartPauseManagerEngagementRateThresholdForThread;
@property (readonly, nonatomic) double smartPauseManagerEngagementRateThresholdForApp;
@property (readonly, nonatomic) double sendToDigestEngagementRateThreshold;
@property (readonly, nonatomic) long long sendToDigestThresholdForNumNonEngagements;
@property (readonly, nonatomic) double urgencyTuningStartTimeoutSeconds;
@property (readonly, nonatomic) double urgencyTuningTimeoutScaleFactor;
@property (readonly, nonatomic) double smartPauseStartTimeoutSeconds;
@property (readonly, nonatomic) double smartPauseTimeoutScaleFactor;
@property (readonly, nonatomic) double interruptionManagementStartTimeoutSeconds;
@property (readonly, nonatomic) double interruptionManagementTimeoutScaleFactor;
@property (readonly, nonatomic) double sendToDigestStartTimeoutSeconds;
@property (readonly, nonatomic) double sendToDigestTimeoutScaleFactor;
@property (readonly, nonatomic) double backupStartTimeoutSeconds;
@property (readonly, nonatomic) double backupTimeoutScaleFactor;
@property (readonly, nonatomic) long long numIgnoresToReject;
@property (readonly, nonatomic) unsigned long long digestOnboardingSuggestionMinimumActiveNotifications;
@property (readonly, nonatomic) unsigned long long digestOnboardingSuggestionMinimumUniqueBundleIds;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end
