@interface PLSearchFetchUtilities : NSObject

+ (id)_fetchObjectsForEntityName:(id)a0 predicate:(id)a1 fetchLimit:(unsigned long long)a2 photoLibrary:(id)a3 error:(out id *)a4;
+ (id)_searchRebuildEligibilityPredicateForEntityName:(id)a0;
+ (id)fetchObjectsEligibleForSearchRebuildFromPhotoLibrary:(id)a0 entityName:(id)a1 fetchLimit:(unsigned long long)a2;
+ (id)fetchObjectsWithinObjectIDs:(id)a0 entityName:(id)a1 fetchLimit:(unsigned long long)a2 photoLibrary:(id)a3 error:(out id *)a4;
+ (id)searchIndexingEligibilityPredicateForEntityName:(id)a0;

@end
