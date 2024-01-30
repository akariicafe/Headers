@interface HDMetadataKeyEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)_keyForPersistentID:(id)a0 database:(id)a1;
+ (id)_insertEntityWithKey:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)insertEntityWithKey:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)entityForKey:(id)a0 healthDatabase:(id)a1 error:(id *)a2;
+ (id)_entityForKey:(id)a0 database:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

@end
