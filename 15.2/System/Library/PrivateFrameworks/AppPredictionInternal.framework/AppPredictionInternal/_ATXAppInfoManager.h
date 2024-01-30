@class _ATXDataStore, NSMutableArray;

@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol> {
    _ATXDataStore *_dataStore;
    NSMutableArray *_installDeltaLog;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)a0;

- (void)removeActionDataForBundleId:(id)a0;
- (id)allApps;
- (void)clearAppLaunchInfo;
- (id)allAppsWithInstallDate;
- (void)clearAppInstallInfo;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (id)initWithInMemoryStore;
- (void)removeBundleIds:(id)a0;
- (id)lastAppLaunch;
- (void)addLaunchForAppAction:(id)a0 date:(id)a1;
- (id)lastAppLaunchDate;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)a0 median:(id)a1;
- (id)initWithDataStore:(id)a0;
- (id)secondMostRecentAppLaunch;
- (id)lastUnlockDate;
- (id)genreIdForBundleId:(id)a0;
- (void)updateGenreIdsForBundleId:(id)a0 genreId:(id)a1 subGenreIds:(id)a2;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (void)addScreenLockAtDate:(id)a0;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)a0;
- (void)train;
- (id)appInfoForBundleId:(id)a0;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)a0 median:(id)a1;
- (id)genreIdsForBundleId:(id)a0;
- (void)updateApp2VecClusterForBundleId:(id)a0 app2VecCluster:(id)a1;
- (void)removeAppLaunchesForBundleId:(id)a0;
- (id)app2VecClusterForBundleId:(id)a0;
- (id)lastLaunchDateForBundleId:(id)a0;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)a0;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)a0 average:(id)a1;
- (long long)launchedAppCount;
- (id)lastAppActionLaunchDateForActionKey:(id)a0;
- (void)removeAppInfoForBundleId:(id)a0;
- (void).cxx_destruct;
- (void)updateGenreIdsForAllApps;
- (void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)a0;
- (void)removeUninstalledApps;
- (id)init;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)a0;
- (id)totalSlotsInDatastore;
- (id)subGenreIdsForBundleId:(id)a0;
- (void)addInstallForBundleId:(id)a0 date:(id)a1;
- (void)handleAppInstallWithInstallDict:(id)a0;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)a0 average:(id)a1;
- (void)addSpotlightLaunchForBundleId:(id)a0 date:(id)a1;
- (id)stopInstallDeltaRecording;
- (id)lastAppActionLaunchDate;
- (id)_appInfoNoLockForBundleId:(id)a0;
- (void)dealloc;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)handleAppUninstallWithUninstalledAppSet:(id)a0;
- (void)addInstallForBundleInfoMap:(id)a0;
- (id)allActionKeys;
- (void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)a0;
- (id)lastAppActionLaunch;
- (void)startInstallDeltaRecording;
- (void)updateApp2VecClustersForAllApps;
- (void)addExtensionLaunchForBundleId:(id)a0 date:(id)a1;
- (void)removeAppInfoForBundleIds:(id)a0;

@end
