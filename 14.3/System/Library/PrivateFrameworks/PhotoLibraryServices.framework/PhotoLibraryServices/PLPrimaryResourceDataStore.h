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
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (unsigned int)storeClassID;
+ (unsigned int)currentDeviceMasterThumbRecipeID;

- (id)initWithPathManager:(id)a0;
- (id)_makeResourceLocallyAvailable:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)resourceURLForKey:(id)a0 assetID:(id)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (id)descriptionForSubtype:(long long)a0;
- (void).cxx_destruct;
- (void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResource:(id)a0 givenFilePath:(id)a1;
- (void)dealloc;
- (id)virtualResourcesForAsset:(id)a0;
- (id)_deferredPhotoFinalizer;
- (BOOL)_isSystemLibraryStore;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (BOOL)_taskIsPendingPhotoFinalizationWithIdentifier:(id)a0;
- (id)_expectedFilePathForMasterThumbnailForAsset:(id)a0;
- (id)keyHelperForBundleScope:(unsigned char)a0;
- (id)_imageConversionServiceClient;
- (void)_cancelAvailabilityRequestWithTaskIdentifier:(id)a0;
- (id)_finalizeDeferredAsset:(id)a0 forWide:(BOOL)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (void)_transitionTaskToInflightWithIdentifier:(id)a0;
- (BOOL)canStreamResource:(id)a0;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (id)keyFromKeyStruct:(const void *)a0;
- (id)name;
- (BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (id)_masterThumbnailVirtualResourceForAsset:(id)a0;
- (void)_pruneResource:(id)a0 completion:(id /* block */)a1;
- (void)requestStreamingURLForResource:(id)a0 asset:(id)a1 intent:(unsigned long long)a2 inContext:(id)a3 clientBundleID:(id)a4 completion:(id /* block */)a5;
- (BOOL)_taskIsPendingDownloadWithIdentifier:(id)a0;
- (id)_videoConversionServiceClient;
- (id)_newProgressForTaskWithIdentifier:(id)a0 type:(long long)a1;
- (void)_downloadCPLResource:(id)a0 options:(id)a1 taskDidBeginHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 inContext:(id)a2 options:(id)a3 error:(id *)a4 resultingResource:(id *)a5;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)canStoreExternalResource:(id)a0;

@end
