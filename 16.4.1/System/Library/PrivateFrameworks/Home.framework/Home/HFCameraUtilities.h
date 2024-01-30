@interface HFCameraUtilities : NSObject

+ (id)shortTimeStringFromDate:(id)a0;
+ (BOOL)internalCameraFeedbackSupported;
+ (void)acceptEmployeeCameraFeedbackConsent;
+ (id)attributedFullTimeStringFromDate:(id)a0;
+ (id)attributedShortTimeStringFromDate:(id)a0;
+ (void)cacheScrubberTimeScale:(double)a0;
+ (double)cachedScrubberTimeScale;
+ (id)dayStringFromDate:(id)a0;
+ (double)durationOfRecordingAtURL:(id)a0;
+ (BOOL)forceDisplayMultiCameraUpgradeBanner;
+ (BOOL)forceDisplaySingleCameraUpgradeBanner;
+ (BOOL)hasAcceptedCameraFeedbackEmployeeConsent;
+ (id)localizerKeyDayNameFromDate:(id)a0;
+ (id)percentageOfDurationUntilNextDayForEvent:(id)a0;
+ (BOOL)shouldCacheScrubberTimeScale;
+ (BOOL)shouldDisplayInternalViews;
+ (id)attributedStringFromDateString:(id)a0;
+ (BOOL)shouldDisableHeroFrameDownloads;
+ (id)_fullTimeStringFromDate:(id)a0 shouldUseTwentyFourHourTime:(BOOL)a1;
+ (id)_shortTimeStringFromDate:(id)a0 shouldUseTwentyFourHourTime:(BOOL)a1;
+ (BOOL)_shouldUseTwentyFourHourTime;
+ (id)attributedStringFromTwentyFourHourDateString:(id)a0;
+ (id)cameraFeedbackQueryString;
+ (id)destinationURLForTimelapseVideoFromCameraClip:(id)a0;
+ (double)elapsedTimeSinceMidnightForEvent:(id)a0;
+ (BOOL)eventSpansMultipleDays:(id)a0;
+ (BOOL)forceDisplayOfDismissedCameraUpgradeBanner;
+ (id)fullTimeStringFromDate:(id)a0;
+ (BOOL)isDateToday:(id)a0;
+ (BOOL)isDateYesterday:(id)a0;
+ (id)liveStringFromDate:(id)a0;
+ (BOOL)shouldDisplayInternalUpgradeViews;
+ (BOOL)shouldPurgePosterFrameCache;
+ (BOOL)shouldPurgeVideoFileCache;
+ (void)toggleDisplayOfInternalUpgradeViews:(BOOL)a0;
+ (id)twelveHourTimeStringFromDate:(id)a0;
+ (id)twentyFourHourLiveStringFromDate:(id)a0;
+ (id)twentyFourHourTimeStringFromDate:(id)a0;

@end
