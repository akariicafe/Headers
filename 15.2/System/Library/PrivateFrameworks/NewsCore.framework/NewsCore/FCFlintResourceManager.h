@protocol FCContentContext;

@interface FCFlintResourceManager : NSObject {
    id<FCContentContext> _context;
}

- (id)cachedResourceWithIdentifier:(id)a0;
- (id)initWithContext:(id)a0;
- (id)cachedResourcesWithIdentifiers:(id)a0;
- (void).cxx_destruct;
- (id)fetchFontResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 callBackQueue:(id)a3 completionBlock:(id /* block */)a4;
- (id)init;
- (id)fetchResourcesWithIdentifiers:(id)a0 downloadAssets:(BOOL)a1 relativePriority:(long long)a2 callBackQueue:(id)a3 completionBlock:(id /* block */)a4;

@end
