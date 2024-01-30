@interface HDCachedCKDatabaseEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 serverChangeToken:(id)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)updateServerChangeToken:(id)a0 containerIdentifier:(id)a1 databaseScope:(long long)a2 transaction:(id)a3 error:(id *)a4;
+ (id)entityForContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 transaction:(id)a3 shouldCreate:(BOOL)a4 error:(id *)a5;
+ (BOOL)deleteDatabaseWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (id)serverChangeTokenForContainerIdentifier:(id)a0 databaseScope:(long long)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)insertIfDoesNotExistWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 serverChangeToken:(id)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)deleteDatabasesNotMatchingUserRecordName:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)insertOrUpdateWithContainerIdentifier:(id)a0 databaseScope:(long long)a1 userRecordName:(id)a2 serverChangeToken:(id)a3 profile:(id)a4 error:(id *)a5;

@end
