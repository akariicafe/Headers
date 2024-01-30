@class NSString, FCCacheCoordinator, NSURL, FCKeyValueStore, NFUnfairLock;

@interface FCAVAssetCache : NSObject <FCCacheCoordinatorDelegate, FCAVAssetCacheType, FCCacheFlushing>

@property (readonly, copy, nonatomic) NSString *cacheDirectory;
@property (readonly, nonatomic) NFUnfairLock *initializationLock;
@property (readonly, nonatomic) FCKeyValueStore *metadataStore;
@property (readonly, copy, nonatomic) NSURL *contentDirectoryURL;
@property (readonly, nonatomic) FCCacheCoordinator *cacheCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)cacheCoordinatorCurrentSizeWithReadLock:(id)a0;
- (void)enableFlushingWithFlushingThreshold:(unsigned long long)a0;
- (id)interestTokenForAssetIdentifier:(id)a0;
- (BOOL)containsAssetWithIdentifier:(id)a0;
- (id)importAVAsset:(id)a0;
- (id)contentKeyIdentifiersForAssetIdentifier:(id)a0;
- (id)contentKeyIdentifiersForAllAssets;
- (void)adoptFileAtURL:(id)a0 forAssetIdentifier:(id)a1 remoteURL:(id)a2 contentKeyIdentifiers:(id)a3 extension:(id)a4;
- (void)_prepareForUse;
- (id)cachedFileURLForAssetIdentifier:(id)a0;
- (void)_initStores;
- (id)contentArchiveForAssetIdentifier:(id)a0;
- (void)cacheCoordinator:(id)a0 flushKeysWithWriteLock:(id)a1;
- (id)initWithCacheDirectory:(id)a0;
- (id)interestTokenForAssetIdentifiers:(id)a0;

@end
