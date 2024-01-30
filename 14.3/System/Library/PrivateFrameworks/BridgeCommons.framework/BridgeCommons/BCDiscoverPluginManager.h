@class NSSet, NSArray;

@interface BCDiscoverPluginManager : NSObject

@property (class, readonly, nonatomic) NSSet *discoverPluginBundles;

@property (copy, nonatomic) NSArray *discoverPlugins;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } discoverPluginsLock;

+ (id)_discoverPluginDirectoryURL;

- (id)init;
- (void).cxx_destruct;
- (id)sortedPluginsBySectionForInput:(id)a0;
- (id)_buildDiscoverPlugins;

@end
