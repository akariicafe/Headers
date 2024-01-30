@class NSString, PLPhotoLibraryPathManager;

@interface PLResourceDataStore : NSObject <PLResourceDataStore>

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned short)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (BOOL)isMasterThumbRecipeID:(unsigned int)a0;
+ (BOOL)keyDataIsValid:(id)a0;
+ (id)supportedRecipes;

- (id)initWithPathManager:(id)a0;
- (id)virtualResourcesForAsset:(id)a0;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (BOOL)canStoreExternalResource:(id)a0;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 inContext:(id)a4 clientBundleID:(id)a5 completion:(id /* block */)a6;
- (id)keyFromKeyStruct:(const void *)a0;
- (id)guessUTIForExternalResource:(id)a0 forAssetKind:(short)a1 managedObjectContext:(id)a2;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 inContext:(id)a2 options:(id)a3 error:(id *)a4 resultingResource:(id *)a5;
- (void).cxx_destruct;
- (BOOL)verifyAndFixLocalAvailabilityForResource:(id)a0;
- (BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (BOOL)canStreamResource:(id)a0;
- (BOOL)supportsTimeRange;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (id)name;
- (id)resourceURLForKey:(id)a0 assetID:(id)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (id)descriptionForSubtype:(long long)a0;

@end
