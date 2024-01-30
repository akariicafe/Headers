@class NSString;

@interface HDSimpleGraphDatabaseKeyEntity : HDSQLiteEntity <HDSimpleGraphDatabaseEntityPredefinedValuesProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertSQLStatementsForPredfinedValues;
+ (id)keyEntityForeignKey;
+ (BOOL)database:(id)a0 hasKeyWithID:(long long)a1 error:(id *)a2;
+ (BOOL)insertKeyWithID:(long long)a0 name:(id)a1 database:(id)a2 error:(id *)a3;

- (id)init;

@end
