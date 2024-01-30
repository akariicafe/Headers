@class NSString, MTSyncChangeQueue, MTMetrics;
@protocol MTSyncDataModel, MTSyncService, NAScheduler, MTSyncStatusProvider;

@interface MTSyncServiceManager : NSObject <MTSyncStatusProviderDelegate, MTSyncServiceDelegate, MTSyncManager, MTAgentDiagnosticDelegate>

@property (retain, nonatomic) id<MTSyncService> syncService;
@property (retain, nonatomic) id<MTSyncStatusProvider> syncStatusProvider;
@property (weak, nonatomic) id<MTSyncDataModel> syncDataModel;
@property (retain, nonatomic) MTSyncChangeQueue *syncChangeQueue;
@property (retain, nonatomic) MTMetrics *syncMetrics;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (nonatomic) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetDataStore;
- (id)initWithSyncService:(id)a0 syncStatusProvider:(id)a1 syncDataModel:(id)a2 syncMetrics:(id)a3;
- (void)syncChange:(id)a0;
- (id)initWithSyncService:(id)a0 syncStatusProvider:(id)a1 syncDataModel:(id)a2 syncMetrics:(id)a3 syncChangeStore:(id)a4;
- (void)printDiagnostics;
- (void)applyChange:(id)a0;
- (id)gatherDiagnostics;
- (void)pendingChangesSent:(id)a0;
- (void).cxx_destruct;
- (void)syncStatusProvider:(id)a0 didChangeSyncStatus:(unsigned long long)a1;
- (void)checkForPendingChanges;
- (void)stopSyncService;
- (void)startSyncService;
- (id)requestSync:(unsigned long long)a0;
- (id)pendingChanges;

@end
