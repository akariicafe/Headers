@class NSCache, _ATXAppLaunchHistogram, _ATXAggregateLogger, _ATXDataStore, ATXNotificationsSuggestionLR, ATXNotificationsRecorderPermanentStore, NSObject, NSMutableSet, ATXNotificationsLogger, ATXNotificationsPriors, _ATXAppLaunchCategoricalHistogram;
@protocol OS_dispatch_queue;

@interface ATXNotificationsSuggestion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    _ATXAppLaunchCategoricalHistogram *_notificationsHistory;
    _ATXAppLaunchHistogram *_appHistory;
    ATXNotificationsLogger *_logger;
    _ATXAggregateLogger *_aggdlogger;
    _ATXDataStore *_db;
    ATXNotificationsPriors *_notificationsPriors;
    double _threshold;
    double _stdthreshold;
    double _postthreshold;
    NSMutableSet *_inmemorycache;
    long long _stype;
    BOOL _override;
    BOOL _uselrmodel;
    ATXNotificationsSuggestionLR *_lrmodel;
    double _probaThreshold;
    NSCache *_cache;
    ATXNotificationsRecorderPermanentStore *_permanentStore;
}

+ (BOOL)isSettingSuggestion:(id)a0;
+ (id)extractSuggestionTypeStringFromBundleIdentifier:(id)a0;
+ (id)getSuggestionLRModel;
+ (id)createNotificationIdForSuggestion:(id)a0;
+ (id)generateAppId:(id)a0 topic:(id)a1;
+ (id)createBundleIdentifierForSuggestionWithType:(long long)a0;

- (void)logRTTOutcomeWithBundleId:(id)a0 topic:(id)a1 rttOutcome:(unsigned long long)a2;
- (void)makeSuggestionForNextNotification;
- (id)checkForBundleIdOverride;
- (void).cxx_destruct;
- (double)computeTurnoffProbabilityForBundleId:(id)a0;
- (id)getCachedScoreForAppId:(id)a0;
- (double)shouldMakeSuggestionForBundleId:(id)a0 topic:(id)a1;
- (void)suggestionResponse:(id)a0 topic:(id)a1 response:(long long)a2;
- (id)initWithSuggestionType:(long long)a0 permanentStore:(id)a1;
- (BOOL)_checkIfInDB:(id)a0 topic:(id)a1;
- (double)computePosterior:(double)a0 count:(double)a1 prior:(double)a2;
- (double)computeScoreByPriors:(id)a0 observed:(double)a1 count:(double)a2;
- (id)initWithThresholds:(double)a0 stdThreshold:(double)a1 suggestionType:(long long)a2 notificationsHistogram:(id)a3 applaunchHistogram:(id)a4 uselrmodel:(BOOL)a5 probaThreshold:(double)a6 lrmodel:(id)a7 permanentStore:(id)a8;
- (double)computeStandardError:(double)a0 count:(double)a1;
- (id)computeFeaturesForBundleId:(id)a0;
- (id)getResponses;
- (void)resetResponses;
- (BOOL)checkIfInDB:(id)a0 topic:(id)a1;
- (double)computeThresholdScore:(id)a0 topic:(id)a1;
- (double)computeScoreByLogisticRegression:(id)a0 observed:(double)a1 count:(double)a2;
- (double)computeLikelihood:(double)a0 count:(double)a1;
- (id)initWithThresholds:(double)a0 stdThreshold:(double)a1 suggestionType:(long long)a2 notificationsHistogram:(id)a3 applaunchHistogram:(id)a4 uselrmodel:(BOOL)a5 probaThreshold:(double)a6 lrmodel:(id)a7 permanentStore:(id)a8 dataStore:(id)a9 notificationsLogger:(id)a10 aggdlogger:(id)a11;
- (double)computeTurnoffProbabilityWithInput:(id)a0;
- (id)message:(id)a0 topic:(id)a1 response:(long long)a2;

@end
