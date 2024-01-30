@class PLDeferredPhotoFinalizer, NSString, PLPhotoLibraryPathManager, PAImageConversionServiceClient, PAVideoConversionServiceClient, NSMutableDictionary, NSDictionary, PLPrimaryResourceDataStoreKeyHelper, PLCloudPhotoLibraryManager;

@interface PLPrimaryResourceDataStore : PLResourceDataStore <PLResourceDataStore> {
    NSMutableDictionary *_makeAvailableProgressByTaskIdentifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    PLDeferredPhotoFinalizer *_deferredPhotoFinalizer;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

@property (retain, nonatomic) PLPrimaryResourceDataStoreKeyHelper *mainScopeKeyHelper;
@property (retain, nonatomic) NSDictionary *keyHelperByBundleScope;
@property (readonly, getter=_cplManager) PLCloudPhotoLibraryManager *cplManager;
@property (nonatomic) unsigned int masterThumbRecipeID;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedRecipes;
+ (unsigned short)storeClassID;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (unsigned int)currentDeviceMasterThumbRecipeID;

- (void)installFinalizedResourcesAndGenerateDeferredAdjustmentIfNecessary:(id)a0 resourceID:(id)a1 libraryServicesManager:(id)a2 imageConversionServiceClient:(id)a3 videoConversionServiceClient:(id)a4 needsDeferredAdjustment:(BOOL)a5 taskIdentifier:(id)a6 mediaConversionRequestReason:(id)a7 completion:(id /* block */)a8;
- (void)_generateDeferredAdjustmentForAsset:(id)a0 imageConversionServiceClient:(id)a1 videoConversionServiceClient:(id)a2 reason:(id)a3 taskIdentifier:(id)a4 cplResourceType:(unsigned long long)a5 version:(unsigned int)a6 completion:(id /* block */)a7;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (void)_cancelAvailabilityRequestWithTaskIdentifier:(id)a0;
- (void)_downloadCPLResource:(id)a0 options:(id)a1 taskDidBeginHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)_installFinalizedInternalResourcesIfResourceUrlIsNotPresent:(id)a0 taskIdentifier:(id)a1 error:(id *)a2;
- (id)_cplResourceIfDownloadIsAvailableForResource:(id)a0 asset:(id)a1 options:(id)a2;
- (BOOL)canStoreExternalResource:(id)a0;
- (id)_deferredPhotoFinalizer;
- (id)keyHelperForBundleScope:(unsigned short)a0;
- (id)_expectedFileURLForMasterThumbnailForAsset:(id)a0;
- (BOOL)bailOutOfVideoFinalizationForAsset:(id)a0 taskIdentifier:(id)a1 error:(id *)a2;
- (BOOL)_taskIsPendingPhotoFinalizationWithIdentifier:(id)a0;
- (BOOL)_isSystemLibraryStore;
- (void)_verifyResourceLocalAvailability:(id)a0 localResourceFileURL:(id *)a1 resourceReapirNeeded:(long long *)a2;
- (id)getClosestResourceMatchingCPLResourceType:(unsigned long long)a0 version:(unsigned int)a1 asset:(id)a2;
- (id)_finalizeDeferredResource:(id)a0 asset:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 options:(id)a2 error:(id *)a3 resultingResource:(id *)a4;
- (id)virtualResourcesForAsset:(id)a0;
- (id)_masterThumbnailVirtualResourceForAsset:(id)a0;
- (id)expectedFileURLForResource:(id)a0 asset:(id)a1;
- (id)initWithPathManager:(id)a0;
- (void)dealloc;
- (BOOL)_taskIsPendingDownloadWithIdentifier:(id)a0;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a3 streamingHints:(id)a4 inContext:(id)a5 clientBundleID:(id)a6 completion:(id /* block */)a7;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (void)_transitionTaskToInflightWithIdentifier:(id)a0;
- (id)_makeResourceLocallyAvailable:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)keyFromKeyStruct:(const void *)a0;
- (BOOL)supportsTimeRange;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)a0 givenFilePath:(id)a1;
- (BOOL)canStreamResource:(id)a0;
- (id)descriptionForSubtype:(long long)a0;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (id)_videoConversionServiceClient;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (id)_newProgressForTaskWithIdentifier:(id)a0 type:(long long)a1;
- (id)_imageConversionServiceClient;
- (void).cxx_destruct;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)name;
- (id)resourceURLForKey:(id)a0 assetID:(id)a1;

@end
