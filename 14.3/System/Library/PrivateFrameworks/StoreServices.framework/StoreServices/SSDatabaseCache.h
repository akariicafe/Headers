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

- (id)statistics;
- (void)clear;
- (int)clearRetiredData;
- (void)dealloc;
- (id)setData:(id)a0 expiring:(double)a1 retiring:(double)a2 lookupKey:(id)a3 userInfo:(id)a4;
- (id)cacheEntryForLookupKey:(id)a0;
- (id)initWithIdentifier:(id)a0 cacheName:(id)a1 database:(id)a2 cacheEntryClass:(Class)a3;
- (id)description;
- (void)clearCacheForLookupKey:(id)a0;
- (BOOL)_setupDatabase;
- (id)cacheEntryProperties:(id)a0 forLookupKeys:(id)a1;
- (id)initWithIdentifier:(id)a0 cacheName:(id)a1;

@end
