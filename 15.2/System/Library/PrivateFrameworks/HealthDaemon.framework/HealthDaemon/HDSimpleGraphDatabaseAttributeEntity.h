@interface HDSimpleGraphDatabaseAttributeEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)indices;
+ (id)uniquedColumns;
+ (id)joinClausesForProperty:(id)a0;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)addAttributeWithID:(long long)a0 value:(id)a1 valueType:(long long)a2 nodeID:(long long)a3 database:(id)a4 error:(id *)a5;
+ (BOOL)enumerateAttributeWithPredicate:(id)a0 database:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;

- (id)init;

@end
