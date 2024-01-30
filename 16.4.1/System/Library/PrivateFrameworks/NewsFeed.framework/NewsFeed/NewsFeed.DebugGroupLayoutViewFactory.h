@interface NewsFeed.DebugGroupLayoutViewFactory : NSObject <UIDragInteractionDelegate> {
    void /* unknown type, empty encoding */ colorPaletteProvider;
    void /* unknown type, empty encoding */ cellSelectionRenderer;
    void /* unknown type, empty encoding */ imageHeadlineViewRenderer;
    void /* unknown type, empty encoding */ coverIssueViewRenderer;
    void /* unknown type, empty encoding */ coverChannelViewRenderer;
    void /* unknown type, empty encoding */ formatLayoutViewRenderer;
    void /* unknown type, empty encoding */ internalErrorViewRenderer;
    void /* unknown type, empty encoding */ hiddenContentEffectRenderer;
}

- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
