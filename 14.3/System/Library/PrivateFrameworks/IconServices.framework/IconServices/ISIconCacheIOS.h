@class NSString, NSURL;

@interface ISIconCacheIOS : NSObject

@property (readonly) BOOL initialized;
@property (copy) NSString *cacheKeySalt;
@property (retain) NSURL *cacheURL;

+ (id)xpcInterface;
+ (long long)currentDisplayGamut;
+ (id)iconCacheSystemVersionFileURL;
+ (id)UUIDStringForString:(id)a0;
+ (id)cacheContainerURL;
+ (id)cacheFolderURL;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCacheURL:(id)a0 salt:(id)a1;
- (id)bundleCacheKeyPrefixForBundleIdentifier:(id)a0;
- (id)cacheKeyFromResourceURL:(id)a0 bundleIdentifier:(id)a1 iconDictionary:(id)a2 preferedIconName:(id)a3;
- (id)bundleCacheKeyForBundleIdentifier:(id)a0 cacheKey:(id)a1 variant:(int)a2 options:(int)a3;
- (id)iconDataForKey:(id)a0 ignoreCache:(BOOL)a1 generatorBlock:(id /* block */)a2;

@end
