@interface KPersistentMovieInfo : NSObject

+ (void)noteApplicationDidReceiveMemoryWarning;
+ (void)nukeCaches;
+ (void)ensureCacheDirectoryExists;
+ (id)cachedCreationDateForURL:(id)a0;
+ (void)addURL:(id)a0 withDate:(id)a1;
+ (id)infoCachePath;
+ (void)reallySaveDict:(id)a0;
+ (void)createOrLoadPersistentDict;
+ (void)savePersistentDict;
+ (long long)cacheCount;

@end
