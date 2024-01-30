@interface NewsUI2.TodayMagazineFeedDataManager : NSObject <FCReadingHistoryObserving, FCReadingListObserving, TSPluginDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ group;
    void /* unknown type, empty encoding */ cursor;
    void /* unknown type, empty encoding */ myMagazinesModule;
    void /* unknown type, empty encoding */ pluginManager;
    void /* unknown type, empty encoding */ childParentPluginIdentifierMap;
    void /* unknown type, empty encoding */ parentPluggableViewController;
    void /* unknown type, empty encoding */ subscriptionService;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ readingList;
}

- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)plugin:(id)a0 didResizePluginModel:(id)a1;
- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
