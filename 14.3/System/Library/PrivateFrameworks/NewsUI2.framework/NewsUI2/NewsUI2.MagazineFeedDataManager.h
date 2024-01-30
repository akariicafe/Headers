@interface NewsUI2.MagazineFeedDataManager : NSObject <TSPluginDelegate, FCReadingHistoryObserving, FCReadingListObserving, FCBundleSubscriptionChangeObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ feedServiceConfigFetcher;
    void /* unknown type, empty encoding */ feedService;
    void /* unknown type, empty encoding */ myMagazinesModule;
    void /* unknown type, empty encoding */ categoriesModule;
    void /* unknown type, empty encoding */ paywallModule;
    void /* unknown type, empty encoding */ accessQueue;
    void /* unknown type, empty encoding */ prewarmer;
    void /* unknown type, empty encoding */ pluginManager;
    void /* unknown type, empty encoding */ lastRefreshDate;
    void /* unknown type, empty encoding */ subscriptionService;
    void /* unknown type, empty encoding */ _persistedConfigurationDate;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ readingList;
}

- (void)bundleSubscriptionDidExpire:(id)a0;
- (void)readingHistory:(id)a0 didChangeFeaturesForArticles:(id)a1;
- (void)plugin:(id)a0 didResizePluginModel:(id)a1;
- (void)readingList:(id)a0 didAddArticles:(id)a1 removeArticles:(id)a2 eventInitiationLevel:(long long)a3;
- (void)bundleSubscriptionDidSubscribe:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
