@interface HDSyncStoreEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)existingSyncStoreEntityWithUUID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)allSyncStoreEntitiesOfType:(long long)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_predicateWithStoreUUID:(id)a0 type:(long long)a1;
+ (id)syncStoreEntityWithUUID:(id)a0 type:(long long)a1 healthDatabase:(id)a2 error:(id *)a3;
+ (long long)protectionClass;

- (long long)syncProvenance;

@end
