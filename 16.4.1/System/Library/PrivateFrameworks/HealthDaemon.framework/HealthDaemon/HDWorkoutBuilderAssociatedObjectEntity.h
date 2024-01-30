@interface HDWorkoutBuilderAssociatedObjectEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (long long)associateObject:(id)a0 timestamp:(double)a1 withBuilder:(id)a2 transaction:(id)a3 error:(id *)a4;
+ (BOOL)enumerateAssociatedUUIDsForBuilder:(id)a0 transaction:(id)a1 error:(id *)a2 block:(id /* block */)a3;
+ (BOOL)removeAssociationFromBuilder:(id)a0 toUUID:(id)a1 transaction:(id)a2 error:(id *)a3;

@end
