@class WGWidgetDiscoveryController, NSString;

@interface SBWidgetController : NSObject <WGWidgetDiscoveryControllerDelegate, SBExtensionHandling, CSWidgetGroupViewControllerProviding>

@property (retain, nonatomic, getter=_widgetDiscoveryController) WGWidgetDiscoveryController *widgetDiscoveryController;
@property (nonatomic) BOOL bootstrapFavoriteWidgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)a0;
- (id)todayWidgetIdentifiers;
- (void)_reloadWidgetPreferences;
- (void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)a0;
- (BOOL)widgetDiscoveryControllerShouldRespectFavorites:(id)a0;
- (BOOL)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)a0;
- (void)widgetDiscoveryController:(id)a0 didEndUsingStatusBarAssertion:(id)a1;
- (id)statusBarAssertionForWidgetDiscoveryController:(id)a0 legibilityStyle:(long long)a1;
- (void)removeWidgetIdentifiersFromToday:(id)a0;
- (BOOL)widgetDiscoveryController:(id)a0 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)a1;
- (void)widgetDiscoveryController:(id)a0 didChangeWidgetsPinning:(BOOL)a1;
- (BOOL)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)a0;
- (BOOL)_shouldUsePinnedWidgets;
- (BOOL)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)a0;
- (id)newWidgetListViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (void)launchExtensionWithBundleID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)widgetDiscoveryController:(id)a0 requestUnlockWithCompletion:(id /* block */)a1;
- (BOOL)areWidgetsPinnedForWidgetDiscoveryController:(id)a0;
- (id)init;
- (BOOL)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)a0;
- (id)newAvocadoWidgetListViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (void)widgetDiscoveryController:(id)a0 widgetWithBundleIdentifier:(id)a1 didEncounterProblematicSnapshotAtURL:(id)a2;
- (void).cxx_destruct;
- (id)widgetDiscoveryController:(id)a0 preferredViewControllerForPresentingFromViewController:(id)a1;
- (void)widgetDiscoveryController:(id)a0 updateStatusBarAssertion:(id)a1 withLegibilityStyle:(long long)a2;
- (id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;

@end
