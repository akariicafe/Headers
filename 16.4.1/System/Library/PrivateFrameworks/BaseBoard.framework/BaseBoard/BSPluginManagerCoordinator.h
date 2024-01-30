@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;

- (void)registerPlugins;
- (id)mainPluginManager;
- (id)pluginManagerForBundle:(id)a0;
- (void).cxx_destruct;
- (void)registerPluginsFromBundle:(id)a0;

@end
