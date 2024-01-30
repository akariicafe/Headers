@class NSString, NSSet, NSMutableDictionary, SBReverseCountedSemaphore, SBApplicationInfo, SBApplicationRestrictionController, SBSplashBoardController, FBSApplicationLibrary, SBApplicationLibraryObserver;

@interface SBApplicationController : NSObject <SBApplicationRestrictionDataSource, BKSTerminationAssertionObserver, XBApplicationProviding, SBApplicationLifecycleObserver> {
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
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)_setClearSystemAppSnapshotsWhenLoaded:(BOOL)a0;
+ (id)_sharedInstanceCreateIfNecessary:(BOOL)a0;
+ (id)sharedInstanceIfExists;
+ (void)_setClearAllLegacySnapshotsWhenLoaded:(BOOL)a0;

- (id)cameraApplication;
- (void)waitForUninstallsToComplete;
- (id)applicationWithPid:(int)a0;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushSystemSnapshots;
- (id)init;
- (id)allSplashBoardApplications;
- (id)runningApplications;
- (id)spotlightApplication;
- (void).cxx_destruct;
- (void)_removeApplicationsFromModelWithBundleIdentifier:(id)a0 forInstall:(BOOL)a1 withReason:(id)a2;
- (id)_splashBoardController;
- (void)applicationsRemoved:(id)a0;
- (id)clockApplication;
- (id)allInstalledApplications;
- (id)testFlightApplication;
- (void)dealloc;
- (void)_updateVisibilityOverrides;
- (id)_appLibraryObserver;
- (id)loginApplication;
- (void)_finishDeferredMajorVersionMigrationTasks_FlushLegacySnapshots;
- (id)allBundleIdentifiers;
- (id)iPodOutApplication;
- (id)mapsApplication;
- (id)musicApplication;
- (id)splashBoardSystemApplications;
- (id)bundleIdentifiersWithVisibilityOverrideHidden;
- (void)applicationsDemoted:(id)a0;
- (id)dataActivationApplication;
- (Class)_appClassForInfo:(id)a0;
- (void)requestUninstallApplicationWithBundleIdentifier:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)restrictionController;
- (id)faceTimeApp;
- (void)applicationsUpdated:(id)a0;
- (id)mobilePhone;
- (void)_updateVisibilityOverridesInBackground;
- (id)_loadApplicationFromApplicationInfo:(id)a0;
- (id)alwaysAvailableApplicationBundleIdentifiers;
- (id)setupApplication;
- (void)applicationVisibilityMayHaveChanged;
- (id)inCallServiceApp;
- (id)applicationWithBundleIdentifier:(id)a0;
- (void)applicationsReplaced:(id)a0;
- (void)uninstallApplication:(id)a0;
- (void)noteTerminationAssertionEfficacyChangedTo:(unsigned long long)a0 forBundleIdentifier:(id)a1;
- (id)notesApplication;
- (id)_allApplicationsFilteredBySystem:(BOOL)a0;
- (void)_memoryWarningReceived;
- (void)_sendInstalledAppsDidChangeNotification:(id)a0 removed:(id)a1 replaced:(id)a2 updated:(id)a3;
- (void)applicationsAdded:(id)a0;
- (id)allApplications;
- (void)applicationRestrictionsMayHaveChanged;
- (id)_appInfosToBundleIDs:(id)a0;
- (void)_loadApplications:(id)a0 remove:(id)a1;
- (id)_lock_applicationWithBundleIdentifier:(id)a0;
- (void)_preLoadApplications;
- (void)requestUninstallApplication:(id)a0 options:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (id)_appLibrary;
- (id)webApplication;

@end
