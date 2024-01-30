@interface HDMetadataValueEntity : HDHealthEntity

+ (id)databaseTable;
+ (id)indices;
+ (long long)protectionClass;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)deleteStatementForObjectMetadataWithTransaction:(id)a0;
+ (BOOL)_insertMetadataValueWithKeyID:(long long)a0 objectID:(long long)a1 value:(id)a2 database:(id)a3 error:(id *)a4;

@end
