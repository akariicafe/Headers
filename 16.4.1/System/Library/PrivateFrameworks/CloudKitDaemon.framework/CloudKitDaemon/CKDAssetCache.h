@class CKDDirectoryContext, NSString, NSDate, CKDAssetHandleTable, CKDClonedFileCache, CKDAssetVolumeTable, CKDMMCS, CKSAssetCacheTableGroup;

@interface CKDAssetCache : NSObject {
    CKDClonedFileCache *_clonedFileCache;
}

@property (readonly, nonatomic) CKSAssetCacheTableGroup *assetCacheTableGroup;
@property (readonly, nonatomic) CKDAssetHandleTable *assetHandleTable;
@property (readonly, nonatomic) CKDAssetVolumeTable *assetVolumeTable;
@property (readonly, nonatomic) NSString *applicationBundleID;
@property (retain, nonatomic) CKDDirectoryContext *directoryContext;
@property BOOL isEvictionScheduled;
@property BOOL didDrop;
@property (nonatomic) long long checkoutCount;
@property (retain, nonatomic) NSDate *oldestLastUsedTime;
@property (weak, nonatomic) CKDMMCS *MMCS;
@property (readonly, nonatomic) BOOL isNewEmptyCache;
@property (readonly, nonatomic) NSString *fileDownloadPath;

+ (id)_sharedCachesByDirectory;
+ (id)_sharedCachesQueue;
+ (id)assetCacheWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 didInit:(BOOL *)a3 error:(id *)a4;
+ (int)openFdForDownloadPath:(id)a0 error:(id *)a1;

- (void)clearAssetCache;
- (void)showAssetCache;
- (BOOL)updateAssetHandlesForPutMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (void)expireAssetHandlesIfNecessary;
- (void)drop;
- (unsigned long long)countAssetCacheItems;
- (unsigned long long)_evictAllFilesForced:(BOOL)a0;
- (void)_resetAssetInflight;
- (unsigned long long)evictAllFilesForced:(BOOL)a0;
- (id)findAssetHandleForItemID:(unsigned long long)a0 error:(id *)a1;
- (void)_expireAssetHandlesWithExpiryDate:(id)a0;
- (id)updateAssetHandlesForChunkedMMCSItems:(id)a0 error:(id *)a1;
- (void)enumerateAssetHandlesSegregatedByVolume:(id)a0 block:(id /* block */)a1;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUIDString:(id *)a1 assetSignatureString:(id *)a2;
- (void)unregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)a0;
- (void)updateLastAccessTimeForUUID:(id)a0;
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(BOOL)a0;
- (BOOL)startTrackingRegisterOrPutAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (void)unregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)a0 deleteUnregisteredAssetHandlesWithIDs:(id)a1;
- (id)deviceIDForVolumeIndex:(id)a0;
- (id)_saveData:(id)a0 error:(id *)a1;
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (BOOL)parseCachedPath:(id)a0 assetHandleUUID:(id *)a1 assetSignature:(id *)a2;
- (id)clonedFileCache;
- (id)trackDownloadedData:(id)a0 signature:(id)a1 error:(id *)a2;
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (void)dealloc;
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;
- (id)assetHandleWithCachedPath:(id)a0;
- (void)stopTrackingAssetHandlesByItemIDs:(id)a0;
- (void)setupPersistentStateAtStartup;
- (id)_initWithApplicationBundleID:(id)a0 directoryContext:(id)a1 database:(id)a2 error:(id *)a3;
- (unsigned long long)clearForced:(BOOL)a0;
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)a0;
- (unsigned long long)_evictWithEvictionInfo:(id)a0;
- (unsigned long long)_evictDownloadedFilesWithEvictionInfo:(id)a0;
- (id)volumeIndexForDeviceID:(id)a0;
- (BOOL)updateAssetHandlesForGetMMCSItems:(id)a0 cloneItems:(BOOL)a1 error:(id *)a2;
- (id)trackCachedButNotRegisteredMMCSItems:(id)a0 error:(id *)a1;
- (id)mmcsEngineContext;
- (id)existingEntriesForRegisterOrPutHandles:(id)a0 volumeIndex:(id)a1;
- (BOOL)startTrackingGetAssetHandles:(id)a0 operationType:(long long)a1 error:(id *)a2;
- (void)_scheduleEvictionForDownloadedFiles;
- (void).cxx_destruct;

@end
