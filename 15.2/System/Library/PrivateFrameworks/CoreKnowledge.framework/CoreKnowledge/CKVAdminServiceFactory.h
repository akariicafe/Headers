@class NSString, CKVTaskController, CKVTaskHandler;

@interface CKVAdminServiceFactory : CKVServiceFactory <CKVAdminServiceProvider> {
    CKVTaskHandler *_taskHandler;
    CKVTaskController *_daemonTaskController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)adminService;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 indexManager:(id)a1 settings:(id)a2 donateTaskProvider:(id)a3 coalescenceManager:(id)a4 daemonTaskController:(id)a5 adminTaskController:(id)a6;

@end
