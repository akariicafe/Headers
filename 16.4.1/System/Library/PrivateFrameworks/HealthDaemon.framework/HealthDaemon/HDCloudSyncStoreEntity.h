@interface HDCloudSyncStoreEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (id)persistedStateForStoreUUID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)persistedMostRecentLastSyncDateForProfile:(id)a0 error:(id *)a1;
+ (id)persistedStoreUUIDsForProfile:(id)a0 error:(id *)a1;
+ (BOOL)persistState:(id)a0 storeUUID:(id)a1 shouldReplace:(BOOL)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (long long)protectionClass;
+ (id)persistedStateForStoreUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)storeIdentifiersForOwnerIdentifier:(id)a0 containerIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)rebaseRequiredByDate:(id)a0 intervals:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)enumerateShardsForOwnerIdentifier:(id)a0 containerIdentifier:(id)a1 transaction:(id)a2 error:(id *)a3 handler:(id /* block */)a4;
+ (BOOL)resetLastSyncDateExcludingStores:(id)a0 profile:(id)a1 error:(id *)a2;

- (BOOL)fetchShardPropertiesInTransaction:(id)a0 error:(id *)a1 handler:(id /* block */)a2;
- (id)storeUUIDInTransaction:(id)a0 error:(id *)a1;
- (BOOL)updateShardStartDate:(id)a0 endDate:(id)a1 type:(long long)a2 transaction:(id)a3 error:(id *)a4;

@end
