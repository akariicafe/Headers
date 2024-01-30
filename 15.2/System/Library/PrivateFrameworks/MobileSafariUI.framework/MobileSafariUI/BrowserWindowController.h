@class _SFBrowserSavedState, NSArray, NSString, NSMapTable, _SFPerSitePreferencesVendor, _SFPageZoomPreferenceManager, CloudTabStore;
@protocol WBStateProvider;

@interface BrowserWindowController : NSObject <CloudTabStoreDelegate, _SFNavigationIntentHandling> {
    id /* block */ _browserControllerUIDelegateProvider;
    NSMapTable *_UIDelegatesByBrowserController;
    BOOL _cloudTabStoreNeedsPeriodicUpdates;
    BOOL _consideredMergingCloudTabsForDeviceRestoration;
    _SFBrowserSavedState *_savedState;
    id /* block */ _automationWindowInitializedCompletionHandler;
    _SFPageZoomPreferenceManager *_privateBrowsingPageZoomManager;
}

@property (nonatomic) BOOL cloudTabsEnabled;
@property (readonly, copy, nonatomic) NSArray *browserControllers;
@property (readonly, nonatomic) id<WBStateProvider> stateProvider;
@property (readonly, nonatomic) _SFPerSitePreferencesVendor *perSitePreferencesVendor;
@property (readonly, nonatomic) _SFPageZoomPreferenceManager *privateBrowsingPageZoomManager;
@property (readonly, nonatomic) CloudTabStore *cloudTabStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_printWindowToSceneMapping;

- (void)dispatchNavigationIntent:(id)a0;
- (void)saveCloudTabsUsingCloudTabStore:(id)a0;
- (void)handleNavigationIntent:(id)a0 completion:(id /* block */)a1;
- (void)mergeAllWindowsIntoWindow:(id)a0;
- (void)updateCloudTabStorePeriodicUpdates;
- (void)restoreEducationDeviceTabs;
- (void)_cloudTabFeatureAvailabilityDidChange:(id)a0;
- (id)_browserWindowsToPersist;
- (void)_windowDidClose:(id)a0;
- (void)_restoreWindowsWithState:(id)a0 shouldMergeAllWindowsIfNeeded:(BOOL)a1;
- (void)cloudTabStoreDidGetCachedDevicesFromCloudKit:(id)a0;
- (id)_printWindowToSceneMapping;
- (void)updateCloudTabUpdatesEnabled;
- (void)updateCloudTabsForEnteringBackground;
- (long long)modeForNewWindowUserActivity:(id)a0;
- (void)cloudTabStore:(id)a0 didUpdateDevicesFromCloudKitWithError:(id)a1;
- (id)tabsInPrivateBrowsing:(BOOL)a0;
- (void)tearDownAutomationWindow;
- (BOOL)_needsCloudTabPeriodicUpdates;
- (id)initWithBrowserSavedState:(id)a0 perSitePreferencesVendor:(id)a1 browserControllerUIDelegateProvider:(id /* block */)a2;
- (void)cloudTabStore:(id)a0 cloudTabsEnabledDidChange:(BOOL)a1;
- (id)_sceneIDToLocalGroupTabs;
- (void)handlePendingCloseTabRequests;
- (void)updateCloudTabsForEnteringForeground;
- (void)_mergeTabsFromCloudTabsForDeviceRestoration:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)numberOfTabsInPrivateBrowsing:(BOOL)a0;
- (void)setUpAutomationWindowWithCompletionHandler:(id /* block */)a0;
- (id)tabsOlderThan:(id)a0 inPrivateBrowsing:(BOOL)a1;
- (id)initWithBrowserSavedState:(id)a0;
- (id)windowForSceneID:(id)a0 options:(id)a1;
- (id)_mergeWindowStates:(id)a0 intoWindowState:(id)a1;
- (void)_destroyCloudTabsStore;
- (void)removeWindowsNotMatchingSceneIDs:(id)a0;
- (void)_mergeTabsFromCloudTabsForDeviceRestorationIfNeededAfterCloudTabsFinishedSyncing:(BOOL)a0;
- (void)cloudTabStore:(id)a0 didReceiveTabCloseRequest:(id)a1;
- (id)uiDelegateForBrowserController:(id)a0;
- (id)_allNormalLocalTabDocuments;
- (id)initWithStateProvider:(id)a0;
- (id)browserControllerWithUUID:(id)a0;
- (void)_saveBrowserStateWithQuickUpdate:(BOOL)a0;
- (id)initWithStateProvider:(id)a0 perSitePreferencesVendor:(id)a1 shouldMergeAllWindowsIfNeeded:(BOOL)a2 browserControllerUIDelegateProvider:(id /* block */)a3;
- (void)openNewWindowWithPrivateBrowsingEnabled:(BOOL)a0 fromWindow:(id)a1;
- (id)oldestTabsWithLimit:(unsigned long long)a0 inPrivateBrowsing:(BOOL)a1;
- (void)_createCloudTabsStore;
- (void)saveCloudTabs;
- (void)dealloc;
- (void)saveBrowserState;
- (id)_mergeAndSaveWindowStates:(id)a0 intoWindowState:(id)a1;
- (void)restoreEducationDeviceCloudTabs:(id)a0 animated:(BOOL)a1;
- (id)_newAutomationWindowWithSceneID:(id)a0;
- (void)_restoreWindowsFromBrowserSavedState:(id)a0;

@end
