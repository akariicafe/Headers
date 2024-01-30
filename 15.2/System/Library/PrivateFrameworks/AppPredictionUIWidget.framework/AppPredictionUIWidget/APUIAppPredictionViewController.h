@class NSMutableSet, NSString, NSSet, NSArray, APUIAppIconGridView, NSMutableDictionary, _UILegibilitySettings;
@protocol APUIAppPredictionViewControllerDelegate;

@interface APUIAppPredictionViewController : APUIWidgetViewController <ATXHomeScreenSuggestionClientObserver, APUIAppIconGridViewDelegate, SBIconViewQuerying, SBIconLocationPresenting, SBHWidgetContextMenuControlling, SBHLegibility, LSApplicationWorkspaceObserverProtocol> {
    APUIAppIconGridView *_gridView;
    NSMutableDictionary *_bundleIdSuggestionMap;
    NSMutableSet *_installingBundleIds;
    NSString *_selectedBundleId;
    NSString *_selectedAppLocalizedName;
    NSMutableSet *_usedFallbacks;
}

@property (nonatomic, getter=isShowingAlert) BOOL showingAlert;
@property (nonatomic) unsigned long long layoutSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } parentLayoutInsets;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isUserInteracting) BOOL userInteracting;
@property (weak, nonatomic) id<APUIAppPredictionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;

+ (id)_bundleIdentifierSetFromApplicationRecords:(id)a0;
+ (id)_bundleIdentifierSetFromApplicationProxies:(id)a0;

- (void)applicationsDidUninstall:(id)a0;
- (void)applicationsDidInstall:(id)a0;
- (id)firstIconViewForIcon:(id)a0 inLocations:(id)a1;
- (void)viewDidLoad;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)a0;
- (void)viewDidLayoutSubviews;
- (id)iconViewForIcon:(id)a0 location:(id)a1;
- (void)applicationInstallsDidStart:(id)a0;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (void)enumerateDisplayedIconViewsForIcon:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)_canShowWhileLocked;
- (id)firstIconViewForIcon:(id)a0;
- (BOOL)isDisplayingIconView:(id)a0;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void).cxx_destruct;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (void)didSelectApplicationShortcutItem:(id)a0;
- (id)firstIconViewForIcon:(id)a0 excludingLocations:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0 inLocations:(id)a1;
- (void)dealloc;
- (BOOL)isDisplayingIcon:(id)a0;
- (BOOL)isPresentingIconLocation:(id)a0;
- (void)applicationInstallsDidUpdateIcon:(id)a0;
- (void)suggestionClientDidRefreshProactiveWidgetLayouts:(id)a0;
- (id)initWithIdentifier:(id)a0 layoutSize:(unsigned long long)a1 mode:(unsigned long long)a2;
- (void)_loadAppsInGridView:(id)a0;
- (id)_fallbackBundleIds;
- (void)_updateUserInteractingState;
- (BOOL)_canDismissSelectedSuggestion;
- (void)_updateGridViewForBundleIds:(id)a0;
- (BOOL)appIconGridView:(id)a0 shouldDisplayBadgeWithBundleIdentifier:(id)a1;
- (BOOL)appIconGridView:(id)a0 launchAppFromIcon:(id)a1;
- (id)appIconGridView:(id)a0 iconForApplicationWithBundleIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 layoutSize:(unsigned long long)a1;
- (BOOL)matchesWidgetUniqueID:(id)a0 stackID:(id)a1;

@end
