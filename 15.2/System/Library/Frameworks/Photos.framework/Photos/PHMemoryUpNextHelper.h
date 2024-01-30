@interface PHMemoryUpNextHelper : NSObject

+ (id)fetchFallbackMemoriesForMemory:(id)a0 targetCount:(unsigned long long)a1 memoryLocalIdentifiersToAvoid:(id)a2 error:(id *)a3;
+ (BOOL)isMomentFetchResult:(id)a0 overlappingWithFetchResult:(id)a1;
+ (BOOL)_isMomentFetchResult:(id)a0 overlappingWithFetchResults:(id)a1;
+ (BOOL)_hasInvalidMemoryTriggerForMemory:(id)a0;
+ (id)_memoryTriggerTypesToAvoid;
+ (id)fetchFallbackMemoryCandidatesInPhotoLibrary:(id)a0 memoryLocalIdentifiersToAvoid:(id)a1;
+ (BOOL)_isAcceptableUserFeedbackForMemory:(id)a0 keyAsset:(id)a1 userFeedbackCalculator:(id)a2;

@end
