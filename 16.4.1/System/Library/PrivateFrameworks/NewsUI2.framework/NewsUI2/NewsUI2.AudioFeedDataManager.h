@interface NewsUI2.AudioFeedDataManager : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ feedService;
    void /* unknown type, empty encoding */ feedPluginManager;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ subscriptionService;
    void /* unknown type, empty encoding */ tagService;
    void /* unknown type, empty encoding */ offlineManager;
}

- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)readingHistory:(id)a0 didRemoveArticlesWithIDs:(id)a1;
- (void)readingHistoryDidClear:(id)a0;
- (void)readingHistoryLikelyClearedRemotely:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
