@interface PLPrimaryResourceDataStoreVideoRecipe : PLResourceRecipe

@property (nonatomic) unsigned int recipeID;

- (id)colorSpaceGivenSourceColorSpace:(id)a0 inContext:(id)a1;
- (id)initWithRecipeID:(unsigned int)a0;
- (id)codecFourCharCodeName;
- (id)chooseIngredientsFrom:(id)a0 version:(unsigned int)a1;
- (id)expectedFileURLForVersion:(unsigned int)a0 asset:(id)a1;
- (BOOL)isMarkedFullSize;
- (id)supportedVersionsForLocalResourceGeneration;
- (id)description;
- (void)generateAndStoreForAsset:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 conversionServiceOptions:(id)a4 deferredPhotoFinalizer:(id)a5 progress:(id *)a6 reason:(id)a7 completion:(id /* block */)a8;
- (id)uti;
- (void)_generateAndStoreUsingMediaConversionServicesForAsset:(id)a0 version:(unsigned int)a1 conversionClient:(id)a2 conversionServiceOptions:(id)a3 isHighPriority:(BOOL)a4 progress:(id *)a5 reason:(id)a6 completion:(id /* block */)a7;
- (id)_mediaConversionServiceOptionsForAsset:(id)a0 conversionServiceOptions:(id)a1 adjustmentData:(id)a2 largeAdjustmentData:(id)a3 isHighPriority:(BOOL)a4 reason:(id)a5;
- (void)generateAndStoreForAssetWithPriority:(id)a0 version:(unsigned int)a1 imageConversionClient:(id)a2 videoConversionClient:(id)a3 isHighPriority:(BOOL)a4 reason:(id)a5 progress:(id *)a6 completion:(id /* block */)a7;

@end
