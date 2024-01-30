@class FPItemManager, QLSqliteDatabase, NSString;

@interface QLCacheIndexDatabase : NSObject {
    NSString *_databasePath;
}

@property (readonly) unsigned long long maxThumbnailLifeTime;
@property (readonly) unsigned long long fileEntryCount;
@property (readonly) unsigned long long thumbnailCount;
@property (readonly) QLSqliteDatabase *database;
@property (readonly) unsigned long long reserveBufferCount;
@property (readonly) unsigned long long reserveBufferSize;
@property (retain) FPItemManager *itemManager;

- (void)checkpoint;
- (id)initWithPath:(id)a0;
- (void)do:(id /* block */)a0;
- (BOOL)beginTransaction;
- (void)endTransaction;
- (void)close;
- (void).cxx_destruct;
- (void)reset;
- (void)save;
- (BOOL)isValid;
- (void)_createTables;
- (void)open;
- (BOOL)doesExist;
- (unsigned long long)_cacheIdForFileIdentifier:(id)a0 createVersion:(id *)a1;
- (id)removeAllThumbnailsForCacheId:(unsigned long long)a0;
- (BOOL)add:(unsigned long long)a0 blobInfosStartingAtColumn:(unsigned long long)a1 ofSteppedStatement:(struct sqlite3_stmt { } *)a2 toArray:(id)a3;
- (id)_removeThumbnailsFromStatement:(struct sqlite3_stmt { } *)a0;
- (id)removeThumbnailsOlderThanDate:(id)a0;
- (id)batchOfFileProviderItemsStartingAtRowId:(unsigned long long)a0 endingAtRowId:(unsigned long long *)a1;
- (void)removeUbiquitousFilesWithRowids:(id)a0;
- (id)removeThumbnailsWithCacheIds:(id)a0;
- (id)batchOfRegularItemsStartingAtRowId:(unsigned long long)a0 endingAtRowId:(unsigned long long *)a1;
- (void)removeBasicFilesWithRowids:(id)a0;
- (id)allReservedBuffers;
- (id)lastCrapWithDate:(id *)a0;
- (id)itemsGroupedByProviderDomain:(id)a0;
- (void)updateHitCount:(id)a0 forFileIdentifier:(id)a1;
- (unsigned long long)insertOrUpdateThumbnailWithVersionedFileIdentifier:(id)a0 shouldInvalidAllThumbnailSizes:(BOOL *)a1 added:(BOOL *)a2;
- (BOOL)getBlobInfoForCacheId:(unsigned long long)a0 size:(float)a1 iconMode:(unsigned char)a2 badgeType:(unsigned long long)a3 iconVariant:(long long)a4 interpolationQuality:(int)a5 externalGeneratorDataHash:(unsigned long long)a6 bitmapDataBlobInfo:(id *)a7 plistBufferBlobInfo:(id *)a8;
- (BOOL)insertOrUpdateImageDataForCacheId:(unsigned long long)a0 size:(float)a1 iconMode:(unsigned char)a2 badgeType:(unsigned long long)a3 iconVariant:(long long)a4 interpolationQuality:(int)a5 width:(unsigned long long)a6 height:(unsigned long long)a7 bitsPerComponent:(unsigned long long)a8 bitsPerPixel:(unsigned long long)a9 bytesPerRow:(unsigned long long)a10 bitmapInfo:(unsigned int)a11 bitmapDataBlobInfo:(id)a12 metadataBlobInfo:(id)a13 flavor:(int)a14 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a15 externalGeneratorDataHash:(unsigned long long)a16 lastHitDate:(id)a17;
- (id)removeThumbnailForFileIdentifier:(id)a0;
- (id)removePercentageOldestThumbnails:(unsigned long long)a0;
- (id)removeOldThumbnails;
- (id)removeThumbnailsForDeletedFiles;
- (id)removeFilesWithFileInfo:(id)a0;
- (id)removeFilesFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)a0;
- (id)queryCacheForFileRequests:(id)a0;
- (id)enumeratorForAllUbiquitousFiles:(BOOL)a0 withExtraInfo:(BOOL)a1;
- (unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)a0;
- (id)allBuffersIncludingReserved:(BOOL)a0;
- (void)addReservedBufferWithBlobInfo:(id)a0;
- (BOOL)removeReservedBufferWithBlobInfo:(id)a0;
- (void)_deleteAllTables;
- (void)noteRemoteThumbnailMissingForItems:(id)a0;
- (void)noteRemoteThumbnailPresentForItems:(id)a0;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)a0;

@end
