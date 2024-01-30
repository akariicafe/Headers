@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler

@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;

+ (int)messageType;

- (id)initWithEventHandler:(id)a0;
- (BOOL)applyChanges:(id)a0 fromSyncService:(id)a1 error:(id *)a2;
- (id)unsyncedChangesForSyncService:(id)a0 metadata:(id *)a1 error:(id *)a2;
- (void).cxx_destruct;
- (void)installedApplicationsDidChange:(id)a0;
- (void)dealloc;
- (BOOL)deleteSyncedData:(id *)a0;
- (BOOL)resetSyncStateForService:(id)a0 error:(id *)a1;
- (BOOL)markChangesAsSynced:(id)a0 withSyncService:(id)a1 metadata:(id)a2 error:(id *)a3;

@end
