@interface GEOMapsSuggestionsCache : NSObject

+ (void)pruneOldCacheAtPath:(id)a0;
+ (id)defaultCacheDir;
+ (id)defaultPathForProcessName:(id)a0;
+ (id)defaultSuppressedEntriesPath;

@end
