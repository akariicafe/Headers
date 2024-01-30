@class NSMutableSet;

@interface PLTableThumbnailMigrator : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingAssetObjectIDsLock;
    NSMutableSet *_pendingAssetObjectIDs;
}

+ (unsigned long long)countOfAssetsPendingTableThumbRebuildInLibrary:(id)a0;
+ (BOOL)_writeCompressedTableThumbsFromMasterThumb:(struct CGImageSource { } *)a0 uuid:(id)a1 formats:(id)a2 toIndex:(unsigned long long)a3 thumbnailManager:(id)a4;
+ (id)_nextBatchOfItemsPendingTableRebuildInLibrary:(id)a0 excludingAssetIDs:(id)a1 sourceObjects:(id *)a2;
+ (id)_workItemForAsset:(id)a0 library:(id)a1 thumbnailManager:(id)a2;
+ (id)_fetchRequstForAssetsPendingTableRebuildWithLimit:(long long)a0 excludingAssetIDs:(id)a1;
+ (id)_predicateForAssetsPendingTableRebuild;

- (void)migrateAllAssetsPendingTableThumbRebuildInLibrary:(id)a0 toTableFormats:(id)a1 limit:(unsigned long long)a2;
- (void)rebuildTableThumbForAsset:(id)a0 inLibrary:(id)a1 toTableFormats:(id)a2;
- (id)_bulkMigratorQueue;
- (id)init;
- (void)_rebuildTablesForBatch:(id)a0 inLibrary:(id)a1 toFormats:(id)a2;
- (void).cxx_destruct;

@end
