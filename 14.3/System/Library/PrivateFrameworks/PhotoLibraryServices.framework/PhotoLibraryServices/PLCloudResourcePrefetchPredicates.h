@interface PLCloudResourcePrefetchPredicates : NSObject

+ (id)predicatesForWidget:(id)a0 defaultPrefetchMode:(long long)a1;
+ (id)predicatesForMemories:(id)a0 defaultPrefetchMode:(long long)a1;
+ (id)predicatesForThumbnails;
+ (id)predicatesForNonThumbnails:(id)a0 photoLibrary:(id)a1 defaultPrefetchMode:(long long)a2;
+ (id)_predicateToPrefetchHighlightWithUUIDs:(id)a0 photoLibrary:(id)a1;
+ (id)_predicateToPrefetchMemories:(id)a0 photoLibrary:(id)a1;
+ (id)_missingThumbnailConditionString;
+ (id)_predicateForMaxFilesize:(long long)a0;
+ (id)_predicateForResourceCreatedAfterDate:(id)a0;
+ (id)_predicateForImageResourcePixelsLessOrEqual:(long long)a0;
+ (id)_irisConditionString;
+ (id)_excludeMomentShareAssetsString;
+ (id)_assetIsUnadjustedConditionString;
+ (id)_assetPredicateForCPLResourceType:(unsigned long long)a0 additionalAssetConditions:(id)a1 additionalResourcePredicates:(id)a2;
+ (double)_resourceLastPrunedPrefetchTimeInterval;
+ (BOOL)_shouldPrefetchMediums;
+ (id)_masterPredicateForCPLResourceType:(unsigned long long)a0 additionalAssetConditions:(id)a1 additionalResourcePredicates:(id)a2;
+ (id)_prefetchResourceForAsset:(id)a0 inResourceTypes:(id)a1;
+ (id)_resourcesToPrefetchForAsset:(id)a0;
+ (id)_predicateForKeyFacePrefetching:(id)a0;
+ (id)_predicateToPrefetchSuggestions:(id)a0 photoLibrary:(id)a1;
+ (id)_predicateToPrefetchMemoryKeyAssets:(id)a0 photoLibrary:(id)a1;

@end
