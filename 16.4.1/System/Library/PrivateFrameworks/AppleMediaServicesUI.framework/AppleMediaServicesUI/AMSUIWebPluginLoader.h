@class NSMutableDictionary, NSDictionary, AMSUIWebClientContext, NSArray;

@interface AMSUIWebPluginLoader : NSObject

@property (readonly, weak, nonatomic) AMSUIWebClientContext *context;
@property (readonly, nonatomic) NSDictionary *installedPluginURLs;
@property (retain, nonatomic) NSMutableDictionary *loadedPluginsMap;
@property (readonly, nonatomic) NSArray *loadedPlugins;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)_loadInstalledPlugins;
- (id)pluginForBundleIdentifier:(id)a0;

@end
