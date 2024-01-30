@interface HDSQLiteMetaEntity : HDSQLiteEntity

+ (id)databaseTable;
+ (id)queryWithDatabase:(id)a0 type:(id)a1;
+ (id)queryWithDatabase:(id)a0 type:(id)a1 tableName:(id)a2;
+ (id)queryWithDatabase:(id)a0 types:(id)a1 tableName:(id)a2;

- (id)typeWithDatabase:(id)a0;
- (id)nameWithDatabase:(id)a0;
- (id)tableNameWithDatabase:(id)a0;
- (id)SQLWithDatabase:(id)a0;

@end
