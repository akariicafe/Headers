@class NSString, APUISuggestionsWidgetView, NSArray, ATXProactiveSuggestion;

@interface APUISuggestionsWidgetViewController : APUIWidgetViewController <ATXHomeScreenSuggestionClientObserver, APUISuggestionsWidgetViewDelegate, SBHWidgetContextMenuControlling, INUIAddVoiceShortcutViewControllerDelegate> {
    ATXProactiveSuggestion *_selectedSuggestion;
}

@property (retain, nonatomic) APUISuggestionsWidgetView *widgetView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;

+ (id)_actionWithSuggestion:(id)a0;
+ (BOOL)_isSuggestionShortcut:(id)a0;
+ (id)_shortcutWithSuggestion:(id)a0;

- (void)didMoveToParentViewController:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)didSelectApplicationShortcutItem:(id)a0;
- (void)willShowContextMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)suggestionClientDidRefreshProactiveWidgetLayouts:(id)a0;
- (id)initWithIdentifier:(id)a0 suggestionsClient:(id)a1 layoutSize:(unsigned long long)a2;
- (void)addVoiceShortcutViewController:(id)a0 didFinishWithVoiceShortcut:(id)a1 error:(id)a2;
- (void)addVoiceShortcutViewControllerDidCancel:(id)a0;
- (BOOL)_canDismissSelectedSuggestion;
- (BOOL)_canSaveSelectedSuggestion;
- (id)_suggestionIdsInLayout:(id)a0;
- (void)_updateLayoutAsynchronouslyWithSuggestionClient:(id)a0;
- (void)_updateWidgetViewIfPossible;
- (void)verifyLayoutSizeCompatibility;
- (void)view:(id)a0 didFailExecutingSuggestion:(id)a1;
- (void)view:(id)a0 didFinishExecutingSuggestion:(id)a1;
- (void)view:(id)a0 didTapSuggestion:(id)a1;

@end
