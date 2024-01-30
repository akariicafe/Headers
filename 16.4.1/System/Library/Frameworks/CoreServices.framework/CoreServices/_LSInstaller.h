@class NSObject, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>

@property (weak, nonatomic) NSXPCConnection *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performShimmedInstallOfArtifact:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)performShimmedUninstallOfApplicationWithIdentifier:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)performUninstallCall:(id)a0 withOptions:(id)a1 uninstallType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)performInstallCall:(id)a0 withOptions:(id)a1 installType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_doPerformInstallCall:(id)a0 withOptions:(id)a1 installType:(unsigned long long)a2 notificationJournaller:(id)a3 reply:(id /* block */)a4;
- (void)_doPerformUninstallCall:(id)a0 withOptions:(id)a1 uninstallType:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)_postProcessingForApp:(id)a0 type:(id)a1 notification:(int)a2;
- (void)_preflightAppDeletion:(id)a0;
- (BOOL)dispatchRegistrationOfInstallDict:(id)a0;
- (void)finishInstallationWithInstalledBundleIDs:(id)a0 lastWasPlaceholder:(BOOL)a1 installationError:(id)a2 replyBlock:(id /* block */)a3;
- (id)invokeInstallCall:(id)a0 options:(id)a1 error:(id *)a2;
- (id)invokeUninstallCall:(id)a0 withOptions:(id)a1 error:(id *)a2;
- (BOOL)registerBundle:(id)a0 withOptions:(id)a1;
- (void)sendCallbackDeliveryComplete;
- (void)sendCallbackWithDictionary:(id)a0;
- (BOOL)unregisterBundle:(id)a0 placeholderOnly:(BOOL)a1 notification:(int *)a2;
- (BOOL)validateEntitlementsForInstallCall:(id)a0 options:(id)a1 error:(id *)a2;

@end
