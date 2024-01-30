@interface VCWorkflowSyncDataHandler : VCDatabaseSyncDataHandler

+ (int)messageType;

- (id)unsyncedChangesForSyncService:(id)a0 metadata:(id *)a1 error:(id *)a2;
- (id)initWithDatabase:(id)a0;
- (BOOL)markChangesAsSynced:(id)a0 withSyncService:(id)a1 metadata:(id)a2 error:(id *)a3;
- (BOOL)resetSyncStateForService:(id)a0 error:(id *)a1;

@end
