@class PKDirectoryCoordinator, NSArray, NSMutableDictionary, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface PKRemoteAssetManager : NSObject {
    PKDirectoryCoordinator *_coordinator;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_manifestItemsByRelativeURL;
    NSMutableDictionary *_sha1HexFromRelativeManifest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_completionHandlers;
}

@property (copy, nonatomic) NSArray *seids;

- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 completion:(id /* block */)a2;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)a0;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 completion:(id /* block */)a3;
- (id)initWithFileURL:(id)a0;
- (id)itemWithRelativePath:(id)a0;
- (BOOL)hasEncryptedDeviceSpecificItemWithRelativePath:(id)a0;
- (id)sha1HexFromRelativeManifestWithRelativePath:(id)a0;
- (id)remoteAssetManifests;
- (id)pendingRemoteAssetsItemsForScreenScale:(double)a0 suffix:(id)a1;
- (BOOL)addRemoteAssetData:(id)a0 forManifestItem:(id)a1 error:(id *)a2;
- (void)_downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 completion:(id /* block */)a3;
- (void)_callCompletionHandlersWithFinishState:(BOOL)a0 progress:(float)a1 error:(id)a2;
- (void)_downloadRemoteAssetItem:(id)a0 withCloudStoreCoordinatorDelegate:(id)a1 shouldWriteData:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)addRemoteAssetData:(id)a0 shouldWriteData:(BOOL)a1 forManifestItem:(id)a2 error:(id *)a3;
- (void)_flushBundleCaches;
- (id)deviceSpecificItems;
- (id)pendingRemoteAssetsItems;
- (void)downloadRemoteAssetItem:(id)a0 withCloudStoreCoordinatorDelegate:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (id)deviceSpecificItemsForScreenScale:(double)a0 suffix:(id)a1;
- (BOOL)assetExistsLocally:(id)a0;
- (id)initWithDirectoryCoordinator:(id)a0;

@end
