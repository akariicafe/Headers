@class NULinkedContentManager, NSString, FCArticle, NSArray;
@protocol NUEmbedDataManager;

@interface NUBundledArticleDataProvider : NSObject <SXResourceDataSource, SXEmbedDataProvider, NUFontRegistrator, NUArticleDataProvider>

@property (readonly, nonatomic) id<NUEmbedDataManager> embedDataManager;
@property (readonly, nonatomic) NULinkedContentManager *linkedContentManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) FCArticle *article;
@property (readonly, nonatomic) NSArray *linkedContentProviders;
@property (nonatomic) long long relativePriority;

- (void).cxx_destruct;
- (void)loadContextWithCompletionBlock:(id /* block */)a0;
- (void)cancelAssetPrefetch;
- (id)embedForType:(id)a0;
- (id)fileURLForBundleURL:(id)a0;
- (void)fileURLForURL:(id)a0 onCompletion:(id /* block */)a1 onError:(id /* block */)a2;
- (id)initWithArticle:(id)a0 embedDataManager:(id)a1 linkedContentManager:(id)a2;
- (id /* block */)loadImagesForImageRequest:(id)a0 completionBlock:(id /* block */)a1;
- (void)performBlockForFontsInBundle:(id /* block */)a0;
- (void)prefetchAssets;
- (void)registerFontsWithCompletion:(id /* block */)a0;
- (id)translateURL:(id)a0;

@end
