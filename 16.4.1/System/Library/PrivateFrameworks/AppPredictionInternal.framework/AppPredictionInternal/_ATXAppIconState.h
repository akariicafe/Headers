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

- (void)_reload;
- (id)initWithHomeScreenConfigCache:(id)a0 sbsHomeScreenService:(id)a1;
- (id)nonFolderAppSetOnPages;
- (id)allDockedApps;
- (unsigned long long)numberOfApps;
- (unsigned long long)getFirstVisiblePageIndex;
- (BOOL)appInFolderWithBundleId:(id)a0;
- (id)allFolderApps;
- (unsigned long long)numberOfFolders;
- (unsigned long long)numberOfPages;
- (id)allInstalledAppsKnownToSpringBoard;
- (id)allAppsKnownToSpringBoard;
- (BOOL)appOnDockWithBundleId:(id)a0;
- (id)springboardPageNumbersWithAppPredictionPanels;
- (id)init;
- (long long)folderPageNumberForBundleId:(id)a0;
- (long long)springboardPageNumberForBundleId:(id)a0;
- (long long)springboardPageLocationForBundleId:(id)a0;
- (void).cxx_destruct;
- (id)springboardPageNumbersWithSuggestionsWidgets;

@end
