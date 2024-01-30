@interface NewsUI2.AudioFeedDataManager : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ feedService;
    void /* unknown type, empty encoding */ pluginManager;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ formatPluginFactory;
}

- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
