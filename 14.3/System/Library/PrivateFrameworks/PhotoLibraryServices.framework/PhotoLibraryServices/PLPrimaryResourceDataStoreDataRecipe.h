@interface PLPrimaryResourceDataStoreDataRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)utiInContext:(id)a0;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)description;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 progress:(id *)a4 reason:(id)a5 completion:(id /* block */)a6;
- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)codecInContext:(id)a0;
- (id)initWithRecipeID:(unsigned int)a0;

@end
