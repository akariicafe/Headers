@class NSArray, NSMutableDictionary, NSMutableSet;

@interface WebPluginDatabase : NSObject {
    NSMutableDictionary *plugins;
    NSMutableSet *registeredMIMETypes;
    NSArray *plugInPaths;
    NSMutableSet *pluginInstanceViews;
}

+ (id)sharedDatabase;
+ (id)_defaultPlugInPaths;
+ (id)sharedDatabaseIfExists;
+ (void)closeSharedDatabase;
+ (void)setAdditionalWebPlugInPaths:(id)a0;

- (id)plugins;
- (void)close;
- (id)init;
- (void)refresh;
- (void)dealloc;
- (void)setPlugInPaths:(id)a0;
- (id)pluginForMIMEType:(id)a0;
- (void)_removePlugin:(id)a0;
- (id)_scanForNewPlugins;
- (void)_addPlugin:(id)a0;
- (id)pluginForExtension:(id)a0;
- (BOOL)isMIMETypeRegistered:(id)a0;
- (void)addPluginInstanceView:(id)a0;
- (void)removePluginInstanceView:(id)a0;
- (void)removePluginInstanceViewsFor:(id)a0;
- (void)destroyAllPluginInstanceViews;
- (id)_plugInPaths;

@end
