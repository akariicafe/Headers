@interface NewsUI2.HistoryFeedDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ clearReadingHistoryManager;
    void /* unknown type, empty encoding */ newsletterManager;
    void /* unknown type, empty encoding */ personalizationData;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ headlineService;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ feedService;
}

- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (void)readingHistory:(id)a0 didRemoveArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistoryDidClear:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
