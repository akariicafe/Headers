@class PAImageConversionServiceClient, NSString, PAVideoConversionServiceClient, PLPhotoLibraryPathManager, PLPhotoLibraryBundle;

@interface PLSyndicationResourceDataStore : PLResourceDataStore <PLSyndicationSanitizedResourceGeneratorDelegate, PLResourceDataStore> {
    PLPhotoLibraryBundle *_libraryBundle;
    PAImageConversionServiceClient *_imageConversionServiceClient;
    PAVideoConversionServiceClient *_videoConversionServiceClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

+ (void)_provideFileURLAndUnwrapLivePhotoIfNeededForBundleID:(id)a0 syndicationIdentifier:(id)a1 isLivePhoto:(BOOL)a2 options:(long long)a3 completionHandler:(id /* block */)a4;
+ (unsigned short)storeClassID;
+ (long long)_provideOptionsFromRequestOptions:(id)a0;
+ (BOOL)markResource:(id)a0 purgeableAndLocallyAvailableWithFileURL:(id)a1 error:(id *)a2;
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)a0;
+ (id)supportedRecipes;
+ (BOOL)_safeCopyItemAtURL:(id)a0 toURLAndReplaceIfNeeded:(id)a1 error:(id *)a2;
+ (BOOL)_markResourceAsLocallyAvailableWithURL:(id)a0 resource:(id)a1 inode:(unsigned long long)a2 error:(id *)a3;
+ (BOOL)_unpackPVTBundleAtURL:(id)a0 primaryURL:(id *)a1 secondaryURL:(id *)a2 error:(id *)a3;
+ (void)provideFileURLAndUnwrapLivePhotoIfNeededForBundleID:(id)a0 itemIdentifiers:(id)a1 destURLs:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;

- (id)imageConversionClientForResourceGenerator:(id)a0;
- (id)_requestLocalAvailabilityChangeForSyndicationOriginalResource:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (id)virtualResourcesForAsset:(id)a0;
- (id)requestLocalAvailabilityChange:(short)a0 forResource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (BOOL)dataStoreSubtypeIsDownloadable:(long long)a0;
- (id)videoConversionClientForResourceGenerator:(id)a0;
- (id)updateDerivativeResourcesForAsset:(id)a0 forLifecycleEvent:(unsigned int)a1;
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (id)_getDestinationURLAndFixLocalAvailabilityIfNeededForResource:(id)a0 isLocallyAvailable:(BOOL *)a1;
- (BOOL)_copyAndMarkPurgeableItemAtURL:(id)a0 toURL:(id)a1 inode:(unsigned long long *)a2 error:(id *)a3;
- (BOOL)canStoreExternalResource:(id)a0;
- (BOOL)_copyAndMarkAsLocallyAvailablePairedLivePhotoResourceForRequestedResource:(id)a0 requestedVideoComplement:(BOOL)a1 sourceURL:(id)a2 error:(id *)a3;
- (id)keyFromKeyStruct:(const void *)a0;
- (BOOL)storeExternalResource:(id)a0 forAsset:(id)a1 inContext:(id)a2 options:(id)a3 error:(id *)a4 resultingResource:(id *)a5;
- (id)metadataForResourceGenerator:(id)a0 fromFileURL:(id)a1;
- (void).cxx_destruct;
- (BOOL)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)a0;
- (BOOL)canStreamResource:(id)a0;
- (id)resourceDataForKey:(id)a0 assetID:(id)a1;
- (id)name;
- (id)resourceURLForKey:(id)a0 assetID:(id)a1;
- (BOOL)videoResource:(id)a0 matchesOrExceedsQualityLevel:(unsigned int)a1;
- (id)descriptionForSubtype:(long long)a0;

@end
