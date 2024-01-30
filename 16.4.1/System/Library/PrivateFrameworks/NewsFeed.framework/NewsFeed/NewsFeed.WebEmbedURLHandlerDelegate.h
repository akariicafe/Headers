@interface NewsFeed.WebEmbedURLHandlerDelegate : NSObject <NUURLHandlerDelegate> {
    void /* unknown type, empty encoding */ webLinkPresentingViewController;
    void /* unknown type, empty encoding */ webEmbedIdentifier;
    void /* unknown type, empty encoding */ webEmbedCoordinator;
}

- (id)init;
- (void).cxx_destruct;
- (void)URLHandler:(id)a0 wantsToPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)URLHandler:(id)a0 willOpenURL:(id)a1;

@end
