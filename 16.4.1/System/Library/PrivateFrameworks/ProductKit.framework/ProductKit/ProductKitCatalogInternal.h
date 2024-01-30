@interface ProductKitCatalogInternal : NSObject {
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ catalog;
}

+ (BOOL)isProductKitURL:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)updateCatalogWithCompletionHandler:(id /* block */)a0;
- (void)watchBandImageForFeatureWithURL:(id)a0 featureString:(id)a1 variant:(id)a2 completionHandler:(id /* block */)a3;
- (void)watchBandFilesForFeatureWithURL:(id)a0 featureString:(id)a1 variant:(id)a2 completionHandler:(id /* block */)a3;

@end
