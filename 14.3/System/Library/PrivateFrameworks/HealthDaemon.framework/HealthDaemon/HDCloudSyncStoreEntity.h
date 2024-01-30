@interface HDCloudSyncStoreEntity : HDHealthEntity

+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (BOOL)persistState:(id)a0 storeUUID:(id)a1 shouldReplace:(BOOL)a2 healthDatabase:(id)a3 error:(id *)a4;
+ (id)persistedMostRecentLastSyncDateForProfile:(id)a0 error:(id *)a1;
+ (id)persistedStateForStoreUUID:(id)a0 database:(id)a1 error:(id *)a2;
+ (id)storeIdentifierForOwnerIdentifier:(id)a0 containerIdentifier:(id)a1 profile:(id)a2 error:(id *)a3;
+ (id)persistedStoreUUIDsForProfile:(id)a0 error:(id *)a1;
+ (BOOL)rebaseRequiredByDate:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)persistedStateForStoreUUID:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_propertiesForEntity;
+ (long long)protectionClass;

@end
