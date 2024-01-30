@class NSArray;

@interface PUEditPluginManager : NSObject

@property (copy, nonatomic, setter=_setPlugins:) NSArray *_plugins;
@property (readonly) unsigned long long mediaType;

+ (id)sharedManagerForMediaType:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)_initWithMediaType:(unsigned long long)a0;
- (BOOL)hasNonMarkupPlugins;
- (BOOL)hasMarkupPlugin;
- (id)_allowedPluginTypes;
- (void)rediscoverAvailablePlugins;
- (void)_discoveredAvailableExtensions:(id)a0;
- (id)pluginActivities;
- (id)pluginActivitiesExceptMarkup;
- (BOOL)hasPlugins;

@end
