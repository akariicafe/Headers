@interface NewsUI2.FeedHeadlinePlaybackCommandHandler : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ playbackConductor;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ commandCenter;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
