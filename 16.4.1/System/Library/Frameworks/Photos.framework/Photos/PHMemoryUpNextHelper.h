@interface PHMemoryUpNextHelper : NSObject

+ (BOOL)_hasInvalidMemoryTriggerForMemory:(id)a0;
+ (BOOL)_isAcceptableUserFeedbackForMemory:(id)a0 keyAsset:(id)a1 userFeedbackCalculator:(id)a2;
+ (BOOL)_isMomentFetchResult:(id)a0 overlappingWithFetchResults:(id)a1;
+ (id)_memoryTriggerTypesToAvoid;
+ (id)fetchFallbackMemoriesForMemory:(id)a0 targetCount:(unsigned long long)a1 memoryLocalIdentifiersToAvoid:(id)a2 error:(id *)a3;
+ (id)fetchFallbackMemoriesForMemory:(id)a0 targetCount:(unsigned long long)a1 memoryLocalIdentifiersToAvoid:(id)a2 sharingFilter:(unsigned short)a3 error:(id *)a4;
+ (id)fetchFallbackMemoryCandidatesInPhotoLibrary:(id)a0 memoryLocalIdentifiersToAvoid:(id)a1 sharingFilter:(unsigned short)a2;
+ (BOOL)isMomentFetchResult:(id)a0 overlappingWithFetchResult:(id)a1;

@end
