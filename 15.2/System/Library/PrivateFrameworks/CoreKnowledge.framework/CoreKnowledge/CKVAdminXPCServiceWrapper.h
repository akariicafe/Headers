@class NSString, CKVXPCServiceBridge;

@interface CKVAdminXPCServiceWrapper : NSObject <CKVAdminServiceProvider, CKVAdminService> {
    CKVXPCServiceBridge *_xpcServiceBridge;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adminService;
- (void).cxx_destruct;
- (id)init;
- (oneway void)startEventSimulation:(BOOL)a0 completion:(id /* block */)a1;
- (oneway void)handleSimulatedEvent:(unsigned short)a0 completion:(id /* block */)a1;
- (oneway void)finishEventSimulation:(id /* block */)a0;
- (oneway void)triggerMigration:(id /* block */)a0;
- (oneway void)enumerateItemsWithBatchSize:(unsigned long long)a0 offset:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (oneway void)captureVocabularySnapshot:(id)a0 completion:(id /* block */)a1;

@end
