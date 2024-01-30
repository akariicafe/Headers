@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe

@property (nonatomic) unsigned int recipeID;

- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (double)_longSideTargetLength;
- (id)utiInContext:(id)a0;
- (id)supportedVersionsForLocalResourceGeneration;
- (BOOL)_isAspectShortSizing;
- (id)description;
- (double)_shortSideTargetLength;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 progress:(id *)a4 reason:(id)a5 completion:(id /* block */)a6;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForAssetWidth:(long long)a0 height:(long long)a1;
- (id)initWithRecipeID:(unsigned int)a0;

@end
