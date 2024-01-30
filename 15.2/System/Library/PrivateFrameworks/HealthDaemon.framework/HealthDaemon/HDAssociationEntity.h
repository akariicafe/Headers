@interface HDAssociationEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)indices;
+ (id)uniquedColumns;
+ (id)privateSubEntities;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncProvenance;
+ (BOOL)copyAssociationsFromObject:(id)a0 toObject:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)tableAliases;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)associateSampleUUIDData:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)realizePendingAssociationsWithTransaction:(id)a0 startingAnchor:(long long)a1 error:(id *)a2;
+ (id)deleteStatementForAssociationWithTransaction:(id)a0;
+ (id)deleteStatementForObjectAssociationsWithTransaction:(id)a0;
+ (BOOL)associateSampleUUIDs:(id)a0 withSampleUUID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)countOfObjectsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)copyAssociationsFromObjectID:(id)a0 toObjectID:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)insertEntriesWithAssociationUUID:(id)a0 objectUUIDsData:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)associationUUIDsForObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)journalEntryForAssociation:(id)a0 objects:(id)a1;
+ (BOOL)insertEntriesWithAssociation:(id)a0 objects:(id)a1 enforceSameSource:(BOOL)a2 profile:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)objectIDsForAssociationEntityWithPersistentID:(long long)a0 profile:(id)a1 error:(id *)a2;
+ (id)objectUUIDsAssociatedWithObjectUUID:(id)a0 profile:(id)a1 error:(id *)a2;

@end
