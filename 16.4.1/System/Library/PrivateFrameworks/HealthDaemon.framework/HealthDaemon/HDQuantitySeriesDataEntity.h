@class NSString;

@interface HDQuantitySeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)primaryKeyColumns;
+ (BOOL)deleteAllSeriesWithDatabase:(id)a0 error:(id *)a1;
+ (BOOL)deleteSeriesDataWithIdentifier:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)deleteSeriesDataWithIdentifier:(long long)a0 timestamps:(id)a1 database:(id)a2 error:(id *)a3;
+ (BOOL)enumerateSeries:(long long)a0 after:(double)a1 inclusive:(BOOL)a2 transaction:(id)a3 error:(id *)a4 handler:(id /* block */)a5;
+ (BOOL)enumerateSeries:(long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)enumerateWithDatabase:(id)a0 predicate:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)enumerateWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)getRangeAndCountForSeriesIdentifier:(long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)hasROWID;
+ (BOOL)insertOrReplaceEntity:(BOOL)a0 database:(id)a1 value:(double)a2 duration:(double)a3 timestamp:(double)a4 identifier:(long long)a5 error:(id *)a6;
+ (id)predicateForSeriesIdentifier:(long long)a0;


@end
