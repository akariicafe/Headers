@class NSString;

@interface HDSimpleGraphDatabaseRelationshipNameEntity : HDSQLiteEntity <HDSimpleGraphDatabaseEntityPredefinedValuesProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)insertSQLStatementsForPredfinedValues;
+ (BOOL)unitTesting_addRelationshipTypeWithName:(id)a0 nameID:(long long)a1 database:(id)a2 error:(id *)a3;
+ (id)relationshipNameEntityForeignKey;

- (id)init;

@end
