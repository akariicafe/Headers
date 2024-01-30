@interface NewsUI2.SavedService : NSObject <FCReadingListObserving> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ headlineStreamingResults;
    void /* unknown type, empty encoding */ articleController;
    void /* unknown type, empty encoding */ headlineModelFactory;
    void /* unknown type, empty encoding */ headlineService;
}

- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
