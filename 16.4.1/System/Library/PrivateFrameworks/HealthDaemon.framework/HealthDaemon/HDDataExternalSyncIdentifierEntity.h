@interface HDDataExternalSyncIdentifierEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)foreignKeys;
+ (BOOL)insertSyncIdentifierWithProfile:(id)a0 database:(id)a1 objectID:(long long)a2 localSourceID:(long long)a3 externalSyncObjectCode:(long long)a4 syncIdentifier:(id)a5 syncVersion:(id)a6 deleted:(BOOL)a7 errorOut:(id *)a8;
+ (BOOL)populateSyncInfoForObjectID:(long long)a0 database:(id)a1 localSourceIDOut:(long long *)a2 externalSyncObjectCodeOut:(long long *)a3 syncIdentifierOut:(id *)a4 syncVersionOut:(id *)a5 deletedOut:(BOOL *)a6 errorOut:(id *)a7;
+ (long long)protectionClass;
+ (id)indices;
+ (BOOL)populateSyncInfoForLocalSourceID:(long long)a0 externalSyncObjectCode:(long long)a1 syncIdentifier:(id)a2 deleted:(BOOL)a3 database:(id)a4 objectIDOut:(id *)a5 errorOut:(id *)a6;
+ (BOOL)enumerateValuesWithProfile:(id)a0 error:(id *)a1 handler:(id /* block */)a2;

@end
