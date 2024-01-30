@class NSMutableSet, NSMutableDictionary;

@interface FNPluginManager : NSObject

@property (retain, nonatomic) NSMutableSet *pluginBundlePaths;
@property (retain, nonatomic) NSMutableSet *pluginBundles;
@property (retain, nonatomic) NSMutableSet *pluginInstances;
@property (retain, nonatomic) NSMutableDictionary *pluginMessage;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (void)loadBundles;
- (id)getBundlePaths:(id)a0;
- (unsigned long long)initPlugins;
- (id)getClient:(id)a0;
- (unsigned long long)startPlugins;
- (unsigned long long)stopPlugins;
- (unsigned long long)removePlugins;

@end
