@protocol FCContentContext;

@interface FCFlintResourceManager : NSObject

@property (readonly, nonatomic) id<FCContentContext> context;

- (id)initWithContext:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 cacheLifetimeHint:(long long)a2 relativePriority:(long long)a3 callBackQueue:(id)a4 completionBlock:(id /* block */)a5;
- (id)fetchFontResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 callBackQueue:(id)a3 completionBlock:(id /* block */)a4;
- (id)cachedResourceWithIdentifier:(id)a0;
- (id)cachedResourcesWithIdentifiers:(id)a0;
- (id)fetchResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 callBackQueue:(id)a3 completionBlock:(id /* block */)a4;

@end
