@interface NewsFeed.DebugGroupLayoutViewFactory : NSObject <UIDragInteractionDelegate> {
    void /* unknown type, empty encoding */ colorPaletteProvider;
    void /* unknown type, empty encoding */ cellSelectionRenderer;
    void /* unknown type, empty encoding */ imageHeadlineViewRenderer;
    void /* unknown type, empty encoding */ featuredHeadlineViewRenderer;
    void /* unknown type, empty encoding */ featuredIssueHeadlineViewRenderer;
    void /* unknown type, empty encoding */ orderedHeadlineViewRenderer;
    void /* unknown type, empty encoding */ issueViewRenderer;
    void /* unknown type, empty encoding */ coverIssueViewRenderer;
    void /* unknown type, empty encoding */ coverChannelViewRenderer;
    void /* unknown type, empty encoding */ featuredIssueSupplementaryViewRenderer;
    void /* unknown type, empty encoding */ formatLayoutViewRenderer;
    void /* unknown type, empty encoding */ webEmbedViewRenderer;
    void /* unknown type, empty encoding */ webEmbedViewControllerFactory;
    void /* unknown type, empty encoding */ internalErrorViewRenderer;
    void /* unknown type, empty encoding */ audioTrackViewRenderer;
    void /* unknown type, empty encoding */ audioDailyBriefingViewRenderer;
    void /* unknown type, empty encoding */ hiddenContentEffectRenderer;
}

- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
