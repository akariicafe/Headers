@class NSSet, NSObject;
@protocol NSCopying;

@interface PLBackgroundJobDuplicateDetectorWorker : PLBackgroundJobWorker {
    NSSet *_additionalAttributesPropertiesToInclude;
    NSSet *_additionalAttributesPropertiesToIncludeForMetadataProcessing;
    NSSet *_managedAssetPropertiesToInclude;
    NSSet *_duplicateAlbumPropertiesToInclude;
}

@property (copy) NSObject<NSCopying> *cancelledWorkItem;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (BOOL)_isTokenInvalidError:(id)a0;

- (void)stopWorkingOnItem:(id)a0;
- (id)_transactionIteratorSinceTokenIfValid:(id)a0 library:(id)a1 error:(id *)a2;
- (id)_lastDuplicateDetectorProcessingTokenFromLibrary:(id)a0;
- (BOOL)isInterruptible;
- (id)_validObjectIDFromChange:(id)a0 entityDescriptionMap:(id)a1 requiresFingerprintDedupe:(BOOL *)a2;
- (id)_convertToPLManagedAssetOIDsFromSelectionOIDs:(id)a0 library:(id)a1;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (BOOL)_processDuplicatesWithLimitedSelection:(id)a0 requiresFingerprintDedupe:(BOOL)a1 library:(id)a2 error:(id *)a3 continuationHandler:(id /* block */)a4;
- (id)_managedAssetOIDsFromDuplicateAlbumOIDs:(id)a0 library:(id)a1;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (BOOL)_shouldCancelCurrentWorkItem:(id)a0;
- (void)_resetTokenIfRequiredFromLibrary:(id)a0;
- (BOOL)_hasCompletedPerceptualProcessingWithLibrary:(id)a0;
- (BOOL)_isFullLibraryWorkItem:(id)a0;
- (void)_setLastDuplicateDetectorProcessingToken:(id)a0 isCompleted:(BOOL)a1 library:(id)a2;
- (void)_resetCancelledWorkItem;
- (void)_setTokenMarkerWithPrivateData:(id)a0 value:(BOOL)a1 wellKnownIdentifier:(long long)a2;
- (id)_managedAssetOIDsFromAdditionalAssetAttributesOIDs:(id)a0 library:(id)a1;
- (void)_setupPropertiesWithLibrary:(id)a0;
- (void).cxx_destruct;

@end
