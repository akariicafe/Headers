@class NSString;

@interface VSSpeechCache : NSObject

@property (retain, nonatomic) NSString *dirPath;
@property (retain, nonatomic) NSString *preinstalledCacheDir;

+ (id)defaultCacheStore;

- (id)initWithStorePath:(id)a0;
- (void).cxx_destruct;
- (void)cleanCache;
- (void)deleteCache;
- (id)preinstalledCacheForText:(id)a0 language:(id)a1 gender:(long long)a2;
- (id)addCache:(id)a0;
- (id)cacheDataForKey:(id)a0;
- (BOOL)isPreinstalledCacheAvailableForRequest:(id)a0;
- (unsigned long long)totalCacheSize;

@end
