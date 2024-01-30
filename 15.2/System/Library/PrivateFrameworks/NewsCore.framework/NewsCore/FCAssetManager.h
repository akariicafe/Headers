@class FCMapTable, NSString, FCCacheCoordinator, NFUnfairLock, FCKeyValueStore, NSURL, FCNetworkBehaviorMonitor, FCAssetStore, NSObject;
@protocol OS_dispatch_queue, FCAVAssetFactoryType, FCAssetKeyManagerType;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing> {
    BOOL _shouldUseSecureConnectionForCKAssetDownloads;
    NSString *_name;
    NSString *_parentDirectory;
    FCKeyValueStore *_keyValueStore;
    FCAssetStore *_assetStore;
    FCCacheCoordinator *_cacheCoordinator;
    FCMapTable *_assetHandles;
    NFUnfairLock *_assetHandlesLock;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    id<FCAssetKeyManagerType> _keyManager;
    NSObject<OS_dispatch_queue> *_initQueue;
    NSURL *_directoryURLForCachedAssets;
    id<FCAVAssetFactoryType> _avAssetFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)saveWithCompletionHandler:(id /* block */)a0;
- (id)assetHandleForCKAssetURLString:(id)a0 prefetchedData:(id)a1 unzipIfNeeded:(BOOL)a2 lifetimeHint:(long long)a3;
- (id)initWithName:(id)a0 directory:(id)a1 keyManager:(id)a2 avAssetFactory:(id)a3 networkBehaviorMonitor:(id)a4;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (id)assetHandleForRecordID:(id)a0 field:(long long)a1 lifetimeHint:(long long)a2 contentDatabase:(id)a3;
- (id)importAsset:(id)a0 remoteURL:(id)a1 fileURL:(id)a2;
- (id)assetHandleForURL:(id)a0 lifetimeHint:(long long)a1;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (id)assetHandleForResourceID:(id)a0 lifetimeHint:(long long)a1 contentContext:(id)a2;
- (id)operationToFetchDataProviderForAssetHandle:(id)a0 completion:(id /* block */)a1;
- (void)t_save;
- (id)assetHandleForCKAssetURL:(id)a0 lifetimeHint:(long long)a1;
- (id)interestTokenForAssetURLs:(id)a0;
- (id)assetHandleForResourceID:(id)a0 contentContext:(id)a1;
- (id)assetHandleForCKAssetURLString:(id)a0 lifetimeHint:(long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (id)assetHandleForURL:(id)a0 prefetchedFileURL:(id)a1 importMethod:(long long)a2 lifetimeHint:(long long)a3;
- (id)contentArchiveForAssetHandle:(id)a0;
- (void)d_resetAssetHandle:(id)a0;

@end
