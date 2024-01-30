@interface NewsUI2.ForYouTodayFeedManager : _TtCs12_SwiftObject <FCForYouPluginGroupManaging> {
    void /* unknown type, empty encoding */ configurationManager;
    void /* unknown type, empty encoding */ feedGroupEmitterFactory;
    void /* unknown type, empty encoding */ emitterQueue;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ feedContextFactory;
}

- (void)fetchKnownGroupForIdentifier:(id)a0 headlines:(id)a1 tags:(id)a2 assetHandles:(id)a3 completion:(id /* block */)a4;
- (void)fetchGroupsWithGroupConfigs:(id)a0 forYouConfig:(id)a1 precedingArticleIDs:(id)a2 prefetchedHeadlinesByID:(id)a3 assetManager:(id)a4 completion:(id /* block */)a5;

@end
