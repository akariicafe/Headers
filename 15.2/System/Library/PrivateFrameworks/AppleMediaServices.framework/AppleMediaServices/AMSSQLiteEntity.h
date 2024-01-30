@class NSString, AMSSQLiteConnection;

@interface AMSSQLiteEntity : NSObject <AMSSQLiteEntity>

@property (readonly, nonatomic) AMSSQLiteConnection *connection;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) BOOL existsInDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)disambiguatedSQLForProperty:(id)a0;
+ (Class)memoryEntityClass;
+ (BOOL)_insertValues:(id)a0 intoTable:(id)a1 withPersistentID:(long long)a2 onConnection:(id)a3;
+ (id)joinClauseForProperty:(id)a0;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignKeyColumnForTable:(id)a0;
+ (id)foreignDatabaseTableForProperty:(id)a0;
+ (id)foreignDatabaseColumnForProperty:(id)a0;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;
+ (id)_aggregateValueForProperty:(id)a0 function:(id)a1 predicate:(id)a2 onConnection:(id)a3;
+ (id)anyOnConnection:(id)a0 predicate:(id)a1;
+ (id)countForProperty:(id)a0 predicate:(id)a1 onConnection:(id)a2;
+ (id)maxValueForProperty:(id)a0 predicate:(id)a1 onConnection:(id)a2;
+ (id)minValueForProperty:(id)a0 predicate:(id)a1 onConnection:(id)a2;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)valueForProperty:(id)a0;
- (id)_copyTableClusteredValuesWithValues:(id)a0;
- (id)initWithPersistentID:(long long)a0 onConnection:(id)a1;
- (BOOL)_deleteRowFromTable:(id)a0 usingColumn:(id)a1;
- (BOOL)setValuesWithDictionary:(id)a0;
- (id)getValuesForProperties:(id)a0;
- (BOOL)deleteFromDatabase;
- (id)initWithPropertyValues:(id)a0 onConnection:(id)a1;
- (void).cxx_destruct;
- (BOOL)setValue:(id)a0 forProperty:(id)a1;
- (id)objectForKeyedSubscript:(id)a0;

@end
