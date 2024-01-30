@class PQLConnection, NSURL, NSObject;
@protocol OS_dispatch_source;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface> {
    NSURL *_url;
    NSObject<OS_dispatch_source> *_dbWatcher;
}

@property (readonly) PQLConnection *db;
@property (readonly, copy) NSURL *databaseURL;

+ (id)sharedInstance;
+ (void)registerCleanupXPCActivity;
+ (void)setUpCleanupXPCActivitySynchronously:(BOOL)a0;

- (void)close;
- (id)initForTesting;
- (id)initWithURL:(id)a0;
- (BOOL)open;
- (id)allEntries;
- (void).cxx_destruct;
- (id)init;
- (id)databaseConnection;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)cancelCacheDeletePurge;
- (void)performDatabaseMaintenance;
- (id)openDatabaseAtURL:(id)a0 error:(id *)a1;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (void)_cleanUpAfterClose;
- (void)_resetDatabaseOnItsQueue:(id)a0;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (id)makeDatabaseAtURL:(id)a0 error:(id *)a1;
- (id)upgradeDatabaseIfNeeded:(id)a0 error:(id *)a1;
- (void)setUpDatabase:(id)a0;
- (id)whereClauseForURL:(id)a0;
- (BOOL)addThumbnailForURL:(id)a0 lastHitDate:(id)a1 size:(unsigned long long)a2;
- (id)entriesEnumerator;
- (int)deviceForHomeDirectory;
- (void)removeEntriesFromDatabase:(id)a0;
- (id)batchOfEntriesStartingAt:(unsigned long long)a0 endingAt:(unsigned long long *)a1;
- (void)cleanUpBatchOfEntries:(id)a0;
- (BOOL)hasThumbnailForURL:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2;
- (BOOL)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1;
- (BOOL)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1;
- (BOOL)removeThumbnailForURL:(id)a0;
- (BOOL)addThumbnailForURL:(id)a0 size:(unsigned long long)a1;
- (void)hasThumbnailForURLWrapper:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (void)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (void)removeThumbnailForURL:(id)a0 completion:(id /* block */)a1;
- (void)addThumbnailForURLWrapper:(id)a0 size:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)retrieveAllAdditions:(id /* block */)a0;
- (void)removeAllAdditions;
- (void)enumerateCacheEntriesWithHandler:(id /* block */)a0;
- (id)volumeRestrictionForMountPoint:(id)a0;

@end
