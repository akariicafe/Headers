@interface NewsUI2.ReadingListOfflineContentContributor : NSObject <FCReadingListObserving> {
    void /* unknown type, empty encoding */ offlineContentRequests;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ configurationManager;
}

- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
