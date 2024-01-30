@class NSArray, _ATXInternalInstallNotification, _ATXInternalUninstallNotification, NSDictionary, SBSHomeScreenService, NSObject, ATXHomeScreenConfigCache, NSMutableIndexSet, _PASSimpleCoalescingTimer;
@protocol OS_dispatch_queue;

@interface _ATXAppIconState : NSObject {
    _ATXInternalInstallNotification *_installNotification;
    _ATXInternalUninstallNotification *_uninstallNotification;
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

- (BOOL)appInFolderWithBundleId:(id)a0;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (unsigned long long)numberOfFolders;
- (id)allAppsKnownToSpringBoard;
- (id)allDockedApps;
- (id)springboardPageNumbersWithSuggestionsWidgets;
- (id)allInstalledAppsKnownToSpringBoard;
- (long long)folderPageNumberForBundleId:(id)a0;
- (unsigned long long)numberOfApps;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (void)_reload;
- (void).cxx_destruct;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (id)init;
- (id)nonFolderAppSetOnPages;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (id)initWithHomeScreenConfigCache:(id)a0 sbsHomeScreenService:(id)a1;
- (unsigned long long)getFirstVisiblePageIndex;
- (id)allFolderApps;
- (unsigned long long)numberOfPages;

@end
