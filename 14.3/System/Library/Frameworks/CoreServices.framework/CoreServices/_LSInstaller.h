@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_doinstallApplication:(id)a0 atURL:(id)a1 withOptions:(id)a2 installType:(unsigned long long)a3 notificationJournaller:(id)a4 reply:(id /* block */)a5;
- (id)installPackage:(id)a0 withIdentifier:(id)a1 options:(id)a2 error:(id *)a3;
- (BOOL)unregisterBundle:(id)a0 placeholderOnly:(BOOL)a1 notification:(int *)a2;
- (void)_postProcessingForApp:(id)a0 type:(id)a1 notification:(int)a2;
- (BOOL)validateEntitlementsForInstall:(BOOL)a0 options:(id)a1 error:(id *)a2;
- (void)_douninstallApplication:(id)a0 withOptions:(id)a1 uninstallType:(unsigned long long)a2 reply:(id /* block */)a3;
- (id)uninstallBundle:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (BOOL)dispatchRegistration:(id)a0;
- (void)sendCallbackDeliveryComplete;
- (void)_preflightAppDeletion:(id)a0;
- (void)sendCallbackWithDictionary:(id)a0;
- (BOOL)registerBundle:(id)a0 withOptions:(id)a1;
- (void)installApplication:(id)a0 atURL:(id)a1 withOptions:(id)a2 installType:(unsigned long long)a3 reply:(id /* block */)a4;
- (void)uninstallApplication:(id)a0 withOptions:(id)a1 uninstallType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;

@end
