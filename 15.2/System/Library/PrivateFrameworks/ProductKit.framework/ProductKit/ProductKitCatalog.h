@class ProductKitCatalogInternal;

@interface ProductKitCatalog : NSObject

@property (readonly, nonatomic) ProductKitCatalogInternal *underlyingObject;

+ (BOOL)isProductKitURL:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)updateCatalogWithCompletionHandler:(id /* block */)a0;
- (void)watchBandImageForFeatureWithURL:(id)a0 featureString:(id)a1 completionHandler:(id /* block */)a2;
- (void)watchBandFilesForFeatureWithURL:(id)a0 featureString:(id)a1 completionHandler:(id /* block */)a2;
- (void)selectTestingAssetManager;

@end
