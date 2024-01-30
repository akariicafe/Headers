@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (id)initWithDaemon:(id)a0;
- (id)createExtensionsForDaemon:(id)a0;
- (id)_createPluginsFromClasses:(id)a0;
- (id)pluginsConformingToProtocol:(id)a0;
- (id)_pluginDirectoryPaths;
- (id)_builtInPluginClasses;
- (void).cxx_destruct;
- (id)_pluginClasses;
- (void)notifyPluginsOfDatabaseObliteration;
- (id)createExtensionsForProfile:(id)a0;

@end
