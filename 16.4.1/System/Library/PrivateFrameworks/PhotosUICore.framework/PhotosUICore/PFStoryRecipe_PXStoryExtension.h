@class NSString;

@interface PFStoryRecipe_PXStoryExtension : NSObject

@property (class, readonly, nonatomic) NSString *schemeForPHAssets;
@property (class, readonly, nonatomic) NSString *schemeForSyntheticAssets;

+ (id)PHAssetsInRecipe:(id)a0 withCategory:(long long)a1 error:(id *)a2;
+ (id)PHPhotoLibraryForRecipe:(id)a0;
+ (BOOL)_recipe:(id)a0 isReferencingPHPhotoLibrary:(id)a1;
+ (BOOL)_recipe:(id)a0 setPHPhotoLibrary:(id)a1 error:(id *)a2;
+ (BOOL)addDisplayAssets:(id)a0 toRecipe:(id)a1 withCategory:(long long)a2 error:(id *)a3;
+ (BOOL)addPHAssets:(id)a0 toRecipe:(id)a1 withCategory:(long long)a2 error:(id *)a3;
+ (BOOL)addSyntheticAssets:(id)a0 toRecipe:(id)a1 withCategory:(long long)a2 error:(id *)a3;
+ (id)displayAssetsInRecipe:(id)a0 withCategory:(long long)a1 error:(id *)a2;
+ (void)enumerateDisplayAssetsFromRecipe:(id)a0 usingBlock:(id /* block */)a1;
+ (id)flexFetchQueue;
+ (id)recipe:(id)a0 withPHPhotoLibrary:(id)a1 error:(id *)a2;
+ (id)recipeAssetFromAudioAsset:(id)a0 withCategory:(long long)a1 subcategory:(long long)a2 error:(id *)a3;
+ (BOOL)recipeContainsAnyDisplayAsset:(id)a0;
+ (id)requestAudioAssetFromRecipeAsset:(id)a0 recipe:(id)a1 resultHandler:(id /* block */)a2;
+ (id)syntheticAssetsInRecipe:(id)a0 withCategory:(long long)a1 error:(id *)a2;

@end
