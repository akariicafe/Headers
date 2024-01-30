@interface PLResourceGenerator : NSObject

+ (void)_continueGeneratingResourcesForAsset:(id)a0 versions:(id)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 remainingRecipes:(id)a4 storedRecipes:(id)a5 attemptedRecipes:(id)a6 errorsEncountered:(id)a7 progress:(id)a8 reason:(id)a9 completion:(id /* block */)a10;
+ (id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)a0 versions:(id)a1 assetHasAdjustments:(BOOL)a2 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)a3 assetWidth:(long long)a4 assetHeight:(long long)a5 assetKind:(short)a6 assetkindSubtype:(short)a7;
+ (id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)a0;
+ (id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)a0 versions:(id)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 reason:(id)a4 completion:(id /* block */)a5;
+ (id)expectedLocalResourceRecipesForAsset:(id)a0 versions:(id)a1;
+ (id)locallyUnavailableRecipesFromRecipes:(id)a0 versions:(id)a1 asset:(id)a2;

@end
