@class ATXEngagementRecordManager, NSArray, NSXPCConnection, ATXUniversalBiomeUIStream, ATXProactiveSuggestionClient, NSObject, _DKEventStream;
@protocol OS_dispatch_queue, _DKKnowledgeSaving, ATXPETEventTracker2Protocol;

@interface ATXAppDirectoryClient : NSObject <ATXAppDirectoryInterface> {
    NSXPCConnection *_xpcConnection;
    id<_DKKnowledgeSaving> _knowledgeStore;
    _DKEventStream *_knowledgeStream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
    ATXProactiveSuggestionClient *_blendingClient;
    id<ATXPETEventTracker2Protocol> _tracker;
    ATXUniversalBiomeUIStream *_uiStream;
    ATXEngagementRecordManager *_engagementRecordManager;
}

@property (retain) NSArray *topAppsVisible;
@property (retain) NSArray *recentAppsVisible;
@property (nonatomic) BOOL didSendFeedbackDuringSession;

+ (id)sharedInstance;
+ (id)_allPlaceholderBundleIdsFromHomeScreenService:(id)a0;
+ (id)hardcodedAppCategoryMappings;
+ (id)_sortedAllOtherBundleIDsFromAllBundleIDs:(id)a0 allPlaceholderBundleIDs:(id)a1 hardcodedAppCategoryMappings:(id)a2;
+ (id)_sortedDefaultCategories;
+ (id)_sortedBundleIDsByCategoryWithHardcodedAppCategoryMappings:(id)a0;

- (void)logCloseSearchWithDate:(id)a0;
- (void)predictedAppsAndRecentAppsWithShouldUseDefaultCategories:(BOOL)a0 reply:(id /* block */)a1;
- (void)logDidLeaveAppDirectoryWithDate:(id)a0 appDirectoryResponse:(id)a1;
- (void)logDidEnterAppDirectoryWithDate:(id)a0;
- (void)logLaunchFromExpandedCategoryWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2 bundleID:(id)a3 bundleIndex:(unsigned long long)a4 appDirectoryResponse:(id)a5;
- (void)logCategoryExpansionWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2;
- (void)logLaunchFromSearchWithDate:(id)a0 bundleID:(id)a1 bundleIndex:(unsigned long long)a2 searchQueryLength:(unsigned long long)a3 searchTab:(unsigned long long)a4 appDirectoryResponse:(id)a5;
- (void)predictedAppsAndRecentAppsWithReply:(id /* block */)a0;
- (void)_updateTopAppsVisibilityWithCategories:(id)a0;
- (void)logCategoryExitWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2;
- (void)categoriesWithReply:(id /* block */)a0;
- (void)_logCaptureRateCapture;
- (void)_addEngagedSuggestionToERM:(id)a0;
- (id)_readRecentAppsWithError:(id *)a0;
- (void)_logToBiome:(unsigned long long)a0 metadata:(id)a1;
- (void)_logCaptureRateDiversionWithType:(int)a0;
- (void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)a0 shouldUseDefaultCategories:(BOOL)a1 reply:(id /* block */)a2;
- (void)requestNotificationWhenCategoriesAreReady;
- (void)logLaunchFromCategoryPreviewWithDate:(id)a0 categoryID:(unsigned long long)a1 categoryIndex:(unsigned long long)a2 bundleID:(id)a3 bundleIndex:(unsigned long long)a4 appDirectoryResponse:(id)a5;
- (void)appLaunchDatesWithReply:(id /* block */)a0;
- (void)logOpenSearchWithDate:(id)a0;
- (void)notifyBookmarksDidChange;
- (void)categoriesWithShouldUseDefault:(BOOL)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_suggestionsPodDedupableBundleIds;
- (id)_init;
- (void)predictedAppsAndRecentAppsWithMaxNumberOfPredictedApps:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)_logToBiomeWithEventType:(unsigned long long)a0 date:(id)a1 blendingCacheUUID:(id)a2 shownSuggestionIds:(id)a3 engagedSuggestionIds:(id)a4 categoryID:(id)a5 categoryIndex:(id)a6 bundleId:(id)a7 bundleIndex:(id)a8 searchQueryLength:(id)a9 searchTab:(id)a10 bundleIdInTopAppsVisible:(id)a11 userLaunchedAppBeforeLeaving:(id)a12;
- (void)dealloc;
- (void)_resetSessionState;
- (void)_logToDuet:(unsigned long long)a0 metadata:(id)a1;

@end
