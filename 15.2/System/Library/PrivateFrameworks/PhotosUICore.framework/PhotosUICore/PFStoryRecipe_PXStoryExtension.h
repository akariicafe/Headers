@class NSString;

@interface PFStoryRecipe_PXStoryExtension : NSObject

@property (class, readonly, nonatomic) NSString *schemeForPHAssets;
@property (class, readonly, nonatomic) NSString *schemeForSyntheticAssets;

+ (BOOL)recipeContainsAnyDisplayAsset:(id)a0;
+ (id)displayAssetsInRecipe:(id)a0 withCategory:(long long)a1 error:(id *)a2;
+ (BOOL)addDisplayAssets:(id)a0 toRecipe:(id)a1 withCategory:(long long)a2 error:(id *)a3;
+ (id)flexFetchQueue;
+ (id)requestAudioAssetFromRecipeAsset:(id)a0 recipe:(id)a1 resultHandler:(id /* block */)a2;
+ (id)recipeAssetFromAudioAsset:(id)a0 withCategory:(long long)a1 subcategory:(long long)a2 error:(id *)a3;
+ (BOOL)_recipe:(id)a0 isReferencingPHPhotoLibrary:(id)a1;
+ (BOOL)_recipe:(id)a0 setPHPhotoLibrary:(id)a1 error:(id *)a2;
+ (id)PHPhotoLibraryForRecipe:(id)a0;
+ (id)recipe:(id)a0 withPHPhotoLibrary:(id)a1 error:(id *)a2;
+ (BOOL)addPHAssets:(id)a0 toRecipe:(id)a1 withCategory:(long long)a2 error:(id *)a3;
+ (id)PHAssetsInRecipe:(id)a0 withCategory:(long long)a1 error:(id *)a2;
+ (void)enumerateDisplayAssetsFromRecipe:(id)a0 usingBlock:(id /* block */)a1;
+ (BOOL)addSyntheticAssets:(id)a0 toRecipe:(id)a1 withCategory:(long long)a2 error:(id *)a3;
+ (id)syntheticAssetsInRecipe:(id)a0 withCategory:(long long)a1 error:(id *)a2;

@end
