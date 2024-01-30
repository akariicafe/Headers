@interface NewsArticles.ArticleListeningProgressManager : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ listeningProgressObservations;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
    void /* unknown type, empty encoding */ cachedArticleTextRanges;
    void /* unknown type, empty encoding */ commandCenter;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
