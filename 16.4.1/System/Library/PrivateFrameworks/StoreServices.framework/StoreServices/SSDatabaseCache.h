@class NSString, SSPersistentCache, NSObject, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface SSDatabaseCache : NSObject {
    NSString *_identifier;
    NSString *_cacheName;
    NSString *_path;
    NSObject<OS_dispatch_queue> *_serialQueue;
    SSPersistentCache *_persistentCache;
    SSSQLiteDatabase *_database;
    Class _cacheEntryClass;
}

@property (nonatomic) unsigned long long maximumInlineBlobSize;

- (id)initWithIdentifier:(id)a0 cacheName:(id)a1 database:(id)a2 cacheEntryClass:(Class)a3;
- (id)cacheEntryForLookupKey:(id)a0;
- (id)statistics;
- (int)clearRetiredData;
- (void)dealloc;
- (BOOL)_setupDatabase;
- (id)initWithIdentifier:(id)a0 cacheName:(id)a1;
- (id)description;
- (id)setData:(id)a0 expiring:(double)a1 retiring:(double)a2 lookupKey:(id)a3 userInfo:(id)a4;
- (void)clear;
- (id)cacheEntryProperties:(id)a0 forLookupKeys:(id)a1;
- (void)clearCacheForLookupKey:(id)a0;

@end
