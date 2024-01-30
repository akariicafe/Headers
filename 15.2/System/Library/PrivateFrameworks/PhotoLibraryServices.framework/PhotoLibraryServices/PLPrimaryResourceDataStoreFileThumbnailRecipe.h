@interface PLPrimaryResourceDataStoreFileThumbnailRecipe : PLPrimaryResourceDataStoreImageRecipe

@property (nonatomic) unsigned int recipeID;

- (id)uti;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (double)_longSideTargetLength;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 deferredPhotoFinalizer:(id)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)description;
- (BOOL)_isAspectShortSizing;
- (id)initWithRecipeID:(unsigned int)a0;
- (double)_shortSideTargetLength;
- (struct CGSize { double x0; double x1; })sizeForAssetWidth:(long long)a0 height:(long long)a1;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)supportedVersionsForLocalResourceGeneration;

@end
