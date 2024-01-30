@interface NewsUI2.HistoryFeedDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ clearReadingHistoryManager;
    void /* unknown type, empty encoding */ newsletterManager;
    void /* unknown type, empty encoding */ personalizationData;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ headlineService;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ chunkSize;
}

- (void)readingHistory:(id)a0 didRemoveArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (void)readingHistoryDidClear:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
