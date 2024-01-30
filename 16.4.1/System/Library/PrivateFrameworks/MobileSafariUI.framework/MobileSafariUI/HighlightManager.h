@class NSMutableDictionary;

@interface HighlightManager : WBSHighlightManager {
    NSMutableDictionary *_highlightToPresentersMap;
    NSMutableDictionary *_highlightToBackForwardListItemsMap;
}

- (void)_handleRemovalOfHighlights:(id)a0;
- (void)loadLinkMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPresenter:(id)a0 forHighlightIdentifier:(id)a1;
- (void).cxx_destruct;

@end
