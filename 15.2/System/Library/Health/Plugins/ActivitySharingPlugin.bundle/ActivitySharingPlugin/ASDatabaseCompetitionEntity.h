@interface ASDatabaseCompetitionEntity : HDDataEntity

+ (id)databaseTable;
+ (id)uniquedColumns;
+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)_insertCompetitions:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_competitionsWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_insertCompetition:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)saveCompetitions:(id)a0 profile:(id)a1 withError:(id *)a2;
+ (BOOL)removeCompetitionsForFriendUUID:(id)a0 type:(long long)a1 profile:(id)a2 withError:(id *)a3;
+ (BOOL)removeAllCompetitionsWithProfile:(id)a0 error:(id *)a1;
+ (id)allDatabaseCompetitionsWithProfile:(id)a0 withError:(id *)a1;

@end
