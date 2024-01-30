@class NSString;

@interface HDSimpleGraphDatabaseValueTypeEntity : HDSQLiteEntity <HDSimpleGraphDatabaseEntityPredefinedValuesProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (id)indices;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)valueTypeEntityForeignKey;
+ (id)insertSQLStatementsForPredfinedValues;

- (id)init;

@end
