@interface HDOriginalSignedClinicalDataRecordEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)joinClausesForProperty:(id)a0;
+ (id)propertyForSyncProvenance;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)allProperties;
+ (id)checkConstraints;
+ (id)entityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)existingEntityWithSyncIdentifier:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)validateCodableRecord:(id)a0 error:(id *)a1;
+ (id)entityWithSyncIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)newCompatibleCodableSignedClinicalDataRecord;
+ (id)insertCodableRecord:(id)a0 shouldReplace:(BOOL)a1 accountPersistentID:(long long)a2 syncProvenance:(long long)a3 database:(id)a4 error:(id *)a5;
+ (id)existingEntityWithSyncIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;

@end
