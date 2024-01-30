@class NSString;

@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)indices;
+ (id)uniquedColumns;
+ (id)privateSubEntities;
+ (id)databaseName;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)joinClausesForProperty:(id)a0;
+ (id)foreignKeys;
+ (id)triggers;
+ (id)tableAliases;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)createTableSQL;
+ (id)checkConstraints;
+ (BOOL)isTemporary;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (Class)entityClassForEnumeration;
+ (id)primaryKeyColumns;
+ (void)enumerateColumnsWithBlock:(id /* block */)a0;
+ (id)disambiguatedDatabaseTable;
+ (BOOL)hasROWID;
+ (BOOL)hasColumnWithName:(id)a0;
+ (Class)entityForProperty:(id)a0;
+ (id)allDatabaseColumnNames;
+ (id)deleteStatementWithProperty:(id)a0 database:(id)a1;
+ (id)insertSQLForProperties:(id)a0 shouldReplace:(BOOL)a1;
+ (id)updateSQLForProperties:(id)a0 predicate:(id)a1;


@end
