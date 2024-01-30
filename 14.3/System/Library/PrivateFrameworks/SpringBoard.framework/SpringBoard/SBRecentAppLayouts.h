@class NSString, SBAppSwitcherDefaults, NSMutableDictionary, NSDictionary, SBApplicationController, SBIconController, NSMutableArray, SBApplicationPlaceholderController, SBMainDisplaySceneManager, SBRecentAppLayoutsPersister;
@protocol SBRecentAppLayoutsDelegate, BSInvalidatable;

@interface SBRecentAppLayouts : NSObject <SBApplicationRestrictionObserver> {
    NSMutableArray *_allRecents;
    NSMutableArray *_unhiddenRecents;
    NSDictionary *_allRecentsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentsForBundleIdentifiers;
    NSDictionary *_allRecentDisplayItemsForBundleIdentifiers;
    NSDictionary *_unhiddenRecentDisplayItemsForBundleIdentifiers;
    NSMutableDictionary *_allowHiddenAppAssertions;
    SBAppSwitcherDefaults *_defaults;
    SBIconController *_iconController;
    SBApplicationController *_applicationController;
    SBApplicationPlaceholderController *_placeholderController;
    SBMainDisplaySceneManager *_sceneManager;
    SBRecentAppLayoutsPersister *_persister;
    id<BSInvalidatable> _stateCaptureInvalidatable;
}

@property (weak, nonatomic) id<SBRecentAppLayoutsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remove:(id)a0;
- (id)_ppt_loadStashedModel;
- (id)init;
- (void)_addAllowHiddenAppAssertionForBundleIdentifier:(id)a0 requestIdentifier:(id)a1;
- (BOOL)_loadStashedModelAtPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDisplayItemRestrictedOrUnsupported:(id)a0;
- (id)recentDisplayItemsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (void)addToFront:(id)a0;
- (void)_installedApplicationsDidChange:(id)a0;
- (void)hide:(id)a0;
- (void)_initializeRecents;
- (id)_ppt_currentModel;
- (BOOL)_isExistingSceneIdentifierValidForClaimedMultiwindowSupportInDisplayItem:(id)a0;
- (id)recentsIncludingHiddenAppLayouts:(BOOL)a0;
- (void)dealloc;
- (id)_legacyAppLayoutForItem:(id)a0 layoutRole:(long long)a1;
- (id)_changeDescriptionForFilteringAppLayouts:(id)a0 withDisplayItemTest:(id /* block */)a1;
- (void)_setUpStashedModelSettingsOutlets;
- (id)_legacyAppLayoutsForDisplayItems:(id)a0 layoutRolesMapping:(id)a1;
- (id)_displayItemLayoutRolesFromLegacyPrefsForLoadedDisplayItems:(id)a0;
- (id)initWithUserDefaults:(id)a0 persister:(id)a1 iconController:(id)a2 applicationController:(id)a3 placeholderController:(id)a4 sceneManager:(id)a5;
- (id)_recentDisplayItemsFromLegacyPrefs;
- (void)_setRecents:(id)a0 notifyForChangeDescription:(id)a1;
- (id)recentsForBundleIdentifier:(id)a0 includingHiddenAppLayouts:(BOOL)a1;
- (BOOL)_ignoresAppHiddenForDisplayItem:(id)a0;
- (void)_persistSoon;
- (void)_filterRestrictedOrUnsupportedAppsFromRecents;
- (void)_persistSynchronously;
- (void)_addAllAppsToModel;
- (void)_filterRestrictedUnsupportedAndInvalidAppsFromRecents;
- (void)_saveRecents;
- (BOOL)_stashModelToPath:(id)a0;
- (void)_removeAllowHiddenAppAssertionForBundleIdentifier:(id)a0 requestIdentifier:(id)a1;
- (void)removeAppLayouts:(id)a0;
- (id)_migrateDisplayItemIfNeeded:(id)a0;
- (void)_validateAndUpdateRecents:(id)a0;
- (id)_changeDescriptionForFilteringRestrictedUnsupportedAndInvalidAppsFromAppLayouts:(id)a0;
- (id)_changeDescriptionForFilteringRestrictedOrUnsupportedAppsFromAppLayouts:(id)a0;
- (id)_recentsFromPrefs;
- (id)_acquireAllowHiddenAppAssertionForBundleIdentifier:(id)a0 reason:(id)a1;
- (void)applicationRestrictionController:(id)a0 didUpdateVisibleTags:(id)a1 hiddenTags:(id)a2;
- (void)_ppt_setModel:(id)a0;
- (void)_iconVisibilityDidChange:(id)a0;
- (BOOL)_isApplicationSupported:(id)a0;
- (void)replaceAppLayout:(id)a0 withAppLayout:(id)a1;

@end
