@class NSString, NSHashTable;
@protocol NUArticleAdManagerFactory, NFResolver, NUDocumentSectionBlueprintProvider, SXAppStateMonitor, NUArticleDataProviderFactory, NUArticlePrefetcherType, NUArticleScrollPositionManagerType, NUSpotlightManager, NUArticleKeyCommandManager;

@interface NUArticleViewControllerFactory : NSObject <NUArticleViewControllerFactory>

@property (readonly, nonatomic) id<NUArticleDataProviderFactory> articleDataProviderFactory;
@property (readonly, nonatomic) id<NUArticleAdManagerFactory> articleAdManagerFactory;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<NUArticleKeyCommandManager> keyCommandManager;
@property (readonly, nonatomic) id<NFResolver> resolver;
@property (readonly, nonatomic) id<NUDocumentSectionBlueprintProvider> headerBlueprintProvider;
@property (readonly, nonatomic) id<NUArticlePrefetcherType> articlePrefetcher;
@property (readonly, nonatomic) id<NUArticleScrollPositionManagerType> articleScrollPositionManager;
@property (readonly, nonatomic) id<NUSpotlightManager> spotlightManager;
@property (readonly, nonatomic) NSHashTable *loadingListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
