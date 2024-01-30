@interface TSForYouTodayPluginFactory : NSObject <TSForYouTodayPluginFactoryType> {
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ layoutOptionsProvider;
    void /* unknown type, empty encoding */ paidBundleConfigManager;
    void /* unknown type, empty encoding */ webEmbedViewControllerReuseManager;
    void /* unknown type, empty encoding */ cloudContext;
    void /* unknown type, empty encoding */ appConfigManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)createPluginWithIdentifier:(id)a0 group:(id)a1;

@end
