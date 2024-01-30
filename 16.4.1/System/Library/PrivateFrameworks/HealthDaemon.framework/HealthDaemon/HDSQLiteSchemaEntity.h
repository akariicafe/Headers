@class NSString;

@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (BOOL)isTemporary;
+ (id)joinClausesForProperty:(id)a0;
+ (id)foreignKeys;
+ (id)triggers;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)indices;
+ (id)databaseName;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (Class)entityClassForEnumeration;
+ (id)primaryKeyColumns;
+ (id)createTableSQL;
+ (id)uniquedColumns;
+ (id)checkConstraints;
+ (id)privateSubEntities;
+ (id)tableAliases;
+ (void)enumerateColumnsWithBlock:(id /* block */)a0;
+ (id)allDatabaseColumnNames;
+ (id)deleteStatementWithProperty:(id)a0 database:(id)a1;
+ (id)disambiguatedDatabaseTable;
+ (Class)entityForProperty:(id)a0;
+ (BOOL)hasColumnWithName:(id)a0;
+ (BOOL)hasROWID;
+ (id)insertSQLForProperties:(id)a0 shouldReplace:(BOOL)a1;
+ (id)updateSQLForProperties:(id)a0 predicate:(id)a1;


@end
