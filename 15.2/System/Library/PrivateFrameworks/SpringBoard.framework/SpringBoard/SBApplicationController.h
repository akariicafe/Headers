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
+ (void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)a0;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)a0;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)a0;
+ (id)sharedInstanceIfExists;

- (id)applicationWithBundleIdentifier:(id)a0;
- (id)allBundleIdentifiers;
- (void)applicationRestrictionsMayHaveChanged;
- (id)dataActivationApplication;
- (void)_loadApplications:(id)a0 remove:(id)a1;
- (void)applicationsUpdated:(id)a0;
- (void)uninstallApplication:(id)a0;
- (id)mapsApplication;
- (id)_splashBoardController;
- (id)allApplications;
- (id)_appLibrary;
- (id)cameraApplication;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (id)iPodOutApplication;
- (id)webApplication;
- (void)_memoryWarningReceived;
- (id)inCallServiceApp;
- (id)runningApplications;
- (void)applicationVisibilityMayHaveChanged;
- (id)_lock_applicationWithBundleIdentifier:(id)a0;
- (void)_sendInstalledAppsDidChangeNotification:(id)a0 removed:(id)a1 replaced:(id)a2 updated:(id)a3;
- (void)_updateVisibilityOverridesInBackground;
- (id)recentlyUsedBundleIDs;
- (void)applicationsDemoted:(id)a0;
- (id)splashBoardSystemApplications;
- (id)_loadApplicationFromApplicationInfo:(id)a0;
- (id)faceTimeApp;
- (id)_appInfosToBundleIDs:(id)a0;
- (void).cxx_destruct;
- (void)applicationsReplaced:(id)a0;
- (id)init;
- (void)_updateVisibilityOverrides;
- (id)_allApplicationsFilteredBySystem:(BOOL)a0;
- (id)musicApplication;
- (void)applicationsAdded:(id)a0;
- (id)clockApplication;
- (id)allSplashBoardApplications;
- (id)restrictionController;
- (id)applicationWithPid:(int)a0;
- (id)testFlightApplication;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)requestUninstallApplication:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)dealloc;
- (id)allInstalledApplications;
- (id)_appLibraryObserver;
- (id)mobilePhone;
- (id)notesApplication;
- (void)_preLoadApplications;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)a0 forInstall:(BOOL)a1 withReason:(id)a2;
- (id)loginApplication;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)waitForUninstallsToComplete:(double)a0;
- (id)setupApplication;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (Class)_appClassForInfo:(id)a0;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (void)applicationsRemoved:(id)a0;

@end
