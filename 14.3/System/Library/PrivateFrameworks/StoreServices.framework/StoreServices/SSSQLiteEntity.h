@class SSSQLiteDatabase, NSString;

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity>

@property (readonly, nonatomic) SSSQLiteDatabase *database;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) BOOL existsInDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1;
+ (id)anyInDatabase:(id)a0 predicate:(id)a1;
+ (BOOL)_insertValues:(id)a0 intoTable:(id)a1 withPersistentID:(long long)a2 database:(id)a3;
+ (id)databasePropertyToSetClientProperty:(id)a0;
+ (id)databaseValueForProperty:(id)a0 clientValue:(id)a1;
+ (id)databasePropertyToGetClientProperty:(id)a0;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)a0;
+ (id)_aggregateValueForProperty:(id)a0 function:(id)a1 predicate:(id)a2 database:(id)a3;
+ (id)queryWithDatabase:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;
+ (id)countForProperty:(id)a0 predicate:(id)a1 database:(id)a2;
+ (id)maxValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2;
+ (id)minValueForProperty:(id)a0 predicate:(id)a1 database:(id)a2;
+ (Class)memoryEntityClass;
+ (id)joinClauseForProperty:(id)a0;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)a0;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (id)foreignDatabaseColumnForProperty:(id)a0;

- (id)valueForProperty:(id)a0;
- (id)initWithPropertyValues:(id)a0 inDatabase:(id)a1;
- (id)initWithPersistentID:(long long)a0 inDatabase:(id)a1;
- (id)copyValuesForClientProperties:(id)a0;
- (id)copyXPCEncodedValuesForClientProperties:(id)a0;
- (id)_copyTableClusteredValuesWithValues:(id)a0;
- (BOOL)_deleteRowFromTable:(id)a0 usingColumn:(id)a1;
- (BOOL)setValuesWithDictionary:(id)a0;
- (BOOL)deleteFromDatabase;
- (void)getValues:(id *)a0 forProperties:(const id *)a1 count:(unsigned long long)a2;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;

@end
