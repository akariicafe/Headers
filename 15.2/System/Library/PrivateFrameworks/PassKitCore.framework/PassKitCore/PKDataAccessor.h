@class NSData, NSBundle, PKRemoteAssetManager;

@interface PKDataAccessor : NSObject

@property (readonly, nonatomic) NSData *manifestHash;
@property (readonly, nonatomic) NSData *archiveData;
@property (readonly, nonatomic) NSData *serializedFileWrapper;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) PKRemoteAssetManager *remoteAssetManager;
@property (readonly, nonatomic) BOOL remoteAssetsDownloaded;

- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)a0 seids:(id)a1 completion:(id /* block */)a2;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (id)imageSetForType:(long long)a0 displayProfile:(id)a1 preheat:(BOOL)a2;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 completion:(id /* block */)a2;
- (id)remoteAssetManagerForSEIDs:(id)a0;
- (void)imageSetForType:(long long)a0 displayProfile:(id)a1 preheat:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)noteShared;
- (void)contentWithCompletion:(id /* block */)a0;
- (BOOL)remoteAssetsDownloadedForScreenScale:(double)a0 suffix:(id)a1;
- (id)passLocalizedStringForKey:(id)a0;
- (void)downloadRemoteAssetsWithCompletion:(id /* block */)a0;
- (id)dataForBundleResource:(id)a0;
- (void)requestUpdateWithCompletion:(id /* block */)a0;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (void)downloadRemoteAssetsWithCloudStoreCoordinatorDelegate:(id)a0 completion:(id /* block */)a1;
- (void)updateSettings:(unsigned long long)a0;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 seids:(id)a3 completion:(id /* block */)a4;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 completion:(id /* block */)a3;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (void)dictionaryWithCompletion:(id /* block */)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (id)dataForBundleResources:(id)a0;
- (id)resourceValueForKey:(id)a0;
- (id)cachedImageSetForType:(long long)a0 withDisplayProfile:(id)a1 displayTraits:(id)a2;
- (id)displayProfileOfType:(long long)a0;
- (id)dictionary;
- (id)content;

@end
