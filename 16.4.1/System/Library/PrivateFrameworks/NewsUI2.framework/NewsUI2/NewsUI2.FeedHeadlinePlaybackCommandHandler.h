@interface NewsUI2.FeedHeadlinePlaybackCommandHandler : NSObject <FCReadingHistoryObserving> {
    void /* unknown type, empty encoding */ playbackConductor;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ audioPlaybackContext;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
