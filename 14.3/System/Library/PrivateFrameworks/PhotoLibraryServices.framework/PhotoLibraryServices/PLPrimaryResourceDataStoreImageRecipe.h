@interface PLPrimaryResourceDataStoreImageRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

+ (double)_scaleFactorForInputSize:(struct CGSize { double x0; double x1; })a0 maximumPixelCount:(long long)a1;
+ (struct CGSize { double x0; double x1; })scaleOriginalSize:(struct CGSize { double x0; double x1; })a0 toShortSideTarget:(double)a1 maxLongSideLength:(double)a2;
+ (struct CGSize { double x0; double x1; })scaleOriginalSize:(struct CGSize { double x0; double x1; })a0 toLongSideTarget:(double)a1;

- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (id)utiInContext:(id)a0;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)_resourceGenerationAffectsRecipesForLibraryID:(id)a0;
- (id)maxPixelCountForAssetWidth:(long long)a0 height:(long long)a1;
- (id)expectedSizeFromWidth:(long long)a0 height:(long long)a1;
- (id)_mediaConversionServiceOptionsForAsset:(id)a0 adjustmentData:(id)a1 largeAdjustmentData:(id)a2 isHighPriority:(BOOL)a3 reason:(id)a4;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)a0 version:(unsigned int)a1 conversionClient:(id)a2 isHighPriority:(BOOL)a3 progress:(id *)a4 reason:(id)a5 completion:(id /* block */)a6;
- (BOOL)colorSpaceIsNativeForDisplay;
- (BOOL)isMarkedFullSize;
- (void)generateAndStoreForAssetWithPriority:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 isHighPriority:(BOOL)a4 reason:(id)a5 progress:(id *)a6 completion:(id /* block */)a7;
- (id)description;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 progress:(id *)a4 reason:(id)a5 completion:(id /* block */)a6;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)codecInContext:(id)a0;
- (id)initWithRecipeID:(unsigned int)a0;

@end
