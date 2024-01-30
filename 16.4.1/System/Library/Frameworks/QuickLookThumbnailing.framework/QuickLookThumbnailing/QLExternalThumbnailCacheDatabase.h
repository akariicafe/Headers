@class NSURL, PQLConnection;

@interface QLExternalThumbnailCacheDatabase : NSObject

@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) PQLConnection *db;

- (id)initWithURL:(id)a0;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (BOOL)open;
- (void)close;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (void).cxx_destruct;
- (id)_createDatabaseIfNeededAtURL:(id)a0 error:(id *)a1;
- (id)_openDatabaseAtURL:(id)a0;
- (id)_setupDatabaseTablesIfNeeded:(id)a0 error:(id *)a1;
- (BOOL)deleteOldestThumbnail;
- (id)deleteOldestThumbnailsToFreeAtLeastSpace:(unsigned long long)a0 error:(id *)a1;
- (BOOL)insertOrReplaceThumbnailRepresentingFPItem:(id)a0 size:(unsigned long long)a1 modificationDate:(id)a2 fileExtension:(id)a3 error:(id *)a4;
- (id)oldestThumbnailsToFreeAtLeastSpace:(unsigned long long)a0 error:(id *)a1;
- (id)pathExtensionForItem:(id)a0 error:(id *)a1;
- (BOOL)removeAllThumbnails:(id *)a0;
- (unsigned long long)totalThumbnailCount;
- (unsigned long long)totalThumbnailsSize;
- (id)whereClauseForItem:(id)a0;

@end
