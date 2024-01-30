@class NSMutableDictionary;

@interface HighlightManager : WBSHighlightManager {
    NSMutableDictionary *_highlightToPresentersMap;
    NSMutableDictionary *_highlightToBackForwardListItemsMap;
    NSMutableDictionary *_highlightToAttributionViewMap;
}

- (BOOL)_isInterstellarEnabledForSafari;
- (void)setPresenter:(id)a0 forHighlightIdentifier:(id)a1;
- (void)updateAttributionViews;
- (void)_handleRemovalOfHighlights:(id)a0;
- (void)loadLinkMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)attributionViewForHighlight:(id)a0;

@end
