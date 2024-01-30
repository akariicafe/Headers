@class NSString;

@interface HDDataEntity : HDHealthEntity <HDSQLiteEntity>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)indices;
+ (BOOL)addCodableObject:(id)a0 toCollection:(id)a1;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)codableObjectsFromObjectCollection:(id)a0;
+ (id)insertDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 persistentID:(id)a3 error:(id *)a4;
+ (id)deleteStatementsForRelatedEntitiesWithTransaction:(id)a0;
+ (BOOL)isConcreteEntity;
+ (id)databaseTable;
+ (BOOL)acceptsObject:(id)a0;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id /* block */)objectInsertionFilterForProfile:(id)a0;
+ (BOOL)replaceExistingObject:(id)a0 existingObjectID:(id)a1 replacementObject:(id)a2 replacementObjectID:(id)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (id)joinClausesForProperty:(id)a0;
+ (Class)_entityClassForDeletion;
+ (id)mergeDataObject:(id)a0 provenance:(id)a1 profile:(id)a2 transaction:(id)a3 error:(id *)a4 insertHandler:(id /* block */)a5;
+ (BOOL)supportsObjectMerging;
+ (id)propertyForSyncProvenance;
+ (BOOL)participatesInInsertion;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (BOOL)requiresSampleTypePredicate;
+ (BOOL)isBackedByTable;
+ (long long)protectionClass;
+ (long long)compareForReplacmentWithObject:(id)a0 existingObject:(id)a1;
+ (long long)countOfObjectsWithPredicate:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)entityEnumeratorWithProfile:(id)a0;
+ (id)defaultForeignKey;
+ (id)predicateMatchingPreferredEntityTypeIfRequiredWithPredicate:(id)a0;
+ (long long)preferredEntityType;
+ (Class)baseDataEntityClass;
+ (id)anyInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2;
+ (id)sourceIDsForObjectsOfType:(long long)a0 profile:(id)a1 predicate:(id)a2 error:(id *)a3;
+ (Class)_deletedEntityClass;
+ (BOOL)enumerateAssociatedObjectsForIdentifier:(long long)a0 inDatabase:(id)a1 error:(id *)a2 associatedObjectHandler:(id /* block */)a3;
+ (id)columnNamesForTimeOffset;
+ (id)objectWithUUID:(id)a0 encodingOptions:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_insertDataObject:(id)a0 withProvenanceID:(id)a1 inDatabase:(id)a2 error:(id *)a3;
+ (BOOL)_shouldReplaceExistingObject:(id)a0 withObject:(id)a1 dataEntityClass:(Class)a2;
+ (long long)shouldInsertObject:(id)a0 sourceID:(id)a1 profile:(id)a2 transaction:(id)a3 objectToReplace:(id *)a4 objectID:(id *)a5 error:(id *)a6;
+ (id)_primitiveInsertDataObject:(id)a0 insertionContext:(id)a1 entityClass:(Class)a2 provenanceEntityID:(long long)a3 profile:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (BOOL)_validateObjectsToInsert:(id)a0 insertionContext:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_insertDataObject:(id)a0 insertionContext:(id)a1 provenanceEntityID:(long long)a2 profile:(id)a3 transaction:(id)a4 insertedEntityID:(id *)a5 error:(id *)a6;
+ (BOOL)journalObjects:(id)a0 insertionContext:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_sourceBundleIdentifierForSourceEntities:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_objectWithPredicate:(id)a0 encodingOptions:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)_insertBaseDataObject:(id)a0 withProvenance:(id)a1 inDatabase:(id)a2 error:(id *)a3;
+ (BOOL)_removeObjectWithPersistentID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (void)insertDataObjects:(id)a0 insertionContext:(id)a1 profile:(id)a2 completionHandler:(id /* block */)a3;
+ (void)deleteDataObjects:(id)a0 restrictedSourceEntities:(id)a1 failIfNotFound:(BOOL)a2 profile:(id)a3 recursiveDeleteAuthorizationBlock:(id /* block */)a4 completionHandler:(id /* block */)a5;
+ (id)dataEntityForObject:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)sourceIDForObjectID:(id)a0 type:(long long)a1 profile:(id)a2 errorOut:(id *)a3;
+ (id)predicateForObjectsFromLocalSourceWithBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)objectWithID:(id)a0 encodingOptions:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)generateSyncObjectsForSession:(id)a0 syncEntityClass:(Class)a1 predicate:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 profile:(id)a4 messageHandler:(id)a5 error:(id *)a6;


@end
