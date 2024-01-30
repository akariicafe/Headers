@class NSString, NFUnfairLock, FCCacheCoordinator, FCKeyValueStore, NSURL, FCNetworkBehaviorMonitor, FCAssetStore, NSObject, NSMapTable;
@protocol FCAVAssetFactoryType, OS_dispatch_queue, FCAssetKeyManagerType;

@interface FCAssetManager : NSObject <FCAssetHandleDelegate, FCCacheCoordinatorDelegate, FCCacheFlushing>

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *parentDirectory;
@property (retain, nonatomic) FCKeyValueStore *keyValueStore;
@property (retain, nonatomic) FCAssetStore *assetStore;
@property (retain, nonatomic) FCCacheCoordinator *cacheCoordinator;
@property (retain, nonatomic) NSMapTable *assetHandles;
@property (retain, nonatomic) NFUnfairLock *assetHandlesLock;
@property (retain, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (retain, nonatomic) id<FCAssetKeyManagerType> keyManager;
@property (retain, nonatomic) id<FCAVAssetFactoryType> avAssetFactory;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic) BOOL shouldUseSecureConnectionForCKAssetDownloads;
@property (readonly, nonatomic) NSURL *directoryURLForCachedAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_populateRawFilePathForAssetHandle:(id)a0 completion:(id /* block */)a1;
- (id)assetHandleForURL:(id)a0 prefetchedFileURL:(id)a1 importMethod:(long long)a2 lifetimeHint:(long long)a3;
- (void)saveWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)t_save;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (id)operationToFetchDataProviderForAssetHandle:(id)a0 completion:(id /* block */)a1;
- (void)_fetchDataProviderForAssetHandle:(id)a0 completion:(id /* block */)a1;
- (id)assetHandleForResourceID:(id)a0 lifetimeHint:(long long)a1 contentContext:(id)a2;
- (id)assetHandleForResourceID:(id)a0 contentContext:(id)a1;
- (id)assetHandleForCKAssetURL:(id)a0 lifetimeHint:(long long)a1;
- (id)assetHandleForRecordID:(id)a0 field:(long long)a1 lifetimeHint:(long long)a2 contentDatabase:(id)a3;
- (id)assetHandleForCKAssetURLString:(id)a0 prefetchedData:(id)a1 unzipIfNeeded:(BOOL)a2 lifetimeHint:(long long)a3;
- (void)d_resetAssetHandle:(id)a0;
- (id)initWithName:(id)a0 directory:(id)a1 keyManager:(id)a2 avAssetFactory:(id)a3 networkBehaviorMonitor:(id)a4;
- (BOOL)_dataIsGzipped:(id)a0;
- (id)contentArchiveForAssetHandle:(id)a0;
- (long long)_anefFileDataProviderOptions;
- (id)_assetKeyForRemoteURL:(id)a0;
- (id)assetHandleForCKAssetURLString:(id)a0 lifetimeHint:(long long)a1;
- (id)assetHandleForURL:(id)a0 lifetimeHint:(long long)a1;
- (void)_initStores;
- (id)_transformerForAssetAtPath:(id)a0 mimeType:(id)a1 URL:(id)a2;
- (id)_assetHandleForCKAssetURLComponents:(id)a0 lifetimeHint:(long long)a1;
- (void)_prepareForUseIfNeeded;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (id)importAsset:(id)a0 remoteURL:(id)a1 fileURL:(id)a2;
- (id)_importFileAtPath:(id)a0 method:(long long)a1 key:(id)a2 mimeType:(id)a3 importedMetadata:(id)a4 lifetimeHint:(long long)a5;
- (id)interesetTokenForAssetURLs:(id)a0;

@end
