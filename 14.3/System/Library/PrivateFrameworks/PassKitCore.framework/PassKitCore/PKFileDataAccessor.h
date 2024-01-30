@class PKDirectoryCoordinator, NSArray, NSURL, PKRemoteAssetManager;

@interface PKFileDataAccessor : PKDataAccessor {
    PKDirectoryCoordinator *_coordinator;
    BOOL _remoteAssetManagerAccessed;
    PKRemoteAssetManager *_remoteAssetManager;
    NSArray *_seids;
}

@property (nonatomic) BOOL ownsFileURL;
@property (readonly, nonatomic) NSURL *fileURL;

- (id)init;
- (void).cxx_destruct;
- (id)dictionary;
- (id)bundle;
- (void)dealloc;
- (id)initWithFileURL:(id)a0 error:(id *)a1 coordinator:(id)a2;
- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (id)manifestHash;
- (BOOL)remoteAssetsDownloadedForScreenScale:(double)a0 seids:(id)a1 suffix:(id)a2;
- (id)remoteAssetManagerForSEIDs:(id)a0;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (void)contentWithCompletion:(id /* block */)a0;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 completion:(id /* block */)a3;
- (void)dictionaryWithCompletion:(id /* block */)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (id)resourceValueForKey:(id)a0;
- (id)dataForBundleResource:(id)a0;
- (id)dataForBundleResources:(id)a0;
- (id)serializedFileWrapper;
- (id)remoteAssetManager;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (id)displayProfileOfType:(long long)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)archiveData;
- (id)content;
- (id)passLocalizedStringForKey:(id)a0;

@end
