@class NSString, FCArticle;
@protocol NUEmbedDataManager;

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider>

@property (readonly, nonatomic) id<NUEmbedDataManager> embedDataManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) FCArticle *article;

- (void).cxx_destruct;
- (id /* block */)loadImagesForImageRequest:(id)a0 completionBlock:(id /* block */)a1;
- (id)embedForType:(id)a0;
- (id)translateURL:(id)a0;
- (void)fileURLForURL:(id)a0 onCompletion:(id /* block */)a1 onError:(id /* block */)a2;
- (void)registerFontsWithCompletion:(id /* block */)a0;
- (void)prefetchAssets;
- (void)cancelAssetPrefetch;
- (void)loadContextWithCompletionBlock:(id /* block */)a0;
- (void)performBlockForFontsInBundle:(id /* block */)a0;
- (id)fileURLForBundleURL:(id)a0;
- (id)initWithArticle:(id)a0 embedDataManager:(id)a1;

@end
