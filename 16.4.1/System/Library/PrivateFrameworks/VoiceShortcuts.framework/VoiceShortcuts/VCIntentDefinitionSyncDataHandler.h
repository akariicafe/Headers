@class VCDaemonXPCEventHandler;

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler

@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler;

+ (int)messageType;

- (void)dealloc;
- (void)installedApplicationsDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)resetSyncStateForService:(id)a0 error:(id *)a1;
- (BOOL)applyChanges:(id)a0 fromSyncService:(id)a1 error:(id *)a2;
- (BOOL)deleteSyncedData:(id *)a0;
- (id)initWithEventHandler:(id)a0;
- (BOOL)markChangesAsSynced:(id)a0 withSyncService:(id)a1 metadata:(id)a2 error:(id *)a3;
- (id)unsyncedChangesForSyncService:(id)a0 metadata:(id *)a1 error:(id *)a2;

@end
