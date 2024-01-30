@interface NewsUI2.SearchService : NSObject <FCNewsAppConfigurationObserving> {
    void /* unknown type, empty encoding */ configQueue;
    void /* unknown type, empty encoding */ baseURL;
    void /* unknown type, empty encoding */ configurationProfiles;
    void /* unknown type, empty encoding */ connection;
    void /* unknown type, empty encoding */ configManager;
    void /* unknown type, empty encoding */ purchaseProvider;
    void /* unknown type, empty encoding */ bundleSubscriptionProvider;
    void /* unknown type, empty encoding */ userInterfaceIdiom;
    void /* unknown type, empty encoding */ storefrontID;
    void /* unknown type, empty encoding */ queryContextManager;
    void /* unknown type, empty encoding */ locationRegionManager;
    void /* unknown type, empty encoding */ queryContext;
    void /* unknown type, empty encoding */ localArea;
    void /* unknown type, empty encoding */ logger;
}

- (void)configurationManager:(id)a0 appConfigurationDidChange:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
