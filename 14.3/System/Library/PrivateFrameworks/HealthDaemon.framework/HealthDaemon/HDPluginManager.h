@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (id)_pluginsDirectoryPath;
- (void).cxx_destruct;
- (id)_pluginDirectoryPaths;
- (id)pluginsConformingToProtocol:(id)a0;
- (id)_internalPluginsDirectoryPaths;
- (id)createExtensionsForProfile:(id)a0;
- (id)initWithDaemon:(id)a0;
- (id)createExtensionsForDaemon:(id)a0;
- (id)_pluginClasses;
- (void)_loadPlugins;
- (id)_builtInPluginClasses;
- (Class)_loadPrincipalClassConformingToProtocols:(id)a0 fromBundleAtPath:(id)a1;
- (id)_principalClassProtocols;
- (id)_createPluginsFromClasses:(id)a0;
- (id)_loadPrincipalClassesConformingToProtocols:(id)a0 fromBundlesInDirectoryAtPath:(id)a1 error:(id *)a2;

@end
