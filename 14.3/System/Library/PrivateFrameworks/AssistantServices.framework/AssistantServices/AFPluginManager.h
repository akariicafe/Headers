@class NSString, NSArray, NSMutableDictionary;

@interface AFPluginManager : NSObject {
    NSString *_path;
    NSArray *_domainKeys;
    id /* block */ _factoryInitializationBlock;
    NSMutableDictionary *_domainKeyDictionary;
    BOOL _hasLoadedBundles;
}

+ (id)pluginManagerForPath:(id)a0 domainKeys:(id)a1 factoryInitializationBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPath:(id)a0 domainKeys:(id)a1 factoryInitializationBlock:(id /* block */)a2;
- (void)_loadBundlesIfNeeded;
- (void)_registerBundle:(id)a0;
- (void)enumerateFactoryInstancesForDomainKey:(id)a0 groupIdentifier:(id)a1 classIdentifier:(id)a2 usingBlock:(id /* block */)a3;
- (void)preloadBundles;

@end
