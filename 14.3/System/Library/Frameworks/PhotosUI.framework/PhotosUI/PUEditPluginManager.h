@class NSArray;

@interface PUEditPluginManager : NSObject

@property (copy, nonatomic, setter=_setPlugins:) NSArray *_plugins;
@property (readonly) unsigned long long mediaType;

+ (id)sharedManagerForMediaType:(unsigned long long)a0;

- (void).cxx_destruct;
- (BOOL)hasPlugins;
- (id)_initWithMediaType:(unsigned long long)a0;
- (id)pluginActivities;
- (id)_allowedPluginTypes;
- (void)rediscoverAvailablePlugins;
- (void)_discoveredAvailableExtensions:(id)a0;

@end
