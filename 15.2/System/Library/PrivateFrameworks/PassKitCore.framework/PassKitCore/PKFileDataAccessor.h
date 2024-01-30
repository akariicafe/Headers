@class PKDirectoryCoordinator, NSString, NSArray, NSURL, PKRemoteAssetManager;

@interface PKFileDataAccessor : PKDataAccessor {
    PKDirectoryCoordinator *_coordinator;
    BOOL _remoteAssetManagerAccessed;
    PKRemoteAssetManager *_remoteAssetManager;
    NSArray *_seids;
}

@property (nonatomic) BOOL ownsFileURL;
@property (copy, nonatomic) NSString *explicitDataTypeIdentifier;
@property (readonly, nonatomic) NSURL *fileURL;

- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (id)remoteAssetManagerForSEIDs:(id)a0;
- (void)contentWithCompletion:(id /* block */)a0;
- (id)passLocalizedStringForKey:(id)a0;
- (id)dataForBundleResource:(id)a0;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (id)serializedFileWrapper;
- (id)initWithFileURL:(id)a0 error:(id *)a1 coordinator:(id)a2;
- (id)archiveData;
- (void)downloadRemoteAssetsWithScreenScale:(double)a0 suffix:(id)a1 cloudStoreCoordinatorDelegate:(id)a2 seids:(id)a3 completion:(id /* block */)a4;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (void)dictionaryWithCompletion:(id /* block */)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (id)dataForBundleResources:(id)a0;
- (id)manifestHash;
- (id)resourceValueForKey:(id)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)remoteAssetManager;
- (id)bundle;
- (id)displayProfileOfType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)remoteAssetsDownloadedForScreenScale:(double)a0 seids:(id)a1 suffix:(id)a2;
- (id)dictionary;
- (void)dealloc;
- (id)content;

@end
