@class NSString, NSHashTable;
@protocol NUDocumentSectionBlueprintProvider, SXAppStateMonitor, NUArticleScrollPositionManagerType, NUArticlePrefetcherType, TFResolver, NUArticleDataProviderFactory, NUSpotlightManager, NUArticleKeyCommandManager;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory>

@property (readonly, nonatomic) id<NUArticleDataProviderFactory> articleDataProviderFactory;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<NUArticleKeyCommandManager> keyCommandManager;
@property (readonly, nonatomic) id<TFResolver> resolver;
@property (readonly, nonatomic) id<NUDocumentSectionBlueprintProvider> headerBlueprintProvider;
@property (readonly, nonatomic) id<NUArticlePrefetcherType> articlePrefetcher;
@property (readonly, nonatomic) id<NUArticleScrollPositionManagerType> articleScrollPositionManager;
@property (readonly, nonatomic) id<NUSpotlightManager> spotlightManager;
@property (readonly, nonatomic) NSHashTable *loadingListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)createArticleViewControllerWithArticle:(id)a0 issue:(id)a1 context:(id)a2 relativePriority:(long long)a3 articleHostViewController:(id)a4;
- (id)initWithArticleDataProviderFactory:(id)a0 appStateMonitor:(id)a1 keyCommandManager:(id)a2 headerBlueprintProvider:(id)a3 articlePrefetcher:(id)a4 articleScrollPositionManager:(id)a5 spotlightManager:(id)a6 resolver:(id)a7;

@end
