@class ATXDigitalHealthBlacklist, _ATXRecentInstallCache, ATXAppPredictionBlacklist;

@interface ATXCandidateRelevanceModelConfigApp : ATXCandidateRelevanceModelConfig

@property (retain, nonatomic) ATXAppPredictionBlacklist *appBlacklist;
@property (retain, nonatomic) ATXDigitalHealthBlacklist *appDigitalHealthBlacklist;
@property (retain, nonatomic) _ATXRecentInstallCache *recentInstallCache;

- (id)appInstallAgesForAppsWithExcludedApps:(id)a0 appInfoManager:(id)a1;
- (id)recentlyInstalledAndNotLaunchedAppsFromAppInfoManager:(id)a0 currentSuggestionExecutableIds:(id)a1 launchedApps:(id)a2;
- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1;
- (id)candidatePublisherFromStartTime:(double)a0;
- (id)datasetGenerator;
- (id)proactiveSuggestionForCandidate:(id)a0 prediction:(float)a1;
- (BOOL)bundleIdIsEnabledForPrediction:(id)a0;
- (id)init;
- (BOOL)candidateIsStillValidToSuggest:(id)a0;
- (id)proactiveSuggestionForBundleId:(id)a0 prediction:(float)a1;
- (id)heuristicSuggestionsForContext:(id)a0 currentSuggestionExecutableIds:(id)a1 appInfoManager:(id)a2;
- (void).cxx_destruct;
- (id)recentlyLaunchedAppsFromAppLaunchAges:(id)a0;

@end
