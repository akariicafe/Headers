@class _ATXDataStore, NSMutableArray;

@interface _ATXAppInfoManager : NSObject <ATXBundleIdRemovableProtocol> {
    _ATXDataStore *_dataStore;
    NSMutableArray *_installDeltaLog;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwlock;
}

+ (id)sharedInstance;
+ (id)sortArrayAndComputeMedian:(id)a0;

- (id)totalSlotsInDatastore;
- (id)allApps;
- (long long)launchedAppCount;
- (void)train;
- (void)computeAverageAndMedianSecondsBetweenAppActionsWithDuetHelper:(id)a0;
- (void)addLaunchForBundleId:(id)a0 date:(id)a1;
- (void)addLaunchForAppAction:(id)a0 date:(id)a1;
- (void)removeBundleIds:(id)a0;
- (void)handleAppUninstallWithUninstalledAppSet:(id)a0;
- (void)addMedianSecondsBetweenLaunchesForBundleId:(id)a0 median:(id)a1;
- (void)removeAppInfoForBundleIds:(id)a0;
- (id)lastAppActionLaunchDateForActionKey:(id)a0;
- (id)subGenreIdsForBundleId:(id)a0;
- (id)app2VecClusterForBundleId:(id)a0;
- (void)computeAverageAndMedianSecondsBetweenAppLaunchesWithDuetHelper:(id)a0;
- (void)addAverageSecondsBetweenLaunchesForBundleId:(id)a0 average:(id)a1;
- (id)initWithInMemoryStore;
- (void)removeActionDataForBundleId:(id)a0;
- (id)lastLaunchDateForBundleId:(id)a0;
- (id)medianSecondsBetweenLaunchesForBundleId:(id)a0;
- (id)lastAppActionLaunchDate;
- (void)computeAverageAndMedianSecondsBetweenAppLaunches;
- (void)updateGenreIdsForBundleId:(id)a0 genreId:(id)a1 subGenreIds:(id)a2;
- (void)addSpotlightLaunchForBundleId:(id)a0 date:(id)a1;
- (id)appInfoForBundleId:(id)a0;
- (id)secondMostRecentAppLaunch;
- (id)allAppsLaunchedOrInstalledWithin30Days;
- (void)addInstallForBundleInfoMap:(id)a0;
- (void)addInstallForBundleId:(id)a0 date:(id)a1;
- (void)addExtensionLaunchForBundleId:(id)a0 date:(id)a1;
- (id)genreIdForBundleId:(id)a0;
- (void)computeAverageAndMedianSecondsBetweenAppActions;
- (id)allAppsWithInstallDate;
- (id)allActionKeys;
- (id)initWithDataStore:(id)a0;
- (void)updateGenreIdsForAllApps;
- (void)removeAppInfoForBundleId:(id)a0;
- (void)dealloc;
- (id)medianSecondsBetweenAppActionsForActionKey:(id)a0;
- (void)removeAppLaunchesForBundleId:(id)a0;
- (void)removeUninstalledApps;
- (void)clearAppLaunchInfo;
- (void)addMedianSecondsBetweenAppActionsForActionKey:(id)a0 median:(id)a1;
- (void)clearAppInstallInfo;
- (void)updateApp2VecClusterForBundleId:(id)a0 app2VecCluster:(id)a1;
- (void)addScreenLockAtDate:(id)a0;
- (id)lastAppActionLaunch;
- (id)lastUnlockDate;
- (void)handleAppInstallWithInstallDict:(id)a0;
- (id)averageSecondsBetweenLaunchesForBundleId:(id)a0;
- (id)averageSecondsBetweenAppActionsForActionKey:(id)a0;
- (id)init;
- (id)genreIdsForBundleId:(id)a0;
- (id)lastAppLaunch;
- (id)_appInfoNoLockForBundleId:(id)a0;
- (void)updateApp2VecClustersForAllApps;
- (void)startInstallDeltaRecording;
- (id)stopInstallDeltaRecording;
- (void)addAverageSecondsBetweenAppActionsForActionKey:(id)a0 average:(id)a1;
- (void).cxx_destruct;
- (id)lastAppLaunchDate;

@end
