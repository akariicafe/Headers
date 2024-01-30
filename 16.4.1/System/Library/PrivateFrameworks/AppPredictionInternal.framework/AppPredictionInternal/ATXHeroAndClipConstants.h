@class NSDictionary;

@interface ATXHeroAndClipConstants : NSObject {
    NSDictionary *_parameters;
}

+ (id)sharedInstance;

- (id)appClipsNotificationId;
- (double)appClipsFeedbackHistogramHalfLifeInDays;
- (double)heroAppMinimumRejects;
- (id)appClipsModelVersion;
- (double)heroAppTileMaxErrorDistance;
- (id)defaultHeroPOICategory;
- (int)heroAppIndexNotSet;
- (unsigned long long)appClipSessionLogNegativeSamplesPerDay;
- (double)appClipsPerAppClipMinRejects;
- (unsigned long long)appClipSessionLogPositiveSamplesPerDay;
- (unsigned long long)appClipShadowLogSamplesPerDay;
- (double)appClipsPerAppClipEngagementThreshold;
- (double)appClipsHighConfidenceScoreThreshold;
- (long long)appClipsLaunchErrorCode;
- (double)heroAppPredictionExpirationInterval;
- (double)heroAppEngagementThreshold;
- (unsigned long long)heroAppSessionLogPositiveSamplesPerDay;
- (double)heroAppWorstCaseLocationAccuracy;
- (double)heroAppMinRefreshInterval;
- (double)appClipsOverallEngagementThreshold;
- (double)appClipsMediumConfidenceScoreThreshold;
- (id)appClipsNotificationCategoryIdentifier;
- (id)init;
- (double)appClipsPerAppClipEngagementThresholdNoDecay;
- (unsigned long long)appShadowLogSamplesPerDay;
- (double)appClipsPerAppClipMinRejectsNoDecay;
- (id)appClipsErrorDomain;
- (long long)appClipsDecodeErrorCode;
- (unsigned long long)heroAppSessionLogNegativeSamplesPerDay;
- (void).cxx_destruct;
- (id)appClipsNotificationLockscreenIdentifier;
- (id)heroAppPredictionsKey;
- (double)appClipsOverallMinRejects;

@end
