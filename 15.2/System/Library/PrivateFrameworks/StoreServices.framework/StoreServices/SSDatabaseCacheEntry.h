@class SSPersistentCache;

@interface SSDatabaseCacheEntry : SSSQLiteEntity {
    SSPersistentCache *_persistentCache;
}

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (unsigned long long)_fetchPersistentID:(id)a0 inDatabase:(id)a1;

- (id)description;
- (id)initWithLookupKey:(id)a0 inDatabase:(id)a1;
- (void)setPersistentCache:(id)a0;
- (void)dealloc;
- (id)dataBlob:(BOOL *)a0;

@end
