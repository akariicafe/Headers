@class NSString, NSArray, NSSet;

@interface PLDuplicateDetectorMetadata : NSObject <PLDuplicateDetector> {
    NSArray *_sourceAssetOIDs;
    NSSet *_combinedLimitedSelectionIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_addFingerprint:(id)a0 oid:(id)a1 map:(id)a2;
- (void)_buildAdjustedFingerprintMapWithPrimaryStoreFullsizeFingerprintResults:(id)a0 mutableOIDFingerprintMap:(id)a1 filterOnCPLResourceType:(unsigned long long)a2;
- (id)_combinedIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)a0;
- (id)_fingerprintIsValidPredicate;
- (id)_fingerprintRequestWithPhotoLibrary:(id)a0;
- (id)_fullSizePreviewFingerprintRequestWithPhotoLibrary:(id)a0;
- (id)_fullSizePreviewPredicateWithPhotoLibrary:(id)a0;
- (id)_fullSizePropertiesToFetch;
- (id)_fullsizeFingerprintIsValidFullSizePredicate;
- (id)_fullsizeIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)a0;
- (id)_generateDuplicateContainerFromResults:(id)a0 fullsizeFingerprintResults:(id)a1;
- (id)_limitedSelectionFullSizePredicateWithPhotoLibrary:(id)a0;
- (id)_limitedSelectionPredicateWithPhotoLibrary:(id)a0;
- (id)_originalsIdentifiersFromLimitedSelectionWithPhotoLibrary:(id)a0;
- (BOOL)_postProcessDuplicateWithPhotoLibrary:(id)a0 resultContainer:(id)a1 error:(id *)a2;
- (id)_postProcessFetchMetadataWithPhotoLibrary:(id)a0 resultContainer:(id)a1 error:(id *)a2;
- (id)_postProcessingRequestWithDuplicateAssetOIDs:(id)a0 pathManager:(id)a1;
- (id)_predicateWithPhotoLibrary:(id)a0;
- (id)_propertiesToFetch;
- (id)detectDuplicatesWithPhotoLibrary:(id)a0 error:(id *)a1;
- (id)initWithSourceAssetOIDs:(id)a0;

@end
