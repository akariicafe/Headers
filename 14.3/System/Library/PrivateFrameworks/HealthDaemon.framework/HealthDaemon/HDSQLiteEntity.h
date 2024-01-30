@class NSString;

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity, NSCopying>

@property (readonly, nonatomic) long long persistentID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseName;
+ (id)indices;
+ (id)additionalPredicateForEnumeration;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (BOOL)isTemporary;
+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)checkConstraints;
+ (id)joinClausesForProperty:(id)a0;
+ (id)privateSubEntities;
+ (void)enumerateColumnsWithBlock:(id /* block */)a0;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1;
+ (id)tableAliases;
+ (id)uniquedColumns;
+ (id)createTableSQL;
+ (Class)entityClassForEnumeration;
+ (id)orderingTermForSortDescriptor:(id)a0;
+ (id)insertOrReplaceEntity:(BOOL)a0 database:(id)a1 properties:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1 limit:(unsigned long long)a2 orderingTerms:(id)a3 groupBy:(id)a4;
+ (BOOL)deleteEntitiesInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2;
+ (id)disambiguatedDatabaseTable;
+ (id)firstInDatabase:(id)a0 predicate:(id)a1 orderingTerms:(id)a2 error:(id *)a3;
+ (id)anyInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2;
+ (BOOL)updateProperties:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3 bindingHandler:(id /* block */)a4;
+ (id)maxValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)deleteStatementWithProperty:(id)a0 database:(id)a1;
+ (id)countValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)enumerateQueryResultsFromColumns:(id)a0 properties:(id)a1 predicate:(id)a2 groupBy:(id)a3 orderingTerms:(id)a4 limit:(long long)a5 database:(id)a6 error:(id *)a7 enumerationHandler:(id /* block */)a8;
+ (id)distinctProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;
+ (id)entityWithPersistentID:(id)a0;
+ (Class)entityForProperty:(id)a0;
+ (id)allDatabaseColumnNames;
+ (id)maxPersistentIDWithPredicate:(id)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)enumerateEntitiesInDatabase:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)propertyValueForAnyInDatabase:(id)a0 property:(id)a1 predicate:(id)a2 error:(id *)a3;
+ (id)aggregateSingleValueForProperty:(id)a0 function:(id)a1 queryDescriptor:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)insertSQLForProperties:(id)a0 shouldReplace:(BOOL)a1;
+ (id)updateSQLForProperties:(id)a0 predicate:(id)a1;
+ (id)_generateDisambiguatedDatabaseTableName;
+ (void)_enumerateColumnDefinitionsWithBlock:(id /* block */)a0;
+ (void)_enumerateColumnNamesWithBlock:(id /* block */)a0;
+ (id)_copyDeleteSQLWithTableName:(id)a0 columnName:(id)a1;
+ (id)aggregateValuesForProperty:(id)a0 functions:(id)a1 queryDescriptor:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)aggregateValuesForProperty:(id)a0 functions:(id)a1 predicate:(id)a2 groupBy:(id)a3 database:(id)a4 error:(id *)a5;
+ (id)aggregateSingleValueForProperty:(id)a0 function:(id)a1 predicate:(id)a2 database:(id)a3 error:(id *)a4;
+ (id)countDistinctForProperty:(id)a0 predicate:(id)a1 database:(id)a2 error:(id *)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPersistentID:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)deleteFromDatabase:(id)a0 error:(id *)a1;
- (BOOL)getValuesForProperties:(id)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
- (BOOL)getValuesForProperties:(id)a0 database:(id)a1 handler:(id /* block */)a2;
- (BOOL)updateProperties:(id)a0 database:(id)a1 error:(id *)a2 bindingHandler:(id /* block */)a3;
- (id)valueForProperty:(id)a0 database:(id)a1;
- (BOOL)booleanForProperty:(id)a0 database:(id)a1;
- (id)dateForProperty:(id)a0 database:(id)a1;
- (id)numberForProperty:(id)a0 database:(id)a1;
- (id)stringForProperty:(id)a0 database:(id)a1;
- (id)UUIDForProperty:(id)a0 database:(id)a1;
- (void)willDeleteFromDatabase:(id)a0;
- (BOOL)existsInDatabase:(id)a0;
- (id)updateSQLForProperties:(id)a0;
- (BOOL)_deleteRowFromTable:(id)a0 usingColumn:(id)a1 database:(id)a2;

@end
