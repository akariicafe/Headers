@interface PXStoryRecipeClipUtilities : NSObject

+ (BOOL)canRotateAsset:(id)a0;
+ (BOOL)asset:(id)a0 isClassifiedAs:(id)a1;
+ (BOOL)assetHasHighCurationScore:(id)a0;
+ (BOOL)assetHasSignificantFaceArea:(id)a0;
+ (BOOL)assetIsPet:(id)a0;
+ (BOOL)assetIsPortrait:(id)a0;
+ (BOOL)canRotate1UpClipsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 clipCatalog:(id)a1 maxAdjacent1Ups:(long long)a2;
+ (id)doNotRotateSceneIdentifiers;
+ (id)doNotRotateWithSkySceneIdentifiers;
+ (id)peopleSceneIdentifiers;
+ (id)petSceneIdentifiers;
+ (id)skySceneIdentifiers;

@end
