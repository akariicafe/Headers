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

- (id)dictionary;
- (id)content;
- (id)archiveData;
- (id)bundle;
- (id)dataForBundleResource:(id)a0;
- (void)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4 withCompletion:(id /* block */)a5;
- (void)revocationStatusWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1;
- (id)dataForBundleResources:(id)a0;
- (void)dealloc;
- (void)contentWithCompletion:(id /* block */)a0;
- (id)init;
- (id)displayProfileOfType:(long long)a0;
- (id)imageSetForType:(long long)a0 screenScale:(double)a1 suffix:(id)a2 displayProfile:(id)a3 preheat:(BOOL)a4;
- (id)passLocalizedStringForKey:(id)a0;
- (id)dataForBundleResourceNamed:(id)a0 withExtension:(id)a1;
- (void).cxx_destruct;
- (BOOL)remoteAssetsDownloadedForSEIDs:(id)a0;
- (void)_downloadRemoteAssetsWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)dictionaryWithCompletion:(id /* block */)a0;
- (id)initWithFileURL:(id)a0 error:(id *)a1 coordinator:(id)a2;
- (id)manifestHash;
- (id)remoteAssetManager;
- (id)remoteAssetManagerForSEIDs:(id)a0;
- (BOOL)remoteAssetsDownloadedForScreenScale:(double)a0 seids:(id)a1 suffix:(id)a2;
- (id)resourceValueForKey:(id)a0;
- (id)serializedFileWrapper;

@end
