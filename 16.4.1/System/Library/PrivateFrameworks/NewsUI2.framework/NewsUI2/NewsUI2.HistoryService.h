@interface NewsUI2.HistoryService : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ issueReadingHistory;
    void /* unknown type, empty encoding */ clearReadingHistoryManager;
    void /* unknown type, empty encoding */ headlineStreamingResults;
    void /* unknown type, empty encoding */ headlineModelFactory;
    void /* unknown type, empty encoding */ headlineService;
}

- (void)readingHistory:(id)a0 didAddArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)readingHistory:(id)a0 didChangeOffensiveStateForArticlesWithIDs:(id)a1;
- (void)readingHistory:(id)a0 didRemoveArticlesWithIDs:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
