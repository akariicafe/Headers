@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (double)appClipsPerAppClipMinRejectsNoDecay;
- (id)heroAppPredictionsKey;
- (id)appClipsErrorDomain;
- (double)heroAppWorstCaseLocationAccuracy;
- (double)heroAppMinRefreshInterval;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (id)appClipsNotificationLockscreenIdentifier;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (double)appClipsPerAppClipMinRejects;
- (int)heroAppIndexNotSet;
- (double)appClipsOverallEngagementThreshold;
- (double)appClipsMediumConfidenceScoreThreshold;
- (double)appClipsOverallMinRejects;
- (long long)appClipsLaunchErrorCode;
- (id)appClipsNotificationId;
- (id)defaultHeroPOICategory;
- (double)heroAppTileMaxErrorDistance;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (void).cxx_destruct;
- (double)heroAppEngagementThreshold;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (unsigned long long)appShadowLogSamplesPerDay;
- (long long)appClipsDecodeErrorCode;
- (id)init;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (double)heroAppPredictionExpirationInterval;
- (double)appClipsPerAppClipEngagementThreshold;
- (double)appClipsHighConfidenceScoreThreshold;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (double)heroAppMinimumRejects;
- (id)appClipsNotificationCategoryIdentifier;
- (id)appClipsModelVersion;

@end
