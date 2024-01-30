@interface NewsFeed.SharingArticleURLActivityItemSource : NSObject <UIActivityItemSource> {
    void /* unknown type, empty encoding */ headline;
    void /* unknown type, empty encoding */ sourceChannelPublic;
    void /* unknown type, empty encoding */ articleURL;
    void /* unknown type, empty encoding */ mailShareLinkTextProvider;
}

- (id)activityViewController:(id)a0 itemForActivityType:(id)a1;
- (id)activityViewControllerPlaceholderItem:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
