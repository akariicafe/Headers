@interface NewsFeed.LikingCommandHandler : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ bundleSubscriptionManager;
    void /* unknown type, empty encoding */ paidAccessChecker;
    void /* unknown type, empty encoding */ allLikedArticleIDs;
    void /* unknown type, empty encoding */ allDislikedArticleIDs;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
