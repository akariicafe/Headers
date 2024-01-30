@class NSSet, NSCache;

@interface MiroMetadataManager : VEiOSSharedObject {
    NSCache *_assetMetadataCache;
}

@property (weak, nonatomic) NSSet *suggestions;

+ (id)sharedManager;
+ (void)clearStaticCache;
+ (void)purgeSharedInstance;

- (void)clearCaches;
- (void).cxx_destruct;
- (id)init;
- (id)metadataForAssetID:(id)a0;
- (void)analyzeLoudnessForRanges:(id)a0 ofAssets:(id)a1;
- (void)setMetadata:(id)a0 forAssetID:(id)a1;
- (void)analyzeLoudnessForRanges:(id)a0 ofAssets:(id)a1 progressHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (void)analyzeAssets:(id)a0 ranges:(id)a1 types:(unsigned long long)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)analyzeAsset:(id)a0 ranges:(id)a1 types:(unsigned long long)a2 progressHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)analyzeColorForAsset:(id)a0 progressHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (id)clipSuggestionRangesForAsset:(id)a0;
- (id)analyzeColorForAsset:(id)a0;

@end
