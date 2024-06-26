@class NSDictionary, NSString;

@interface _ATXGlobals : NSObject {
    NSDictionary *_parameters;
    NSString *_abGroupIdentifier;
}

+ (id)sharedInstance;

- (double)notificationsAppSamplingRate;
- (double)slotResolutionPreviousLocationLaunchDecayHalflife;
- (id)heuristicPredictionBlendingModelVersion;
- (double)notificationsInternalSamplingRate;
- (double)appPredictionGlobalScoreMultiplierPerApp;
- (double)appCoarseGeoHashDecayHalflife;
- (double)notificationsQuietingEngageRateThreshold;
- (id)launchAndLocationHarvesterGenreIdBlacklist;
- (int)numberOfTopSASAppsToLog;
- (double)appLaunchDecayHalflife;
- (int)extraSASAppsToLog;
- (double)notificationsUserSamplingRate;
- (double)homeScreenAppConfirmsCoarseTimePOWLocationDecayHalflife;
- (BOOL)sessionLoggingLatLongEnable;
- (int)numberOfActionsToKeepForLogging;
- (id)init;
- (id)launchAndLocationHarvesterAppBlacklist;
- (double)appZoom7GeoHashDecayHalflife;
- (double)homeScreenAppRejectsDayOfWeekDecayHalflife;
- (double)sessionObjectLogSamplingRate;
- (int)locationOfInterestSearchRadius;
- (double)appDirectoryRejectsTwoHourTimeIntervalDecayHalflife;
- (void).cxx_destruct;
- (int)maxNumberOfActionTypesPerApp;
- (id)actionFallbacksBlendingModelVersion;
- (double)homeScreenAppRejectsCoarseTimePOWLocationDecayHalflife;
- (double)appRejectsCoarseGeoHashDecayHalflife;
- (double)cacheRefreshIntervalForDisabledAppConsumerSubType;
- (double)appAndActionSpecificTimePowLocationDecayHalflife;
- (BOOL)onlyUseEligibleForPrediction;
- (double)predictedRouteAcceptThreshold;
- (double)actionSpecificGeoHashDecayHalflife;
- (double)trendingLaunchDecayHalflife;
- (int)donationWeighingScheme;
- (double)heuristicsBaseScore;
- (double)smoothedCountForCoarseTimeOfDayStd;
- (id)actionPredictionBlendingModelVersion;
- (double)homeScreenAppRejectsSpecificGeohashDecayHalflife;
- (double)appActionDayOfWeekLaunchDecayHalflife;
- (id)approvedSiriKitIntents;
- (id)blacklistedAppActionsForShortcuts;
- (double)appActionTrendingLaunchDecayHalflife;
- (int)actionExperienceMediumConfidenceAppActionCountThreshold;
- (int)appConnectionMinTotalLaunches;
- (int)actionPredictionFirstStageBeamWidth;
- (double)homeScreenAppRejectsSpecificTimeDOWLocationDecayHalflife;
- (int)actionExperienceHighConfidenceAppActionCountThreshold;
- (double)appDirectoryRejectsSpecificTimeDOWLocationDecayHalflife;
- (double)appDirectoryConfirmsTwoHourTimeIntervalDecayHalflife;
- (double)defaultPeriodicLoggerEnrollmentRate;
- (double)appAndActionCoarseTimePowLocationDecayHalflife;
- (double)notificationsQuietingEngageRateStd;
- (int)spotlightMaxValidCacheAge;
- (double)actionPredictionInternalBuildShadowLogSamplingRate;
- (double)appConfirmsCoarseGeoHashDecayHalflife;
- (id)whitelistedAnchorsForMagicalMomentsOnHomeScreen;
- (double)actionPredictionSessionLoggingDurationResolutionSec;
- (int)extraIntentsToLog;
- (double)homeScreenAppConfirmsCoarseGeohashDecayHalflife;
- (int)maxMagicalMomentsPredictions;
- (double)appDirectoryConfirmsCoarseTimePOWLocationDecayHalflife;
- (double)appDirectoryConfirmsSpecificGeohashDecayHalflife;
- (id)appPredictionBlendingModelVersion;
- (double)homeScreenAppConfirmsSpecificGeohashDecayHalflife;
- (id)whitelistedBundlesForAnchorModelLogging;
- (BOOL)sessionLoggingHomeDistanceEnable;
- (double)maximumSlotResolutionDatabaseEntryAge;
- (double)notificationsHistoryDecayHalflife;
- (int)fallbackActionsEngagementPriorAlpha;
- (double)notificationsSeedSamplingRate;
- (int)minimumTimespanForOnceOffActions;
- (int)maxDistanceToDropOffLocationInMetersForRequestRideIntent;
- (double)appPredictionBlendedScoreNormalizationConstant;
- (BOOL)cdnDownloaderIsEnabled;
- (int)heuristicsEngagementPriorAlpha;
- (int)extraAppsToLog;
- (double)homeScreenAppConfirmsTwoHourTimeIntervalDecayHalflife;
- (int)maxHeuristicAppActionCount;
- (double)slotResolutionLocationLaunchDecayHalflife;
- (double)airplaneModeLaunchDecayHalflife;
- (BOOL)sessionLoggingGymDistanceEnable;
- (id)whitelistedDonationDaemonBundleIds;
- (double)actionCoarseGeoHashDecayHalflife;
- (double)clippingThresholdForGaussianDist;
- (double)actionExperienceMediumConfidenceThreshold;
- (int)appConnectionMinAverageLaunches;
- (double)sessionLoggingDistanceAccuracy;
- (int)maximumSpotlightPredictions;
- (double)appDirectoryLaunchDecayHalflife;
- (double)appConfirmsDayOfWeekDecayHalflife;
- (unsigned long long)personalizationRequiredCountForRelevance;
- (double)slotResolutionDayOfWeekLaunchDecayHalflife;
- (double)homeScreenAppRejectsCoarseGeohashDecayHalflife;
- (id)abGroupIdentifier;
- (double)sessionLoggingLatLongAccuracy;
- (double)unlockTimeDecayHalflife;
- (int)sessionLoggingAppSequenceLength;
- (double)notificationsPromotingEngageRateStd;
- (double)launchSequenceDecayHalflife;
- (double)defaultPredictionRefreshRate;
- (double)wifiSSIDLaunchDecayHalflife;
- (double)homeScreenAppExplicitRejectsCoarseTimePOWLocationDecayHalflife;
- (unsigned long long)personalizationRequiredActionHistorySeconds;
- (double)cacheRefreshIntervalForDisabledActionConsumerSubType;
- (double)coreMotionLaunchDecayHalflife;
- (int)homeScreenMaxValidCacheAge;
- (double)appRejectsTwoHourTimeIntervalDecayHalflife;
- (double)appDirectoryRejectsCoarseGeohashDecayHalflife;
- (double)appDirectoryRejectsCoarseTimePOWLocationDecayHalflife;
- (BOOL)disableLocationQualityChecksForHeroApp;
- (double)appActionLaunchDecayHalflife;
- (int)actionSpotlightCaptureRateSecondsAfterSessionEnd;
- (double)appLaunchesTwoHourTimeIntervalDecayHalflife;
- (unsigned long long)transitionLookaheadMaxSeconds;
- (double)launchAndLocationHarvesterSamplingRate;
- (id)whitelistedActionTypesForHomeScreen;
- (unsigned long long)transitionLookaheadMinSeconds;
- (double)slotResolutionRatioSmoothingThreshold;
- (double)actionPredictionShadowLogSamplingRate;
- (double)slotResolutionTimeOfDayLaunchDecayHalflife;
- (id)penalizedFallbackActions;
- (double)slotResolutionMotionTypeLaunchDecayHalflife;
- (int)minDistanceToDropOffLocationInMetersForRequestRideIntent;
- (double)appDirectoryConfirmsCoarseGeohashDecayHalflife;
- (id)whitelistedActionTypesForAnchorModelLogging;
- (id)blacklistedAppsForLockscreenPredictions;
- (id)personalizationBlacklistedBundleIds;
- (int)sessionLoggingUniqueAppActionSequenceLength;
- (double)actionExperienceHighConfidenceThreshold;
- (id)blacklistedAppActionsForPredictions;
- (double)appActionWifiSSIDLaunchDecayHalflife;
- (int)heuristicsEngagementPriorBeta;
- (double)smoothedCountForTimeOfDayStd;
- (double)appSpecificGeoHashDecayHalflife;
- (int)fallbackActionsEngagementPriorBeta;
- (double)notificationsCustomerSamplingRate;
- (double)appActionLaunchSequenceDecayHalflife;
- (int)messageContentTimeElapsed;
- (double)actionPredictionInternalBuildSessionLogSamplingRate;
- (double)penaltyForMultipleActionsPerApp;
- (double)defaultPeriodicLoggerUploadIntervalSeconds;
- (double)notificationsQuietingProbabilityThreshold;
- (double)homeScreenAppConfirmsDayOfWeekDecayHalflife;
- (double)homeScreenAppConfirmsSpecificTimeDOWLocationDecayHalflife;
- (double)heuristicActionExperienceMediumConfidenceThreshold;
- (double)appDirectoryConfirmsSpecificTimeDOWLocationDecayHalflife;
- (BOOL)sessionLoggingCurrentLOITypeEnable;
- (int)actionPredictionSessionLoggingBottomBlockMaxItemsToLog;
- (int)actionSpotlightCaptureRateActionAppLaunchThresholdSeconds;
- (double)defaultPeriodicLoggerEnrollmentPeriodSeconds;
- (double)appConfirmsTwoHourTimeIntervalDecayHalflife;
- (int)actionSpotlightCaptureRateForwardQueryThresholdSeconds;
- (double)donationWeighingStrength;
- (double)appDirectoryRejectsDayOfWeekDecayHalflife;
- (double)appDirectoryRejectsSpecificGeohashDecayHalflife;
- (double)homescreenLaunchDecayHalflife;
- (double)appDirectoryExplicitRejectsCoarseTimePOWLocationDecayHalflife;
- (BOOL)allowBehavioralPredictionsOnLockscreen;
- (double)slotResolutionPartOfWeekLaunchDecayHalflife;
- (id)enabledFallbackActions;
- (double)homeScreenAppRejectsTwoHourTimeIntervalDecayHalflife;
- (double)appRejectsDayOfWeekDecayHalflife;
- (int)numberOfRandomAppActionTypesToKeepForLogging;
- (BOOL)sessionLoggingSchoolDistanceEnable;
- (id)triggerPresetMinutes;
- (double)dayOfWeekLaunchDecayHalflife;
- (double)nsuaDonationWeight;
- (id)magicalMomentsEnabledPredictionExperts;
- (id)blacklistedAppActions;
- (double)actionPredictionSessionLogSamplingRate;
- (id)messageContentBlacklist;
- (double)appDirectoryConfirmsDayOfWeekDecayHalflife;
- (double)smoothedBudgetForTimeOfDayStd;
- (double)behavioralHomeScreenActionMinimumConfidenceThreshold;
- (double)shadowLogSamplingRate;
- (double)appActionCoreMotionLaunchDecayHalflife;
- (BOOL)onlyAcceptBecomeCurrentNSUAs;
- (double)appConfirmsSpecificGeoHashDecayHalflife;
- (double)appActionUnlockTimeDecayHalflife;
- (double)slotResolutionLaunchDecayHalflife;
- (id)blacklistedAppsForAppPredictions;
- (id)blacklistedAppActionsHelper:(id)a0;
- (id)blacklistedAppActionsForPrimaryShortcuts;
- (int)maxValidATXActionResponseCacheAgeSec;
- (double)predictionsPerAppActionLimit;
- (int)maximumParameterCombinations;
- (double)notificationsPromotingEngageRateThreshold;
- (int)previousAppActionCompareCount;
- (double)maximumSlotFeedbackDatabaseEntryAge;
- (double)timeAndDayAppLaunchesDecayHalflife;
- (BOOL)useOriginalScreenLockStateStream;
- (int)lockscreenMaxValidCacheAge;
- (int)numberOfRandomSlotsToKeepForLogging;
- (double)shouldIgnoreUpcomingMediaExpirationDateForTV;
- (double)spotlightLaunchDecayHalflife;
- (double)heuristicActionExperienceHighConfidenceThreshold;
- (double)maximumActionFeedbackMeanCalculationEntryAge;
- (BOOL)notificationsQuietingUseLogisticRegression;
- (double)appExplicitRejectsCoarseTimePOWLocationDecayHalflife;
- (double)appRejectsSpecificGeoHashDecayHalflife;
- (double)appActionAirplaneModeLaunchDecayHalflife;
- (id)initWithAssetClass:(Class)a0;
- (id)whitelistedActionKeysForHomeScreen;
- (BOOL)sessionLoggingWorkDistanceEnable;
- (double)predictionsForMultiStageLoggingLimit;

@end
