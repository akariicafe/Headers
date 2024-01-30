@class PUAssetReference, NSMutableDictionary, PUOneUpSuggestionsProvider, NSString, PUBrowsingViewModel;
@protocol PUOneUpSuggestionsControllerDelegate;

@interface PUOneUpSuggestionsController : NSObject <PXContextualNotificationDelegate, PUBrowsingViewModelChangeObserver> {
    BOOL _willPerformUpdates;
    BOOL _isPerformingUpdates;
    struct { BOOL focusedAssetReference; BOOL focusedLongEnough; BOOL activeSuggestionsWindow; } _needsUpdateFlags;
    struct { BOOL frameForAssetReferenceInCoordinateSpace; BOOL viewController; BOOL didSelectSuggestionForAssetReference; BOOL canShowSuggestion; } _delegateRespondsTo;
}

@property (nonatomic, getter=isInFocus) BOOL inFocus;
@property (retain, nonatomic) PUAssetReference *focusedAssetReference;
@property (nonatomic) double lastFocusedAssetReferenceChangeTime;
@property (nonatomic, getter=isFocusedLongEnough) BOOL focusedLongEnough;
@property (readonly, nonatomic) NSMutableDictionary *suggestionInfos;
@property (readonly, nonatomic) PUOneUpSuggestionsProvider *suggestionsProvider;
@property (readonly, nonatomic) PUBrowsingViewModel *browsingViewModel;
@property (weak, nonatomic) id<PUOneUpSuggestionsControllerDelegate> delegate;
@property (nonatomic, getter=isViewVisible) BOOL viewVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateLayout;
- (void)_invalidateFocusedLongEnough;
- (void)contextualNotificationWasTapped:(id)a0;
- (void)_updateFocusedAssetReferenceIfNeeded;
- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contextualNotification:(id)a0 containingFrameInCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)_removeSuggestionInfoForAssetReference:(id)a0;
- (id)initWithSuggestionsProvider:(id)a0 browsingViewModel:(id)a1;
- (void)_invalidateInFocus;
- (void)hideSuggestionForAssetReference:(id)a0;
- (id)preferredContainerViewForContextualNotification:(id)a0;
- (long long)preferredAnimationForContextualNotification:(id)a0;
- (void)viewModel:(id)a0 didChange:(id)a1;
- (void)_updateInFocus;
- (BOOL)_needsUpdate;
- (BOOL)_canBeginDisplayingSuggestionsForAssetReference:(id)a0;
- (BOOL)_canKeepDisplayingSuggestionsForAssetReference:(id)a0;
- (void)_updateIfNeeded;
- (void)_requestSuggestionForAssetReference:(id)a0;
- (id)_assetReferenceForContextualNotification:(id)a0;
- (BOOL)contextualNotification:(id)a0 shouldPassthroughPoint:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (void)markSuggestionAsSeenForAssetReference:(id)a0;
- (void)contextualNotificationDidDisappear:(id)a0;
- (id)_suggestionInfoForAssetReference:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_updateSuggestions;
- (void)_updateFocusedLongEnoughIfNeeded;
- (void)_invalidateFocusedAssetReference;
- (void)_invalidateActiveSuggestionsWindow;
- (void)_handleSuggestion:(id)a0 error:(id)a1 forAssetReference:(id)a2;
- (void)contextualNotificationWasDiscarded:(id)a0;
- (void)_invalidateSuggestionsVisibility;
- (void)invalidateLayoutForAssetReference:(id)a0;
- (void)_handleDataSourceChange:(id)a0;
- (void)_updateActiveSuggestionsWindowIfNeeded;
- (void)_dismissSuggestionInfo:(id)a0;
- (void)invalidateSuggestions;

@end
