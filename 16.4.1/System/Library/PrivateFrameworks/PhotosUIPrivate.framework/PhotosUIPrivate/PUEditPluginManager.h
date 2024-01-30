@class NSArray;

@interface PUEditPluginManager : NSObject

@property (copy, nonatomic) NSArray *plugins;
@property (readonly) unsigned long long mediaType;

+ (id)sharedManagerForMediaType:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)_discoveredAvailableExtensions:(id)a0;
- (BOOL)hasMarkupPlugin;
- (id)_allowedPluginTypes;
- (id)_initWithMediaType:(unsigned long long)a0;
- (BOOL)hasNonMarkupPlugins;
- (BOOL)hasPlugins;
- (id)pluginActivities;
- (id)pluginActivitiesExceptMarkup;
- (void)rediscoverAvailablePlugins;

@end
