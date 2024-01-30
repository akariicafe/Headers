@class WGWidgetDiscoveryController, SBHSidebarWidgetBootstrappingAdvisor, NSString;

@interface SBWidgetController : NSObject <WGWidgetDiscoveryControllerDelegate, SBExtensionHandling, SBHSidebarWidgetLearningObserver, CSWidgetGroupViewControllerProviding>

@property (retain, nonatomic, getter=_widgetDiscoveryController) WGWidgetDiscoveryController *widgetDiscoveryController;
@property (readonly, nonatomic) SBHSidebarWidgetBootstrappingAdvisor *sidebarWidgetBootstrappingAdvisor;
@property (nonatomic) BOOL bootstrapFavoriteWidgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)widgetDiscoveryControllerShouldRespectFavorites:(id)a0;
- (void)_reloadWidgetPreferences;
- (void)_homescreenSidebarVisibilityDidChange:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)widgetDiscoveryController:(id)a0 didChangeWidgetsPinning:(BOOL)a1;
- (void)launchExtensionWithBundleID:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (BOOL)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)a0;
- (BOOL)_shouldUsePinnedWidgets;
- (BOOL)areWidgetsPinnedForWidgetDiscoveryController:(id)a0;
- (void)widgetDiscoveryController:(id)a0 requestUnlockWithCompletion:(id /* block */)a1;
- (BOOL)widgetDiscoveryController:(id)a0 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)a1;
- (id)newAvocadoWidgetListViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (void)widgetDiscoveryController:(id)a0 widgetWithBundleIdentifier:(id)a1 didEncounterProblematicSnapshotAtURL:(id)a2;
- (BOOL)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)a0;
- (void)removeWidgetIdentifiersFromToday:(id)a0;
- (void)widgetDiscoveryController:(id)a0 didEndUsingStatusBarAssertion:(id)a1;
- (id)statusBarAssertionForWidgetDiscoveryController:(id)a0 legibilityStyle:(long long)a1;
- (BOOL)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)a0;
- (id)widgetDiscoveryController:(id)a0 preferredViewControllerForPresentingFromViewController:(id)a1;
- (void)sidebarWidgetLearningAdvisorDidUpdate:(id)a0;
- (void)_updateFavoriteWidgetLearning;
- (BOOL)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)a0;
- (id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;
- (void)widgetDiscoveryController:(id)a0 updateStatusBarAssertion:(id)a1 withLegibilityStyle:(long long)a2;
- (BOOL)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)a0;
- (id)todayWidgetIdentifiers;
- (void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)a0;
- (id)newWidgetListViewControllerWithSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a0;

@end
