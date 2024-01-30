@interface PEAdjustmentDataCache : NSObject

+ (void)initialize;
+ (id)compositionControllerForAssetIfLoaded:(id)a0 disposition:(long long *)a1;
+ (id)entryForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 disposition:(long long *)a2 originalAdjustmentData:(BOOL)a3;
+ (void)requestCompositionControllerForAsset:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (id)synchronousCompositionControllerForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 disposition:(long long *)a2 originalComposition:(BOOL)a3;
+ (id)synchronousEditorBundleIDForAsset:(id)a0;
+ (struct CGSize { double x0; double x1; })synchronousInputSizeForAsset:(id)a0 disposition:(long long *)a1;

@end
