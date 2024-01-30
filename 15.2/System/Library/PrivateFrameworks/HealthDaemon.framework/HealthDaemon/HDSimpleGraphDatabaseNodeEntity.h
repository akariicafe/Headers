@interface HDSimpleGraphDatabaseNodeEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)indices;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)nodeEntityForeignKey;
+ (id)insertNodeWithName:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)firstNodeWithName:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)nodeForID:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)enumerateNodesWithPredicate:(id)a0 database:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;

- (id)init;

@end
