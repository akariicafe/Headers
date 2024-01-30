@class NSData, NSBundle, PKRemoteAssetManager;

@interface PKDataAccessor : NSObject

@property (readonly, nonatomic) NSData *manifestHash;
@property (readonly, nonatomic) NSData *archiveData;
@property (readonly, nonatomic) NSData *serializedFileWrapper;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) PKRemoteAssetManager *remoteAssetManager;
@property (readonly, nonatomic) BOOL remoteAssetsDownloaded;

- (id)dictionary;
- (id)content;
- (id)dataForBundleResource:(id)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (id)dataForBundleResources:(id)a0;
- (void)contentWithCompletion:(id /* block */)a0;
- (id)displayProfileOfType:(long long)a0;
- (void)requestUpdateWithCompletion:(id /* block */)a0;
- (void)noteShared;
- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (id)passLocalizedStringForKey:(id)a0;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (void)updateSettings:(unsigned long long)a0;
- (id)cachedImageSetForType:(long long)a0 withDisplayProfile:(id)a1 displayTraits:(id)a2;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (void)_downloadRemoteAssetsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)dictionaryWithCompletion:(id /* block */)a0;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)a0 completion:(id /* block */)a1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)a0 seids:(id)a1 completion:(id /* block */)a2;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)a0;
- (void)downloadRemoteAssetsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 completion:(id /* block */)a3;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 seids:(id)a3 completion:(id /* block */)a4;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 completion:(id /* block */)a2;
- (id)imageSetForType:(long long)a0 displayProfile:(id)a1 preheat:(BOOL)a2;
- (void)imageSetForType:(long long)a0 displayProfile:(id)a1 preheat:(BOOL)a2 withCompletion:(id /* block */)a3;
- (id)remoteAssetManagerForSEIDs:(id)a0;
- (BOOL)remoteAssetsDownloadedForScreenScale:(double)a0 suffix:(id)a1;
- (id)resourceValueForKey:(id)a0;

@end
