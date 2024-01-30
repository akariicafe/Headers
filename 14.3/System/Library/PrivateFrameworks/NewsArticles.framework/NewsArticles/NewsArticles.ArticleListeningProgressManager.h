@interface NewsArticles.ArticleListeningProgressManager : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ listeningProgressObservables;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
    void /* unknown type, empty encoding */ cachedArticleTextRanges;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
