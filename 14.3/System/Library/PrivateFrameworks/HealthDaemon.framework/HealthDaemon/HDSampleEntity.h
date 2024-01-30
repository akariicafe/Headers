@interface HDSampleEntity : HDDataEntity

+ (id)indices;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)databaseTable;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (Class)_entityClassForDeletion;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (BOOL)requiresSampleTypePredicate;
+ (id)samplesWithType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 limit:(unsigned long long)a4 anchor:(id *)a5 error:(id *)a6;
+ (id)mostRecentSampleWithType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 anchor:(id *)a4 error:(id *)a5;
+ (id)entityEnumeratorWithType:(id)a0 profile:(id)a1;
+ (id)minimumSampleStartDateForProfile:(id)a0 error:(id *)a1;
+ (id)anySampleOfType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 error:(id *)a4;
+ (long long)preferredEntityType;
+ (id)sourceIDsForSamplesWithType:(id)a0 profile:(id)a1 predicate:(id)a2 error:(id *)a3;
+ (id)populatedSampleTypes:(id)a0 inDateInterval:(id)a1 profile:(id)a2 error:(id *)a3;
+ (void)deleteSamplesWithPredicate:(id)a0 limit:(unsigned long long)a1 generateDeletedObjects:(BOOL)a2 transaction:(id)a3 profile:(id)a4 recursiveDeleteAuthorizationBlock:(id /* block */)a5 completionHandler:(id /* block */)a6;
+ (void)deleteSamplesWithPredicate:(id)a0 limit:(unsigned long long)a1 deletionContext:(id)a2 completionHandler:(id /* block */)a3;
+ (id)dateIntervalsForSampleTypes:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_predicateWithSampleType:(id)a0 sourceIdentifier:(id)a1 predicate:(id)a2;
+ (Class)_deletedEntityClass;
+ (id)oldestSampleWithType:(id)a0 profile:(id)a1 encodingOptions:(id)a2 predicate:(id)a3 error:(id *)a4;
+ (id)maxAnchorForSamplesWithType:(id)a0 profile:(id)a1 error:(id *)a2;
+ (void)deleteSamplesWithTypes:(id)a0 sourceEntities:(id)a1 profile:(id)a2 recursiveDeleteAuthorizationBlock:(id /* block */)a3 completionHandler:(id /* block */)a4;
+ (BOOL)enumerateAssociatedObjectsForIdentifier:(long long)a0 inDatabase:(id)a1 error:(id *)a2 associatedObjectHandler:(id /* block */)a3;
+ (id)entityEnumeratorWithTypes:(id)a0 profile:(id)a1 error:(id *)a2;
+ (long long)countOfSamplesWithType:(id)a0 profile:(id)a1 matchingPredicate:(id)a2 withError:(id *)a3;
+ (id)sampleTypesForSamplesMatchingPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)columnNamesForTimeOffset;
+ (id)_predicateWithSampleType:(id)a0 predicate:(id)a1;

- (id)_sampleTypeInDatabase:(id)a0;

@end
