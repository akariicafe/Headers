@interface NewsUI2.AudioHistoryFeedDataManager : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ feedService;
    void /* unknown type, empty encoding */ headlineService;
    void /* unknown type, empty encoding */ accessQueue;
}

- (void)readingHistory:(id)a0 didRemoveArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)readingHistoryDidClear:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
