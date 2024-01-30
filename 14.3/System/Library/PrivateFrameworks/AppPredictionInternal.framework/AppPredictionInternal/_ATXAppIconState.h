@class _PASSimpleCoalescingTimer, SBSHomeScreenService, NSDictionary, NSArray, NSMutableIndexSet, ATXHomeScreenConfigCache, NSObject;
@protocol OS_dispatch_queue;

@interface _ATXAppIconState : NSObject {
    NSObject<OS_dispatch_queue> *_syncQueue;
    int _homeScreenConfigCacheChangeDarwinNotificationObserver;
    int _homeScreenTodayPageConfigCacheChangeDarwinNotificationObserver;
    int _dockAppListChangeDarwinNotificationObserver;
    ATXHomeScreenConfigCache *_homeScreenConfigCache;
    SBSHomeScreenService *_sbsHomeScreenService;
    NSDictionary *_iconLocationByBundleId;
    unsigned long long _numHomeScreenPages;
    unsigned long long _numHomeScreenFolders;
    NSArray *_orderedVisiblePageIndices;
    NSMutableIndexSet *_pageIndicesWithAppPredictionPanels;
    NSMutableIndexSet *_pageIndicesWithSuggestionWidgets;
    _PASSimpleCoalescingTimer *_coalescedReloadOperation;
}

+ (id)sharedInstance;

- (long long)springboardPageNumberForBundleId:(id)a0;
- (unsigned long long)getFirstVisiblePageIndex;
- (id)replacementBundleIdForSystemBundleId:(id)a0;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (long long)folderPageNumberForBundleId:(id)a0;
- (void)_reload;
- (id)allInstalledAppsKnownToSpringBoard;
- (unsigned long long)numberOfPages;
- (id)allDockedApps;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (unsigned long long)numberOfFolders;
- (id)nonFolderAppSetOnPages;
- (id)allAppsKnownToSpringBoard;
- (id)allFolderApps;
- (unsigned long long)numberOfApps;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (id)initWithHomeScreenConfigCache:(id)a0 sbsHomeScreenService:(id)a1;
- (id)springboardPageNumbersWithSuggestionsWidgets;

@end
