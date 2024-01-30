@class CKVIndexManager, CKVTaskController, CKVTaskHandler;

@interface CKVAdminServiceConnection : CKVServiceConnection <CKVAdminService> {
    CKVTaskHandler *_taskHandler;
    CKVIndexManager *_indexManager;
    CKVTaskController *_daemonTaskController;
    BOOL _eventSimulationActive;
}

- (void).cxx_destruct;
- (oneway void)startEventSimulation:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)handleSimulatedEvent:(unsigned short)a0 completion:(id /* block */)a1;
- (oneway void)finishEventSimulation:(id /* block */)a0;
- (oneway void)triggerMigration:(id /* block */)a0;
- (oneway void)enumerateItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (oneway void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;
- (id)initWithServiceQueue:(id)a0 taskHandler:(id)a1 indexManager:(id)a2 daemonTaskController:(id)a3;
- (BOOL)_isCustomerInstall:(id /* block */)a0;
- (BOOL)_isEventSimulationInactive:(id /* block */)a0;

@end
