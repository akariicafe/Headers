@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (double)heroAppMinimumRejects;
- (double)heroAppEngagementThreshold;
- (id)appClipsModelVersion;
- (double)appClipsMediumConfidenceScoreThreshold;
- (double)appClipsHighConfidenceScoreThreshold;
- (id)appClipsNotificationId;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (unsigned long long)appShadowLogSamplesPerDay;
- (id)heroAppPredictionsKey;
- (double)heroAppPredictionExpirationInterval;
- (id)appClipsErrorDomain;
- (long long)appClipsLaunchErrorCode;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (double)appClipsOverallEngagementThreshold;
- (double)appClipsOverallMinRejects;
- (double)appClipsPerAppClipEngagementThreshold;
- (double)appClipsPerAppClipMinRejects;
- (id)appClipsNotificationCategoryIdentifier;
- (id)appClipsNotificationLockscreenIdentifier;
- (long long)appClipsDecodeErrorCode;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (double)heroAppWorstCaseLocationAccuracy;
- (double)heroAppTileMaxErrorDistance;
- (double)heroAppMinRefreshInterval;
- (int)heroAppIndexNotSet;

@end
