@interface PLResourceInstaller : NSObject

+ (id)onDemand_installOriginalSOCVideoPresentForAsset:(id)a0 referencedResourceURLs:(id)a1;
+ (void)_applyColorSpaceAndCodecToNonDerivativeExternalResource:(id)a0 fromCloudMaster:(id)a1 originalColorSpace:(id)a2;
+ (id)onDemand_installOriginalVideoComplementResourceIfPresentForAsset:(id)a0;
+ (BOOL)_installInternalResourcesForExistingAsset:(id)a0 assumeNoExistingResources:(BOOL)a1 referencedResourceURLs:(id)a2 includeLegacyCloudResources:(BOOL)a3 outResourcesStoreCount:(unsigned long long *)a4 error:(id *)a5;
+ (id)validatedExternalResourceFromExternalResourceCloudAttributes:(id)a0 cplType:(unsigned long long)a1 assetType:(short)a2 uti:(id)a3 originalOrientation:(unsigned int)a4 orientation:(unsigned int)a5 originalColorSpace:(id)a6 resourceWidth:(unsigned long long)a7 resourceHeight:(unsigned long long)a8 assetWidth:(unsigned long long)a9 assetHeight:(unsigned long long)a10 resourceFingerprint:(id)a11 resourceSize:(unsigned long long)a12 isAvailable:(BOOL)a13 fromAdjustedSet:(BOOL)a14 resourceURL:(id)a15 cloudMaster:(id)a16 isForMigration:(BOOL)a17 context:(id)a18;
+ (unsigned int)resourceTypeFromCPLType:(unsigned long long)a0 assetType:(short)a1;
+ (id)onDemand_installAdjustedFullSizeVideoComplementResourceIfPresentForAsset:(id)a0;
+ (id)generateValidatedExternalImageResourceOfType:(unsigned int)a0 forFilePath:(id)a1 requireFileToBePresent:(BOOL)a2 version:(unsigned int)a3 basedOnFullSizeWidth:(long long)a4 andHeight:(long long)a5 isNativeColorSpace:(BOOL)a6 isLosslessEncoding:(BOOL)a7 recipe:(id)a8 assetKind:(short)a9 context:(id)a10 error:(id *)a11;
+ (id)onDemand_installPrimaryImageResourceWithRecipe:(id)a0 version:(unsigned int)a1 forAsset:(id)a2;
+ (id)generateExternalResourceFromCPLResource:(id)a0 cloudMaster:(id)a1 masterResources:(id)a2;
+ (BOOL)removeLegacyCloudResourcesInStore:(id)a0 migrator:(id)a1;
+ (id)externalResourcesForExistingAsset:(id)a0 referencedResourceURLs:(id)a1;
+ (BOOL)resetImageRequestHintsInContext:(id)a0;
+ (id)onDemand_installAdjustedDeferredFullSizeVideoComplementResourceForAsset:(id)a0;
+ (BOOL)_isPenultimateVersionFromCPLType:(unsigned long long)a0;
+ (void)onDemand_installAdjustedFullSizeRenderResourceAtFilePath:(id)a0 forAsset:(id)a1;
+ (void)_recipeAndDerivativeStateFromCPLResourceType:(unsigned long long)a0 fromAdjustedSet:(BOOL)a1 assetType:(short)a2 recipeID:(unsigned int *)a3;
+ (unsigned int)resourceVersionFromCPLType:(unsigned long long)a0 fromAdjustedSet:(BOOL)a1;
+ (BOOL)installInternalResourcesForExistingAssetsWithNoExistingResourcesInManagedObjectContext:(id)a0 migrator:(id)a1;
+ (BOOL)isValidCPLResourceTypeForPersistence:(unsigned long long)a0;
+ (id)onDemand_installOriginalAdjustmentResourceIfPresentForAsset:(id)a0;
+ (BOOL)installInternalResourcesForExistingAsset:(id)a0 assumeNoExistingResources:(BOOL)a1 referencedResourceURLs:(id)a2 error:(id *)a3;
+ (unsigned int)recipeIDFromCPLResourceType:(unsigned long long)a0 assetType:(short)a1 fromAdjustedSet:(BOOL)a2;
+ (void)_applyColorSpaceAndCodecUsingFileToExternalResource:(id)a0 managedObjectContext:(id)a1;
+ (id)onDemand_installPrimaryImageResourceWithRecipe:(id)a0 version:(unsigned int)a1 forAsset:(id)a2 requireFileToBePresent:(BOOL)a3;
+ (void)_applyImageIOMetadataToExternalResource:(id)a0 fromFileURL:(id)a1 assumedWidth:(long long)a2 assumedHeight:(long long)a3 recipe:(id)a4 assetKind:(short)a5 context:(id)a6;
+ (BOOL)resetInternalResourcesInStore:(id)a0 resetUTIs:(BOOL)a1 resetCodecs:(BOOL)a2 resetMasters:(BOOL)a3 migrator:(id)a4;
+ (id)onDemand_installOriginalVideoComplementForSyndicationAsset:(id)a0 contentType:(id)a1;
+ (id)onDemand_installOriginalSOCVideoComplementPresentForAsset:(id)a0 referencedResourceURLs:(id)a1;
+ (unsigned long long)nonDerivativeCPLTypeFromResourceType:(unsigned int)a0 version:(unsigned int)a1 uniformTypeIdentifier:(id)a2;
+ (id)generateVideoResourcesFromVideoAsset:(id)a0 referencedVideoPath:(id)a1;
+ (void)_applyImageOrientationToExternalResource:(id)a0 originalOrientation:(unsigned int)a1 assetOrienation:(unsigned int)a2;
+ (BOOL)recoverSupplementalResourcesForAsset:(id)a0 usingSidecarFinder:(id)a1 outResourcesStoreCount:(unsigned long long *)a2 error:(id *)a3;
+ (id)onDemand_installOriginalResourceForSyndicationAsset:(id)a0;
+ (id)_speculativePathForPenultimateFullsizeRenderImageFileForAsset:(id)a0;
+ (id)validatedExternalResourceForLocalVideoIfPresentAtPath:(id)a0 context:(id)a1;
+ (id)onDemand_installOriginalSOCImagePresentForAsset:(id)a0 referencedResourceURLs:(id)a1;
+ (unsigned long long)derivativeCPLTypeFromRecipeID:(unsigned int)a0 version:(unsigned int)a1;
+ (BOOL)reconsiderSavedAssetTypeInStore:(id)a0 migrator:(id)a1;
+ (id)onDemand_installExistingAdjustedResourceAtFilePath:(id)a0 withType:(unsigned int)a1 recipe:(id)a2 forAsset:(id)a3 error:(id *)a4;
+ (id)_predicateForUnrecoverableResources;
+ (id)_validatedExternalResourcesFromLocalImageOrVideoAsset:(id)a0 referencedResourceURLs:(id)a1;
+ (id)_validatedExternalResourcesFromSharedStreamAsset:(id)a0;
+ (id)generateAdjustedFullSizeRenderResourceForFilePath:(id)a0 requireFileToBePresent:(BOOL)a1 basedOnFullSizeWidth:(long long)a2 andHeight:(long long)a3 context:(id)a4;
+ (id)_validatedExternalResourceIfPresentForAudioOrUnknownAsset:(id)a0;
+ (id)onDemand_installLocalVideoKeyFrameForAsset:(id)a0;
+ (unsigned long long)_getURLDataLength:(id)a0;
+ (BOOL)installSupplementalResourceForExistingFileAtURL:(id)a0 ptpTrashedState:(long long)a1 index:(id)a2 forAsset:(id)a3 imageOrientation:(id)a4 resultingResource:(id *)a5 error:(id *)a6;
+ (BOOL)createInternalResourcesForExistingAssetsWithNoExistingResourcesInStore:(id)a0 migrator:(id)a1;
+ (id)generateValidatedExternalOtherResourceOfType:(unsigned int)a0 forFilePath:(id)a1 uti:(id)a2 requireFileToBePresent:(BOOL)a3 version:(unsigned int)a4;
+ (id)generateExternalResourceFromCPLResource:(id)a0 asset:(id)a1 fromAdjustedSet:(BOOL)a2;
+ (id)_validatedExternalResourceFromSupplementalFileURL:(id)a0 withUTI:(id)a1 ptpTrashedState:(long long)a2 index:(id)a3 asset:(id)a4;

@end
