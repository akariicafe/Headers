@interface PLResourceGenerator : NSObject

+ (id)expectedLocalResourceRecipesForAssetWithLibraryID:(id)a0 versions:(id)a1 assetHasAdjustments:(BOOL)a2 isDefaultAdjustedSlomo:(BOOL)a3 assetIsRAWOrRawPlugJPEGWithRawOnTop:(BOOL)a4 assetWidth:(long long)a5 assetHeight:(long long)a6 assetKind:(short)a7 assetkindSubtype:(short)a8 deferredProcessingNeeded:(unsigned short)a9 videoDeferredProcessingNeeded:(unsigned short)a10;
+ (id)expectedLocalResourceRecipesForAsset:(id)a0 versions:(id)a1;
+ (id)generateAndStoreMissingExpectedLocalResourcesForAsset:(id)a0 versions:(id)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 reason:(id)a4 completion:(id /* block */)a5;
+ (void)_continueGeneratingResourcesForAsset:(id)a0 versions:(id)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 remainingRecipes:(id)a4 storedRecipes:(id)a5 attemptedRecipes:(id)a6 errorsEncountered:(id)a7 progress:(id)a8 reason:(id)a9 completion:(id /* block */)a10;
+ (id)fileAndTableBackedThumbnailManagerRecipesForLibraryID:(id)a0;
+ (id)locallyUnavailableRecipesFromRecipes:(id)a0 versions:(id)a1 asset:(id)a2;

@end
