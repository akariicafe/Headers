@class NUANFAssetLoader, NSString, FCFlintResourceManager, FCANFContent, NSOperationQueue, SXContext, FCAsyncOnceOperation;
@protocol SXHost, FCHeadlineProviding, NUArticleResourceURLTranslator;

@interface NUANFContextLoader : NSObject <SXResourceDataSource>

@property (readonly, nonatomic) FCANFContent *anfContent;
@property (readonly, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (readonly, nonatomic) id<SXHost> host;
@property (readonly, nonatomic) id<NUArticleResourceURLTranslator> resourceURLTranslator;
@property (retain, nonatomic) SXContext *context;
@property (retain, nonatomic) NUANFAssetLoader *assetLoader;
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation;
@property (readonly, nonatomic) NSOperationQueue *imageDecodingQueue;
@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, nonatomic) BOOL hasLoaded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id /* block */)loadImagesForImageRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)translateURL:(id)a0;
- (void)fileURLForURL:(id)a0 onCompletion:(id /* block */)a1 onError:(id /* block */)a2;
- (id)asyncLoadContextOnceWithCompletion:(id /* block */)a0;
- (id)fallbackResourceForImageRequest:(id)a0 originalResource:(id)a1;
- (id)initWithANFContent:(id)a0 flintResourceManager:(id)a1 host:(id)a2 resourceURLTranslator:(id)a3 headline:(id)a4;
- (id)loadContextWithCompletion:(id /* block */)a0;

@end
