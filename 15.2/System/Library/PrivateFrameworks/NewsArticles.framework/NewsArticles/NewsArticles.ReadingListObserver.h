@interface NewsArticles.ReadingListObserver : NSObject <FCReadingListObserving> {
    void /* unknown type, empty encoding */ readingList;
    void /* unknown type, empty encoding */ onSaveObservers;
}

- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (void).cxx_destruct;
- (id)init;

@end
