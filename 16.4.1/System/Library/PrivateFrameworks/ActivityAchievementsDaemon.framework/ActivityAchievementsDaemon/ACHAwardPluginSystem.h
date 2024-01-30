@class NSArray;

@interface ACHAwardPluginSystem : NSObject {
    NSArray *_plugins;
}

- (Class)_loadPrincipalClassConformingToProtocols:(id)a0 fromBundleAtPath:(id)a1;
- (id)_principalClassProtocols;
- (id)_pluginDirectoryPath;
- (id)_pluginClasses;
- (id)createTemplateAssetSources;
- (id)_createPluginsFromClasses:(id)a0;
- (void)_loadPlugins;
- (id)_loadPrincipalClassesConformingToProtocols:(id)a0 fromBundlesInDirectoryAtPath:(id)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;

@end
