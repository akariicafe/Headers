@class NSCache;

@interface STSPluginLoader : NSObject

@property (retain, nonatomic) NSCache *pluginCache;

- (void).cxx_destruct;
- (id)init;
- (id)pluginWithName:(id)a0;

@end
