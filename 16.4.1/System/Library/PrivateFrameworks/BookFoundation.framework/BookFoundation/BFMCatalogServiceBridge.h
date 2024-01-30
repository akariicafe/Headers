@class BFMCatalogService;

@interface BFMCatalogServiceBridge : NSObject

@property (retain, nonatomic) BFMCatalogService *service;

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)fetchMixedAssetsWithBookIds:(id)a0 audiobookIds:(id)a1 relationships:(id)a2 views:(id)a3 additionalParameters:(id)a4 batchSize:(long long)a5 completionHandler:(id /* block */)a6;
- (void)fetchMixedSeriesWithBookSeriesIds:(id)a0 audiobookSeriesIds:(id)a1 relationships:(id)a2 views:(id)a3 additionalParameters:(id)a4 batchSize:(long long)a5 completionHandler:(id /* block */)a6;
- (void)fetchResourcesWithAdamIDs:(id)a0 relationships:(id)a1 views:(id)a2 additionalParameters:(id)a3 batchSize:(long long)a4 completionHandler:(id /* block */)a5;
- (id)initWithBridgedConfig:(id)a0;

@end
