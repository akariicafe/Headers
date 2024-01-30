@class NSString, PLPhotoLibraryPathManager;

@interface PLSharedStreamsDataStore : PLResourceDataStore <PLResourceDataStore>

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedRecipes;
+ (unsigned int)_masterThumbRecipeID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (unsigned int)storeClassID;

- (id)resourceURLForKey:(id)a0 assetID:(id)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (BOOL)_isDerivativeForSharedStreamsType:(unsigned int)a0;
- (short)_remoteAvailabilityForType:(unsigned int)a0;
- (id)descriptionForSubtype:(long long)a0;
- (id)virtualResourcesForAsset:(id)a0;
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)a0;
- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)a0;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (id)_utiStringForAsset:(id)a0 type:(unsigned int)a1;
- (short)_localAvailabilityForAsset:(id)a0 album:(id)a1 type:(unsigned int)a2;
- (id)_sharedStreamsExternalResourceForAsset:(id)a0 album:(id)a1 type:(unsigned int)a2;
- (void)_prepareForDownloadNotification:(id)a0 atFileURL:(id)a1 completion:(id /* block */)a2;
- (BOOL)canStreamResource:(id)a0;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (id)keyFromKeyStruct:(const void *)a0;
- (id)name;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 inContext:(id)a3 clientBundleID:(id)a4 completion:(id /* block */)a5;
- (unsigned int)_mainResourceTypeForAsset:(id)a0;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 inContext:(id)a2 options:(id)a3 error:(id *)a4 resultingResource:(id *)a5;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)canStoreExternalResource:(id)a0;

@end
