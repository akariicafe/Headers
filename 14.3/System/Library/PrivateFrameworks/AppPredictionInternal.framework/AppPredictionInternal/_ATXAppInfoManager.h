@class _ATXInternalInstallNotification, _ATXDataStore, _ATXInternalUninstallNotification, NSMutableArray;

@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol> {
    _ATXDataStore *_dataStore;
    NSMutableArray *_installDeltaLog;
    _ATXInternalInstallNotification *_installNotificationListener;
    _ATXInternalUninstallNotification *_uninstallNotificationListener;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)a0;

- (id)initWithDataStore:(id)a0;
- (id)secondMostRecentAppLaunch;
- (id)allAppsWithInstallDate;
- (void)removeBundleIds:(id)a0;
- (id)init;
- (void)removeActionDataForBundleId:(id)a0;
- (id)_appInfoNoLockForBundleId:(id)a0;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)a0;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (void).cxx_destruct;
- (id)subGenreIdsForBundleId:(id)a0;
- (void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)a0;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)a0 median:(id)a1;
- (void)startInstallDeltaRecording;
- (void)dealloc;
- (id)initWithInMemoryStore;
- (id)lastAppLaunch;
- (void)clearAppInstallInfo;
- (id)lastUnlockDate;
- (void)clearAppLaunchInfo;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)a0 average:(id)a1;
- (void)addLaunchForAppAction:(id)a0 date:(id)a1;
- (void)addExtensionLaunchForBundleId:(id)a0 date:(id)a1;
- (long long)launchedAppCount;
- (id)lastAppLaunchDate;
- (id)app2VecClusterForBundleId:(id)a0;
- (id)stopInstallDeltaRecording;
- (void)addInstallForBundleInfoMap:(id)a0;
- (void)updateApp2VecClusterForBundleId:(id)a0 app2VecCluster:(id)a1;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)removeAppLaunchesForBundleId:(id)a0;
- (void)addInstallForBundleId:(id)a0 date:(id)a1;
- (void)addSpotlightLaunchForBundleId:(id)a0 date:(id)a1;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)a0 average:(id)a1;
- (void)train;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)allApps;
- (void)removeAppInfoForBundleIds:(id)a0;
- (void)removeUninstalledApps;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)a0;
- (id)lastAppActionLaunch;
- (void)removeAppInfoForBundleId:(id)a0;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (id)totalSlotsInDatastore;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)a0 median:(id)a1;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)a0;
- (id)allActionKeys;
- (id)lastAppActionLaunchDateForActionKey:(id)a0;
- (id)genreIdsForBundleId:(id)a0;
- (void)addScreenLockAtDate:(id)a0;
- (id)lastAppActionLaunchDate;
- (void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)a0;
- (id)lastLaunchDateForBundleId:(id)a0;
- (void)updateGenreIdsForBundleId:(id)a0 genreId:(id)a1 subGenreIds:(id)a2;
- (void)updateGenreIdsForAllApps;
- (void)updateApp2VecClustersForAllApps;
- (id)appInfoForBundleId:(id)a0;
- (id)genreIdForBundleId:(id)a0;

@end
