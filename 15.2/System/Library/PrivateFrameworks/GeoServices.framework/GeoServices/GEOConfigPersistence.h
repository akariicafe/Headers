@class _GEOConfigCache, _GEOConfigDBOperationQueue, GEOSQLiteDB, _GEOConfigDB;

@interface GEOConfigPersistence : NSObject {
    GEOSQLiteDB *_db;
    _GEOConfigDB *_configDB;
    _GEOConfigDB *_xpcConfigDB;
    _GEOConfigCache *_keyExpiryCache;
    _GEOConfigDBOperationQueue *_operationQueue;
}

@property (class, readonly, nonatomic) GEOConfigPersistence *shared;

+ (BOOL)_migrateDates:(id)a0 withConverter:(id /* block */)a1;
+ (BOOL)_setup:(id)a0;

- (void)migrateXPCKeys:(id)a0;
- (void)tearDown;
- (void)setDefault:(id)a0 forKeyPath:(id)a1;
- (void)clearExpirationForKeyPath:(id)a0;
- (void)setExpire:(id)a0;
- (id)defaultForKeyPathComponents:(id)a0;
- (id)defaultForKeyPath:(id)a0;
- (id)_getExpiredKeyPathsOlderThanTime:(id)a0 osVersion:(id)a1;
- (void)_pruneExpiredKeyPathsOlderThanTime:(id)a0 osVersion:(id)a1;
- (id)initWithDBPath:(id)a0;
- (id)getAllExpiringKeys;
- (id)getExpiredKeyPathsOlderThanOSVersion:(id)a0;
- (id)getExpiredKeyPathsOlderThanTime:(id)a0;
- (id)_getExpiredKeyPathsOlderThanTime:(id)a0 osVersion:(id)a1 from:(id)a2;
- (void).cxx_destruct;
- (id)xpcDefaultForKeyPath:(id)a0;
- (void)pruneExpiredKeyPathsOlderThanTime:(id)a0;
- (id)xpcDefaultForKeyPathComponents:(id)a0;
- (void)setXPCDefault:(id)a0 forKeyPath:(id)a1;
- (void)dealloc;
- (void)pruneExpiredKeyPathsOlderThanOSVersion:(id)a0;
- (id)getExpireForKeyPath:(id)a0;

@end
