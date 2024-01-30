@interface PLResourceRecipe : NSObject <NSCopying>

+ (id)recipeFromID:(unsigned int)a0;
+ (Class)classFromRecipeID:(unsigned int)a0;

- (unsigned int)recipeID;
- (BOOL)isDerivative;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (id)utiInContext:(id)a0;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)maxPixelCountForAssetWidth:(long long)a0 height:(long long)a1;
- (id)expectedSizeFromWidth:(long long)a0 height:(long long)a1;
- (BOOL)colorSpaceIsNativeForDisplay;
- (BOOL)isMarkedFullSize;
- (unsigned long long)hash;
- (void)populateAdjustedRecipeIngredients:(id)a0 asset:(id)a1 version:(unsigned int)a2;
- (unsigned short)recipeClassID;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 progress:(id *)a4 reason:(id)a5 completion:(id /* block */)a6;
- (BOOL)isEqual:(id)a0;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)codecInContext:(id)a0;
- (id)initWithRecipeID:(unsigned int)a0;

@end
