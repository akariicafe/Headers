@class NSString;

@interface VSSpeechCache : NSObject

@property (class, readonly) VSSpeechCache *defaultCacheStore;

@property (retain, nonatomic) NSString *dirPath;
@property (retain, nonatomic) NSString *preinstalledCacheDir;

- (void)cleanCache;
- (BOOL)isPreinstalledCacheAvailableForRequest:(id)a0;
- (id)preinstalledCacheForText:(id)a0 language:(id)a1 name:(id)a2;
- (id)cacheDataForKey:(id)a0;
- (id)initWithStorePath:(id)a0;
- (unsigned long long)totalCacheSize;
- (id)addCache:(id)a0;
- (void).cxx_destruct;
- (void)deleteCache;

@end
