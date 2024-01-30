@class NSString, NSSet, NSMutableDictionary, SBReverseCountedSemaphore, SBApplicationInfo, SBApplicationRestrictionController, RBSProcessMonitor, SBSplashBoardController, FBSApplicationLibrary, SBApplicationLibraryObserver;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, XBApplicationProviding, SBApplicationLifecycleObserver> {
    NSMutableDictionary *_applicationsByBundleIdentifer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _applicationsLock;
    NSMutableDictionary *_systemAppsVisibilityOverrides;
    NSSet *_cachedSystemAppsWithVisibilityOverrideHidden;
    SBApplicationRestrictionController *_restrictionController;
    SBApplicationLibraryObserver *_appLibraryObserver;
    FBSApplicationLibrary *_appLibrary;
    SBApplicationInfo *_systemAppInfo;
    SBSplashBoardController *_splashBoardController;
    SBReverseCountedSemaphore *_uninstallationReverseSemaphore;
    NSSet *_preventLaunchBundleIDs;
    RBSProcessMonitor *_processMonitor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)a0;
+ (void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)a0;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (id)applicationWithBundleIdentifier:(id)a0;
- (id)cameraApplication;
- (id)allBundleIdentifiers;
- (id)applicationWithPid:(int)a0;
- (id)webApplication;
- (id)testFlightApplication;
- (id)_appLibraryObserver;
- (void)_loadApplications:(id)a0 remove:(id)a1;
- (void)_updateVisibilityOverrides;
- (id)_loadApplicationFromApplicationInfo:(id)a0;
- (void)requestUninstallApplication:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)_memoryWarningReceived;
- (void)_updateVisibilityOverridesInBackground;
- (id)splashBoardSystemApplications;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)mapsApplication;
- (id)faceTimeApp;
- (id)runningApplications;
- (id)allSplashBoardApplications;
- (id)clockApplication;
- (id)setupApplication;
- (id)mobilePhone;
- (void)applicationsAdded:(id)a0;
- (void)waitForUninstallsToComplete:(double)a0;
- (void)_preLoadApplications;
- (id)applicationForDisplayItem:(id)a0;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)a0 forInstall:(BOOL)a1 withReason:(id)a2;
- (id)_splashBoardController;
- (void)dealloc;
- (id)restrictionController;
- (void)_sendInstalledAppsDidChangeNotification:(id)a0 removed:(id)a1 replaced:(id)a2 updated:(id)a3;
- (Class)_appClassForInfo:(id)a0;
- (id)dataActivationApplication;
- (id)_appInfosToBundleIDs:(id)a0;
- (id)_appLibrary;
- (BOOL)_appLayoutContainsOnlyResizableApps:(id)a0;
- (id)_lock_applicationWithBundleIdentifier:(id)a0;
- (id)allApplications;
- (void)applicationsReplaced:(id)a0;
- (id)notesApplication;
- (id)musicApplication;
- (void)applicationsRemoved:(id)a0;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (id)allInstalledApplications;
- (id)inCallServiceApp;
- (void)applicationRestrictionsMayHaveChanged;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (id)init;
- (id)iPodOutApplication;
- (void)applicationsDemoted:(id)a0;
- (void)applicationsUpdated:(id)a0;
- (void).cxx_destruct;
- (id)_allApplicationsFilteredBySystem:(BOOL)a0;
- (void)applicationVisibilityMayHaveChanged;
- (id)recentlyUsedBundleIDs;
- (id)loginApplication;
- (void)uninstallApplication:(id)a0;

@end
