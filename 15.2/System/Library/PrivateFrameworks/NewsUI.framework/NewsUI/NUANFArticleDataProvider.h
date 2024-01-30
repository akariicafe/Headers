@class NULinkedContentManager, NSString, NUANFFontLoader, NSArray, NUANFAssetLoader, FCArticle, NFEventManager, NUANFContextLoader;
@protocol NUFontRegistration, FCContentContext, NUEmbedDataManager, SXHost;

@interface NUANFArticleDataProvider : NSObject <NUArticleDataProvider>

@property (copy, nonatomic) NSString *articleID;
@property (readonly, nonatomic) id<FCContentContext> contentContext;
@property (readonly, nonatomic) id<NUFontRegistration> fontRegistration;
@property (readonly, nonatomic) id<SXHost> host;
@property (retain, nonatomic) FCArticle *article;
@property (retain, nonatomic) NUANFFontLoader *fontLoader;
@property (retain, nonatomic) NUANFContextLoader *contextLoader;
@property (retain, nonatomic) NUANFAssetLoader *assetLoader;
@property (retain, nonatomic) id<NUEmbedDataManager> embedDataManger;
@property (retain, nonatomic) NFEventManager *eventManager;
@property (readonly, nonatomic) NULinkedContentManager *linkedContentManager;
@property (readonly, nonatomic) NSArray *linkedContentProviders;
@property (nonatomic) long long relativePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)prefetchAssets;
- (void)cancelAssetPrefetch;
- (void)loadContextWithCompletionBlock:(id /* block */)a0;
- (void)setupAssetPrefetchRequestEventsWithEvents:(id)a0;
- (void)loadArticleWithCompletionBlock:(id /* block */)a0;
- (void)reloadArticleIfNeeded;
- (void)setupAssetPrefetchCancellationWithOperation:(id)a0;
- (id)initWithArticle:(id)a0 contentContext:(id)a1 fontRegistration:(id)a2 host:(id)a3 embedDataManager:(id)a4 linkedContentManager:(id)a5;

@end
