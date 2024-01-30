@interface HDCachedCKRecordEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (BOOL)insertOrUpdateWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 recordData:(id)a4 recordType:(id)a5 recordName:(id)a6 profile:(id)a7 error:(id *)a8;
+ (long long)protectionClass;
+ (BOOL)deleteRecordWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 recordName:(id)a4 profile:(id)a5 error:(id *)a6;
+ (id)insertWithZoneID:(long long)a0 recordType:(id)a1 epoch:(long long)a2 recordName:(id)a3 recordData:(id)a4 transaction:(id)a5 error:(id *)a6;
+ (BOOL)enumerateRecordIDsWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 profile:(id)a4 error:(id *)a5 enumerationHandler:(id /* block */)a6;
+ (BOOL)updateWithRecordData:(id)a0 epoch:(long long)a1 zoneID:(long long)a2 recordName:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (id)recordDataWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 recordName:(id)a4 profile:(id)a5 error:(id *)a6;
+ (id)uniquedColumns;
+ (long long)containsRecordWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 recordName:(id)a4 profile:(id)a5 error:(id *)a6;
+ (long long)containsRecordsWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)enumerateRecordIDAndDataWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 zoneName:(id)a2 ownerName:(id)a3 recordType:(id)a4 recordName:(id)a5 epoch:(long long)a6 profile:(id)a7 error:(id *)a8 enumerationHandler:(id /* block */)a9;

@end
