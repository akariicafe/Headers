@interface HDAssociationEntity : HDHealthEntity

+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)databaseTable;
+ (id)deleteStatementForObjectAssociationsWithTransaction:(id)a0;
+ (id)associationPropertyForEntityClass:(Class)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (id)privateSubEntities;
+ (BOOL)insertEntriesWithAssociationUUID:(id)a0 objectUUIDsData:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)associateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_insertPendingAssociationsForParentUUID:(id)a0 childUUIDData:(id)a1 provenance:(long long)a2 database:(id)a3 error:(id *)a4;
+ (id)tableAliases;
+ (BOOL)_enumerateAssociationsWithPredicate:(id)a0 syncEntityClass:(Class)a1 session:(id)a2 syncAnchorRange:(struct HDSyncAnchorRange { long long x0; long long x1; })a3 lastSyncAnchor:(long long *)a4 healthDatabase:(id)a5 error:(id *)a6 block:(id /* block */)a7;
+ (id)uniquedColumns;
+ (BOOL)realizePendingAssociationsWithTransaction:(id)a0 startingAnchor:(long long)a1 error:(id *)a2;
+ (BOOL)copyAssociationsFromObjectID:(id)a0 toObjectID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)propertyForSyncProvenance;
+ (BOOL)_insertPendingAssociationForParentUUID:(id)a0 childUUIDBytes:(unsigned char[16])a1 provenance:(long long)a2 database:(id)a3 error:(id *)a4;
+ (id)deleteStatementForAssociationWithTransaction:(id)a0;
+ (BOOL)insertEntriesWithAssociation:(id)a0 objects:(id)a1 enforceSameSource:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)journalEntryForAssociation:(id)a0 objects:(id)a1;
+ (BOOL)_insertEntriesWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 context:(id)a3 error:(id *)a4;
+ (BOOL)_insertEntriesWithParentUUID:(id)a0 childUUIDsData:(id)a1 provenance:(long long)a2 enforceSameSource:(BOOL)a3 permitPendingAssociations:(BOOL)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)_insertAssociationEntryWithAssociationID:(long long)a0 objectID:(long long)a1 provenance:(long long)a2 database:(id)a3 error:(id *)a4;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)copyAssociationsFromObject:(id)a0 toObject:(id)a1 profile:(id)a2 error:(id *)a3;
+ (long long)protectionClass;

@end
