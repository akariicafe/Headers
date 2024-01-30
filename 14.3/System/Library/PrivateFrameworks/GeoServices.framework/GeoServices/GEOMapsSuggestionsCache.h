@interface GEOMapsSuggestionsCache : NSObject

+ (id)defaultCacheDir;
+ (id)defaultPathForProcessName:(id)a0;
+ (id)defaultSuppressedEntriesPath;
+ (void)pruneOldCacheAtPath:(id)a0;

@end
