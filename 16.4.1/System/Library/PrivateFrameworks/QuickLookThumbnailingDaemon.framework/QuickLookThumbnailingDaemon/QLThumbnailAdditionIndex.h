@class PQLConnection, NSURL, NSObject;
@protocol OS_dispatch_source;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface> {
    NSURL *_url;
    NSObject<OS_dispatch_source> *_dbWatcher;
}

@property (readonly) PQLConnection *db;
@property (readonly, copy) NSURL *databaseURL;

+ (id)sharedInstance;
+ (void)setUpCleanupXPCActivitySynchronously:(BOOL)a0;
+ (void)registerCleanupXPCActivity;

- (id)initWithURL:(id)a0;
- (BOOL)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1;
- (void)removeThumbnailForURL:(id)a0 completion:(id /* block */)a1;
- (BOOL)hasThumbnailForURL:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2;
- (id)databaseConnection;
- (id)initForTesting;
- (id)whereClauseForURL:(id)a0;
- (id)openDatabaseAtURL:(id)a0 error:(id *)a1;
- (void)removeAllAdditions;
- (void)performDatabaseMaintenance;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (int)deviceForHomeDirectory;
- (void)removeEntriesFromDatabase:(id)a0;
- (id)volumeRestrictionForMountPoint:(id)a0;
- (BOOL)addThumbnailForURL:(id)a0 lastHitDate:(id)a1 size:(unsigned long long)a2;
- (void)enumerateCacheEntriesWithHandler:(id /* block */)a0;
- (id)allEntries;
- (BOOL)open;
- (BOOL)addThumbnailForURL:(id)a0 size:(unsigned long long)a1;
- (BOOL)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1;
- (id)makeDatabaseAtURL:(id)a0 error:(id *)a1;
- (id)upgradeDatabaseIfNeeded:(id)a0 error:(id *)a1;
- (void)_cleanUpAfterClose;
- (id)entriesEnumerator;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)cleanUpBatchOfEntries:(id)a0;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)close;
- (void)addThumbnailForURLWrapper:(id)a0 size:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)init;
- (void)hasThumbnailForURLWrapper:(id)a0 updateLastHitDate:(BOOL)a1 andSize:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)retrieveAllAdditions:(id /* block */)a0;
- (id)batchOfEntriesStartingAt:(unsigned long long)a0 endingAt:(unsigned long long *)a1;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (void)_resetDatabaseOnItsQueue:(id)a0;
- (BOOL)removeThumbnailForURL:(id)a0;
- (void)updateLastHitDate:(id)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateFileSize:(unsigned long long)a0 ofThumbnailForURL:(id)a1 completion:(id /* block */)a2;
- (void)cancelCacheDeletePurge;
- (void)setUpDatabase:(id)a0;

@end
