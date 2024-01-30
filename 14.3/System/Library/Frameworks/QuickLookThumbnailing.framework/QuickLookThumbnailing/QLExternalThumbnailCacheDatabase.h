@class NSURL, PQLConnection;

@interface QLExternalThumbnailCacheDatabase : NSObject

@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) PQLConnection *db;

- (void)close;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (BOOL)open;
- (void)_closeDatabaseOnItsQueue:(id)a0;
- (void)logError:(id)a0 onDB:(id)a1 statement:(id)a2;
- (id)_openDatabaseAtURL:(id)a0;
- (id)_createDatabaseIfNeededAtURL:(id)a0 error:(id *)a1;
- (id)_setupDatabaseTablesIfNeeded:(id)a0 error:(id *)a1;
- (id)oldestThumbnailsToFreeAtLeastSpace:(unsigned long long)a0 error:(id *)a1;
- (id)whereClauseForItem:(id)a0;
- (unsigned long long)totalThumbnailsSize;
- (unsigned long long)totalThumbnailCount;
- (BOOL)insertOrReplaceThumbnailRepresentingFPItem:(id)a0 size:(unsigned long long)a1 modificationDate:(id)a2 fileExtension:(id)a3 error:(id *)a4;
- (id)deleteOldestThumbnailsToFreeAtLeastSpace:(unsigned long long)a0 error:(id *)a1;
- (BOOL)deleteOldestThumbnail;
- (id)pathExtensionForItem:(id)a0 error:(id *)a1;
- (BOOL)removeAllThumbnails:(id *)a0;

@end
