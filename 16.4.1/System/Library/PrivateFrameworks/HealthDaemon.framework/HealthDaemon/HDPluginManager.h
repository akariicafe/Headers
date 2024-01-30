@class NSArray, HDDaemon;

@interface HDPluginManager : NSObject {
    NSArray *_plugins;
}

@property (weak, nonatomic) HDDaemon *daemon;
@property (copy, nonatomic) NSArray *allowablePluginDirectoryPaths;

- (id)initWithDaemon:(id)a0;
- (id)pluginsConformingToProtocol:(id)a0;
- (id)createExtensionsForDaemon:(id)a0;
- (id)_pluginDirectoryPaths;
- (void)notifyPluginsOfDatabaseObliteration;
- (id)_builtInPluginClasses;
- (id)_pluginClasses;
- (id)_createPluginsFromClasses:(id)a0;
- (id)createExtensionsForProfile:(id)a0;
- (void).cxx_destruct;

@end
