@class NSString, NSMutableDictionary, QLCacheIndexDatabase, QLCacheMMAPBlobDatabase, NSLock;
@protocol QLDiskCacheDelegate;

@interface QLDiskCache : NSObject {
    QLCacheIndexDatabase *_indexDatabase;
    QLCacheMMAPBlobDatabase *_blobDatabase;
    NSString *_dirtyFilePath;
    NSString *_exclusivePath;
    NSString *_resetFilePath;
    NSString *_resetReasonPath;
    BOOL _dirtyForDelegate;
    NSLock *_databaseLock;
    int _exclusiveFD;
}

@property BOOL metaDataDirty;
@property (retain) NSMutableDictionary *metaData;
@property (retain) NSString *metaDataFilePath;
@property (readonly, nonatomic) BOOL hasDirtyLock;
@property (readonly) BOOL isOpened;
@property (readonly) NSString *path;
@property (readonly) float fragmentation;
@property (readonly) unsigned long long reserveBufferCount;
@property (readonly) unsigned long long reserveBufferSize;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long maxSize;
@property (readonly) unsigned long long maxThumbnailLifeTime;
@property (weak) id<QLDiskCacheDelegate> delegate;
@property (readonly) unsigned long long fileEntryCount;
@property (readonly) unsigned long long thumbnailCount;
@property (readonly) long long writingCount;

+ (id)defaultLocation;
+ (void)setupCacheAtLocationIfNecessary:(id)a0;
+ (void)setCacheLocationForTesting:(id)a0;

- (void)checkpoint;
- (void)do:(id /* block */)a0;
- (void)close;
- (void).cxx_destruct;
- (unsigned long long)cleanup;
- (void)reset;
- (BOOL)_open;
- (void)_close;
- (BOOL)open;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (unsigned long long)removeThumbnailsOlderThanDate:(id)a0;
- (id)lastCrapWithDate:(id *)a0;
- (void)updateHitCount:(id)a0 forFileIdentifier:(id)a1;
- (void)removeFilesWithFileInfo:(id)a0;
- (BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)a0;
- (unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)a0;
- (void)noteRemoteThumbnailMissingForItems:(id)a0;
- (void)noteRemoteThumbnailPresentForItems:(id)a0;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)a0;
- (id)checkConsistency;
- (id)indexDatabase;
- (id)blobDatabase;
- (id)enumeratorForThumbnailRequests:(id)a0;
- (BOOL)doReading:(id /* block */)a0;
- (BOOL)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (void)writeThumbnailDataBatch:(id)a0;
- (unsigned long long)cleanupDeletedFiles;
- (BOOL)doWriting:(id /* block */)a0;
- (void)discardThumbnailDataBatchForReset:(id)a0;
- (id)reserveBufferWithLength:(unsigned long long)a0;
- (BOOL)validateReservedBuffer:(id)a0;
- (BOOL)discardReservedBuffer:(id)a0;
- (void)_createDirtyLockInformDelegate:(BOOL)a0;
- (void)_removeDirtyLock;
- (BOOL)_setThumbnailData:(id)a0;
- (void)_discardThumbnailDataForReset:(id)a0;
- (unsigned long long)_deleteBlobArrayFromDatabase:(id)a0;
- (void)_closeWhatIsOpen;
- (void)_resetWithReason:(id)a0;
- (void)_cleanupForceResetAtNextLaunch;
- (void)setMetaData:(id)a0 forKey:(id)a1;
- (id)_checkConsistency;
- (id)initWithPathLocation:(id)a0 cacheSize:(long long)a1 cacheThread:(id)a2;
- (id)enumeratorForAllFilesUbiquitousFiles:(BOOL)a0 withExtraInfo:(BOOL)a1;
- (id)enumeratorForAllThumbnailsWithFileIdentifier:(id)a0;
- (void)_cleanupDirtyLock;
- (void)forceResetAtNextLaunch;
- (unsigned long long)freeDiskSpaceForNewThumbnails;
- (id)metaDataForKey:(id)a0;
- (id)reserveBufferForData:(id)a0;
- (id)lastResetWithDate:(id *)a0;

@end
