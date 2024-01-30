@class ResourceLoader, NSMutableDictionary;

@interface DEDImageResourceManager : NSObject

@property (retain) ResourceLoader *loader;
@property (retain) NSMutableDictionary *imageCache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)asynchronousDataFromURL:(id)a0 key:(id)a1 completionBlock:(id /* block */)a2;
- (id)cachedImageFromKey:(id)a0;

@end
