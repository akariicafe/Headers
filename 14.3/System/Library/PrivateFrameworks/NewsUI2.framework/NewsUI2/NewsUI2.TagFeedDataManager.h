@interface NewsUI2.TagFeedDataManager : NSObject <TSPluginDelegate, FCReadingHistoryObserving, FCReadingListObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ feedService;
    void /* unknown type, empty encoding */ headlineService;
    void /* unknown type, empty encoding */ pluginManager;
    void /* unknown type, empty encoding */ pluginFactory;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ appConfigManager;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)plugin:(id)a0 didResizePluginModel:(id)a1;
- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
