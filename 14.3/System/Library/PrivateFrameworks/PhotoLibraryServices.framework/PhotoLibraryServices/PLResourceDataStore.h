@class NSString, PLPhotoLibraryPathManager;

@interface PLResourceDataStore : NSObject <PLResourceDataStore>

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedRecipes;
+ (BOOL)isMasterThumbRecipeID:(unsigned int)a0;
+ (BOOL)keyDataIsValid:(id)a0;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (unsigned int)storeClassID;

- (id)initWithPathManager:(id)a0;
- (id)resourceURLForKey:(id)a0 assetID:(id)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (id)descriptionForSubtype:(long long)a0;
- (void).cxx_destruct;
- (id)virtualResourcesForAsset:(id)a0;
- (id)guessUTIForExternalResource:(id)a0 forAssetKind:(short)a1 managedObjectContext:(id)a2;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (BOOL)verifyAndFixLocalAvailabilityForResource:(id)a0;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (BOOL)canStreamResource:(id)a0;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (id)keyFromKeyStruct:(const void *)a0;
- (id)name;
- (BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 inContext:(id)a3 clientBundleID:(id)a4 completion:(id /* block */)a5;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 inContext:(id)a2 options:(id)a3 error:(id *)a4 resultingResource:(id *)a5;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)canStoreExternalResource:(id)a0;

@end
