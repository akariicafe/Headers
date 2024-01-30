@class NSArray, FCFlintResourceManager, NSMutableDictionary, SXContext, FCAsyncOnceOperation;

@interface NUANFAssetLoader : NSObject

@property (retain, nonatomic) SXContext *context;
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) NSArray *resourceIDs;
@property (retain, nonatomic) NSMutableDictionary *fetchedResourceIDs;
@property (retain, nonatomic) FCAsyncOnceOperation *assetURLsOperation;
@property (readonly, nonatomic) FCAsyncOnceOperation *assetsOperation;
@property (nonatomic) long long relativePriority;

- (void).cxx_destruct;
- (id)assetDownloadOperationForResource:(id)a0 completion:(id /* block */)a1;
- (id)asyncLoadAssetURLsOnceWithCompletion:(id /* block */)a0;
- (id)asyncLoadAssetsOnceWithCompletion:(id /* block */)a0;
- (id)fallbackResourceForID:(id)a0;
- (id)initWithContext:(id)a0 flintResourceManager:(id)a1;
- (id)loadAssetURLsWithCompletion:(id /* block */)a0;
- (id)loadAssetWithURL:(id)a0 completion:(id /* block */)a1;
- (id)loadAssetsWithCompletion:(id /* block */)a0;
- (id)resourceForID:(id)a0;
- (id)resourceIDForResourceURL:(id)a0;

@end
