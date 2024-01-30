@class ATXGlobalSmartSuppression, ATXMagicalMomentsUpdateMonitor, ATXHeroAppPredictionsServer, NSDictionary, ATXBBNotificationManager, _ATXAppInstallMonitor, _ATXAppLaunchSequenceManager, _ATXAppIconState, _ATXFeedback, _ATXAppLaunchHistogramManager, ATXGlobalAppScorePredictor, _ATXAppDailyDose, ATXMediaApplications, ATXAppLaunchMicroLocation, _ATXAppLaunchLocation, _ATXAppInfoManager;

@interface ATXAppFeaturizer : NSObject {
    ATXBBNotificationManager *_notificationManager;
    _ATXFeedback *_feedback;
    _ATXAppLaunchHistogramManager *_appLaunchHistogramManager;
    _ATXAppLaunchSequenceManager *_appLaunchSequenceManager;
    _ATXAppLaunchLocation *_appLaunchLocation;
    _ATXAppInstallMonitor *_appInstallMonitor;
    ATXAppLaunchMicroLocation *_microLocation;
    ATXMediaApplications *_mediaApps;
    _ATXAppDailyDose *_appDailyDose;
    ATXGlobalAppScorePredictor *_globalAppScorePredictor;
    ATXGlobalSmartSuppression *_globalSmartSuppression;
    _ATXAppInfoManager *_appInfoManager;
    _ATXAppIconState *_appIconState;
    ATXMagicalMomentsUpdateMonitor *_mmPredictionMonitor;
    ATXHeroAppPredictionsServer *_heroPredictionServer;
    NSDictionary *_dayZeroParameters;
    NSDictionary *_dayZeroIntentParameters;
}

+ (float)_computeL2DistanceFromBundleId:(id)a0 to:(const float *)a1 app2vecMapping:(id)a2;
+ (BOOL)_predictNextAppLaunchEmbedding:(id)a0 into:(float *)a1 launchSequence:(id)a2;
+ (double)time:(double)a0 toAccuracyInSeconds:(double)a1;

- (id)init;
- (void).cxx_destruct;
- (void)setDistributionBasedScoreInputsForTimeAndDay:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *)a0 forBundleId:(id)a1 withTimeOfDayHistogram:(id)a2 withDayOfWeekHistogram:(id)a3;
- (id)initWithDayZeroParameters:(id)a0 dayZeroIntentParameters:(id)a1 feedback:(id)a2 appLaunchHistogramManager:(id)a3 appLaunchSequenceManager:(id)a4 appLaunchLocation:(id)a5 appInstallMontior:(id)a6 mediaApplications:(id)a7 appDailyDose:(id)a8 globalAppScorePredictor:(id)a9 globalSmartSuppression:(id)a10 appInfoManager:(id)a11 magicalMomentsUpdateMonitor:(id)a12 heroAppPredictions:(id)a13 appIconState:(id)a14 appLaunchMicroLocation:(id)a15 notificationManager:(id)a16;
- (struct vector<ATXPredictionItem, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct __compressed_pair<ATXPredictionItem *, std::__1::allocator<ATXPredictionItem> > { struct ATXPredictionItem *x0; } x2; })evaluateFeaturesForApps:(id)a0 clipBundleIdsToRank:(id)a1 consumerSubType:(unsigned char)a2 intent:(id)a3 scoreLogger:(id)a4 context:(id)a5 featureCache:(id)a6;
- (void)setDistributionBasedScoreInputsForItem:(struct ATXPredictionItem { id x0; unsigned long long x1; float x2[807]; float x3; BOOL x4; BOOL x5; } *)a0 withGeoHashResolution:(unsigned long long)a1 withGeoHashLaunchCounts:(id)a2;

@end
