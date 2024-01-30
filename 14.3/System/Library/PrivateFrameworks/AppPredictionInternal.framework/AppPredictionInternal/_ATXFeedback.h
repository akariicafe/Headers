@class _ATXAppLaunchCategoricalHistogram, NSString, _ATXDataStore, _ATXInternalUninstallNotification;

@interface _ATXFeedback : NSObject <_ATXFeedbackProtocol> {
    _ATXDataStore *_store;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    double _priorAlpha;
    double _priorBeta;
    NSString *_abGroupIdentifier;
    _ATXAppLaunchCategoricalHistogram *_appCoarseTimePOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appSpecificTimeDOWLocationConfirmsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appCoarseTimePOWLocationRejectsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appSpecificTimeDOWLocationRejectsHistogram;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsCoarseGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appRejectsCoarseGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appConfirmsSpecificGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appRejectsSpecificGeoHash;
    _ATXAppLaunchCategoricalHistogram *_appExplicitRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppConfirmsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppRejectsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_homeScreenAppExplicitRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryConfirmsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsCoarseTimePOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsSpecificTimeDOWLocation;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsTwoHourTimeInterval;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsDayOfWeek;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsCoarseGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryRejectsSpecificGeohash;
    _ATXAppLaunchCategoricalHistogram *_appDirectoryExplicitRejectsCoarseTimePOWLocation;
}

@property (readonly, nonatomic) double currentAlpha;
@property (readonly, nonatomic) double currentBeta;

+ (id)sharedInstance;
+ (BOOL)isWidgetOrSpotlight:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeFeedbackForBundle:(id)a0;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)a0 forBundleId:(id)a1 rejected:(id)a2 explicitlyRejected:(id)a3 context:(id)a4;
- (void)feedbackLaunchedWithConsumerType:(unsigned long long)a0 forBundleId:(id)a1 rejected:(id)a2 context:(id)a3;
- (void)removeFeedbackForBundles:(id)a0;
- (void)putFeedbackScoresForApps:(id)a0 intoScores:(double *)a1 confirms:(double *)a2 rejects:(double *)a3;
- (void)populateFeedbackForConsumerType:(unsigned long long)a0 forBundleId:(id)a1 withContext:(id)a2 forFeedbackCategory:(long long)a3;
- (void)decayCounts;
- (void)resetData;
- (void)doDecayAtTime:(double)a0;
- (void)putNopScoresForApps:(id)a0 into:(double *)a1 atTime:(double)a2;
- (id)initWithDataStore:(id)a0 histogramManager:(id)a1;

@end
