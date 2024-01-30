@interface HDSimpleGraphDatabaseRelationshipEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)indices;
+ (id)uniquedColumns;
+ (id)joinClausesForProperty:(id)a0;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)addRelationshipWithID:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 database:(id)a3 error:(id *)a4;
+ (BOOL)enumerateRelationshipsWithPredicate:(id)a0 database:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)removeRelationshipWithID:(long long)a0 subjectNodeID:(long long)a1 objectNodeID:(long long)a2 database:(id)a3 error:(id *)a4;

- (id)init;

@end
