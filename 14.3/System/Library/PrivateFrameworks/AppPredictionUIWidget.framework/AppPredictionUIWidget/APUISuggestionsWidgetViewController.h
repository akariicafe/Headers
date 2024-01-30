@class ATXProactiveSuggestion, NSString, APUISuggestionsWidgetView, NSArray, ATXHomeScreenWidgetIdentifiable, ATXHomeScreenSuggestionClient, ATXSuggestionLayout;

@interface APUISuggestionsWidgetViewController : UIViewController <ATXHomeScreenSuggestionClientObserver, APUISuggestionsWidgetViewDelegate, SBHWidgetContextMenuControlling> {
    ATXHomeScreenWidgetIdentifiable *_widgetIdentifiable;
    ATXHomeScreenSuggestionClient *_suggestionClient;
    ATXSuggestionLayout *_layout;
    ATXProactiveSuggestion *_selectedSuggestion;
    NSString *_identifier;
}

@property (retain, nonatomic) APUISuggestionsWidgetView *widgetView;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (readonly, nonatomic) BOOL effectiveViewVisibility;
@property (nonatomic, getter=isOccluded) BOOL occluded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;

+ (id)smartStackImageForIconSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)imageForIconSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
+ (id)previewIdentifierWithIdentifier:(id)a0 layoutSize:(unsigned long long)a1;

- (void)didSelectApplicationShortcutItem:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)suggestionClientDidRefreshSuggestions:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)suggestionClientDidRefreshSuggestionsForSuggestionsWidget:(id)a0;
- (id)initWithIdentifier:(id)a0 suggestionsClient:(id)a1 layoutSize:(unsigned long long)a2;
- (void)_topWidgetDidAppear:(id)a0;
- (void)_topWidgetDidDisappear:(id)a0;
- (void)_updateViewVisibility;
- (void)logChangeWithNewSuggestionIds:(id)a0 previousSuggestionIds:(id)a1 suggestionClient:(id)a2;
- (BOOL)_canDismissSelectedSuggestion;
- (void)view:(id)a0 didTapSuggestion:(id)a1;
- (void)view:(id)a0 didFailExecutingSuggestion:(id)a1;
- (void)view:(id)a0 didFinishExecutingSuggestion:(id)a1;
- (void)_updateLayoutWithSuggestionClient:(id)a0;
- (void)_updateWidgetViewIfPossible;
- (id)_suggestionIdsInLayout:(id)a0;
- (void)verifyLayoutSizeCompatibility;

@end
