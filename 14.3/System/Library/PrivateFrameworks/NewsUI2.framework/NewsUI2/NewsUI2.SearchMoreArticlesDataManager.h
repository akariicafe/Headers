@interface NewsUI2.SearchMoreArticlesDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ streamingResults;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ headlineService;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
