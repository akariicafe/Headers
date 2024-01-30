@class NSString, NSArray, _UILegibilitySettings, NSSet, NSMutableDictionary, ATXHomeScreenSuggestionClient, APUIAppIconGridView, NSMutableSet, ATXHomeScreenWidgetIdentifiable, ATXSuggestionLayout, NSMutableOrderedSet;
@protocol APUIAppPredictionViewControllerDelegate;

@interface APUIAppPredictionViewController : UIViewController <ATXHomeScreenSuggestionClientObserver, APUIAppIconGridViewDelegate, SBIconViewQuerying, SBIconLocationPresenting, SBHWidgetContextMenuControlling, SBHLegibility, LSApplicationWorkspaceObserverProtocol> {
    ATXHomeScreenWidgetIdentifiable *_widgetIdentifiable;
    APUIAppIconGridView *_gridView;
    NSMutableDictionary *_bundleIdSuggestionMap;
    NSMutableSet *_installingBundleIds;
    ATXSuggestionLayout *_layout;
    NSString *_selectedBundleId;
    NSString *_selectedAppLocalizedName;
    ATXHomeScreenSuggestionClient *_suggestionClient;
    NSMutableOrderedSet *_suggestionIds;
    NSString *_identifier;
}

@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (nonatomic) BOOL stackVisible;
@property (readonly, nonatomic) BOOL effectiveViewVisibility;
@property (nonatomic) unsigned long long layoutSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } parentLayoutInsets;
@property (nonatomic) unsigned long long mode;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (weak, nonatomic) id<APUIAppPredictionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *presentedIconLocations;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;

+ (id)imageForIconSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)previewIdentifierWithIdentifier:(id)a0 layoutSize:(unsigned long long)a1;
+ (id)_bundleIdentifierSetFromApplicationProxies:(id)a0;

- (BOOL)isPresentingIconLocation:(id)a0;
- (void)enumerateDisplayedIconViewsForIcon:(id)a0 usingBlock:(id /* block */)a1;
- (id)firstIconViewForIcon:(id)a0 excludingLocations:(id)a1;
- (BOOL)isDisplayingIconView:(id)a0 inLocation:(id)a1;
- (BOOL)isDisplayingIcon:(id)a0;
- (id)iconViewForIcon:(id)a0 location:(id)a1;
- (void)didSelectApplicationShortcutItem:(id)a0;
- (id)firstIconViewForIcon:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDisplayingIcon:(id)a0 inLocation:(id)a1;
- (id)firstIconViewForIcon:(id)a0 inLocations:(id)a1;
- (BOOL)isDisplayingIconView:(id)a0;
- (BOOL)isDisplayingIcon:(id)a0 inLocations:(id)a1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* block */)a0;
- (void)applicationInstallsDidUpdateIcon:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)suggestionClientDidRefreshSuggestions:(id)a0;
- (void)applicationInstallsDidStart:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)applicationsDidInstall:(id)a0;
- (void)viewDidLoad;
- (void)suggestionClientDidRefreshSuggestionsForSuggestionsWidget:(id)a0;
- (id)initWithIdentifier:(id)a0 layoutSize:(unsigned long long)a1 mode:(unsigned long long)a2;
- (void)_topWidgetDidAppear:(id)a0;
- (void)_topWidgetDidDisappear:(id)a0;
- (void)_loadAppsInGridView:(id)a0;
- (void)_updateViewVisibility;
- (id)_fallbackBundleIds;
- (void)logChangeWithNewSuggestionIds:(id)a0 previousSuggestionIds:(id)a1 suggestionClient:(id)a2;
- (BOOL)_canDismissSelectedSuggestion;
- (void)_updateGridViewForBundleIds:(id)a0;
- (BOOL)appIconGridView:(id)a0 shouldDisplayBadgeWithBundleIdentifier:(id)a1;
- (BOOL)appIconGridView:(id)a0 launchAppFromIcon:(id)a1;
- (id)appIconGridView:(id)a0 iconForApplicationWithBundleIdentifier:(id)a1;
- (id)initWithIdentifier:(id)a0 layoutSize:(unsigned long long)a1;

@end
