@interface NewsUI2.SavedFeedDataManager : NSObject <FCReadingListObserving> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ headlineService;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ feedService;
}

- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
