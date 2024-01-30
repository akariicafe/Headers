@interface HDCachedCKRecordZoneEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (BOOL)updateServerChangeToken:(id)a0 databaseID:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)insertWithDatabaseID:(long long)a0 zoneName:(id)a1 ownerName:(id)a2 serverChangeToken:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)insertOrUpdateWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 userRecordName:(id)a4 serverChangeToken:(id)a5 fetchComplete:(id)a6 profile:(id)a7 error:(id *)a8;
+ (long long)protectionClass;
+ (BOOL)insertIfDoesNotExistWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 userRecordName:(id)a4 serverChangeToken:(id)a5 profile:(id)a6 error:(id *)a7;
+ (id)uniquedColumns;
+ (BOOL)enumerateCKRecordZoneIDsWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 profile:(id)a2 error:(id *)a3 enumerationHandler:(id /* block */)a4;
+ (id)serverChangeTokenForContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)deleteZoneWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)setRequiresFetch:(BOOL)a0 containerIdentifier:(id)a1 databaseScope:(long long)a2 zoneName:(id)a3 ownerName:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (long long)requiresFetchForZoneWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)setZoneEntityState:(long long)a0 containerIdentifier:(id)a1 databaseScope:(long long)a2 zoneName:(id)a3 ownerName:(id)a4 profile:(id)a5 error:(id *)a6;

@end
