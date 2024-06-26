@class NSLock, NSString, QLDiskCacheQueryOperation, QLCacheCleanUpDatabaseThread, QLMemoryCache, NSOperationQueue, NSObject, QLServerThread, QLDiskCache;
@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_transaction;

@interface _QLCacheThread : NSObject <QLDiskCacheDelegate> {
    NSOperationQueue *_memoryCacheQueryOperationQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSObject<OS_dispatch_queue> *_writeCoalesceQueue;
    id /* block */ _writeBlocks[10];
    id /* block */ _cleanupBlocks[10];
    NSObject<OS_dispatch_source> *_drainTimer;
    NSObject<OS_os_transaction> *_writeTransaction;
}

@property (retain) NSObject<OS_dispatch_source> *lowDiskSpaceSource;
@property (retain) NSObject<OS_dispatch_queue> *lowDiskSpaceSourceQueue;
@property (retain) NSLock *modeLock;
@property (retain) QLDiskCacheQueryOperation *currentDiskCacheQueryOperation;
@property (retain) NSOperationQueue *diskCacheQueryOperationQueue;
@property BOOL serverThreadIsIdle;
@property (readonly) unsigned long long currentMode;
@property unsigned long long missedCount;
@property unsigned long long hitCount;
@property BOOL waitingForCleanup;
@property (retain) QLCacheCleanUpDatabaseThread *cleanUpDatabaseThread;
@property (weak) QLServerThread *serverThread;
@property (readonly) QLMemoryCache *memoryCache;
@property (readonly) QLDiskCache *diskCache;
@property (readonly) BOOL lowDiskSpace;
@property (readonly) NSString *modeDescription;
@property (nonatomic) BOOL shouldRemoveThumbnailsForDeletedFiles;

+ (long long)defaultCacheSize;

- (void)_setMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)forceCommit;
- (BOOL)isIdle;
- (void)reset;
- (void)updateMode;
- (id)cacheInfo;
- (BOOL)addThumbnailRequest:(id)a0;
- (void)startWriting;
- (void)_updateMode;
- (BOOL)setLastHitDateOfAllCachedThumbnailsToDate:(id)a0;
- (void)noteRemoteThumbnailMissingForItems:(id)a0;
- (void)noteRemoteThumbnailPresentForItems:(id)a0;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)a0;
- (long long)purgeableSpaceOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (long long)purgeOnMountPoint:(id)a0 withUrgency:(int)a1 beforeDate:(id)a2;
- (void)_thumbnailHasBeenCancelled:(id)a0;
- (void)_addThumbnailRequestIntoDiskCacheQueryQueue:(id)a0;
- (void)_dispatchThumbnailRequestInServerThread:(id)a0;
- (void)_sendThumbnailData:(id)a0 forThumbnailRequest:(id)a1;
- (id)initWithServerThread:(id)a0 cacheSize:(long long)a1 location:(id)a2;
- (void)openCache;
- (void)serverIsWorking;
- (BOOL)addThumbnailIntoCache:(id)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 bitsPerComponent:(unsigned long long)a3 bitsPerPixel:(unsigned long long)a4 bytesPerRow:(unsigned long long)a5 bitmapInfo:(unsigned int)a6 bitmapData:(id)a7 metadata:(id)a8 flavor:(int)a9 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a10 badgeType:(unsigned long long)a11 externalGeneratorDataHash:(unsigned long long)a12;
- (void)enqueueWriting:(id /* block */)a0;
- (void)serverIsIdle;
- (BOOL)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)a0;
- (void)_cleanUpDatabaseDone;
- (unsigned long long)hitToSaveCount;
- (void)databaseCorruptionDetected;
- (void)stopWriting;
- (void)_drainPendingBlocks;
- (void)_unscheduleBlockDrain;
- (void)_scheduledDrainPendingBlocks;
- (void)_drainPendingBlocksNow;
- (void)_scheduleBlockDrain;
- (void)_setLowDiskSpace:(BOOL)a0;
- (void)_updateLowDisk;
- (void)closeCache;
- (void)_waitForEndOfDatabaseCleanup;
- (void)forceCommitAndClose;
- (void)_registerMachPortForLowDiskSpaceNotification;
- (void)_unregisterMachPortForLowDiskSpaceNotification;
- (void)_destroyDrainTimer;
- (BOOL)_shouldQuitWorkingModeForMode:(unsigned long long)a0;
- (BOOL)_shouldQuitLowSpaceModeForMode:(unsigned long long)a0;
- (BOOL)_shouldQuitPauseModeForMode:(unsigned long long)a0;
- (BOOL)_shouldQuitClosedModeForMode:(unsigned long long)a0;
- (BOOL)_shouldQuitResetingModeForMode:(unsigned long long)a0;
- (BOOL)_shouldQuitCleanUpDatabaseModeForMode:(unsigned long long)a0;
- (void)_willStartWorkingModeFromMode:(unsigned long long)a0;
- (void)_willStartLowSpaceModeFromMode:(unsigned long long)a0;
- (void)_willStartPauseModeFromMode:(unsigned long long)a0;
- (void)_willStartClosedModeFromMode:(unsigned long long)a0;
- (void)_willStartResetingModeFromMode:(unsigned long long)a0;
- (void)_willStartCleanUpDatabaseModeFromMode:(unsigned long long)a0;
- (id)_allThumbnailsEnumerateWithEnumerator:(id)a0;
- (id)allThumbnailsForFileIdentifier:(id)a0;
- (BOOL)addNoThumbnailIntoCache:(id)a0;
- (unsigned long long)thumbnailInMemoryToSaveCount;
- (BOOL)isCacheOpened;
- (void)prepareToExit;
- (void)exitImmediately;
- (id)contentDescriptionForURL:(struct __CFURL { } *)a0;
- (id)allThumbnailsInfo;
- (id)allThumbnailsForIno:(unsigned long long)a0 fsid:(struct fsid { int x0[2]; })a1;
- (id)allThumbnailsForFPItemID:(id)a0;

@end
