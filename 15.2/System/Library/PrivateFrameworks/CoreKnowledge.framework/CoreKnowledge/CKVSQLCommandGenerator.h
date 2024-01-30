@interface CKVSQLCommandGenerator : NSObject

+ (id)selectFromTableWithName:(id)a0 columns:(id)a1 count:(BOOL)a2 criterion:(id)a3 order:(id)a4 limit:(id)a5 offset:(id)a6;
+ (void)addLimit:(id)a0 offset:(id)a1 forSelect:(id)a2;
+ (void)replaceOffset:(id)a0 forSelect:(id)a1;
+ (id)deleteFromTableWithName:(id)a0 criterion:(id)a1;
+ (id)updateWithTableName:(id)a0 columnNames:(id)a1 columnValues:(id)a2 criterion:(id)a3;
+ (id)insertCommandStringWithTableName:(id)a0 columnNames:(id)a1 returningColumns:(id)a2;
+ (id)_produceSetValuesClauseForColumnNames:(id)a0 columnValues:(id)a1;
+ (id)_produceSelectClauseWithTableName:(id)a0 columnNames:(id)a1 count:(BOOL)a2;
+ (id)_produceCriterionClause:(id)a0 tableName:(id)a1;
+ (id)_generateOrderByClause:(id)a0;
+ (id)_generateCommaSeparatedPlaceholdersString:(unsigned long long)a0;
+ (id)_generateCommaSeparatedValuesString:(id)a0;

- (id)init;

@end
