@class NSString;

@interface HDQuantitySeriesDataEntity : HDSQLiteSchemaEntity <HDHealthEntitySchema>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)databaseTable;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)primaryKeyColumns;
+ (BOOL)hasROWID;
+ (BOOL)enumerateWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)deleteSeriesDataWithIdentifier:(long long)a0 database:(id)a1 error:(id *)a2;
+ (BOOL)deleteAllSeriesWithTransaction:(id)a0 error:(id *)a1;
+ (BOOL)enumerateSeries:(long long)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (BOOL)insertOrReplaceEntity:(BOOL)a0 database:(id)a1 value:(double)a2 duration:(double)a3 timestamp:(double)a4 identifier:(long long)a5 error:(id *)a6;
+ (BOOL)deleteSeriesDataWithIdentifier:(long long)a0 timestamps:(id)a1 database:(id)a2 error:(id *)a3;


@end
