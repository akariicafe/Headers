@class NSMutableDictionary, NSXPCConnection, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IXServerConnection : NSObject <IXClientDelegateProtocol>

@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly, nonatomic) NSMutableDictionary *coordinatorInstances;
@property (readonly, nonatomic) NSMutableDictionary *promiseInstances;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)retrySynchronousIPC:(id /* block */)a0;
+ (id)sharedConnection;

- (id)_onQueue_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (oneway void)_client_coordinatorShouldPauseWithUUID:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (oneway void)_client_coordinatorShouldResumeWithUUID:(id)a0;
- (void)unregisterAppInstallCoordinatorForUpdates:(id)a0;
- (oneway void)_client_coordinatorDidCompleteSuccessfullyWithUUID:(id)a0;
- (oneway void)_client_promiseDidCompleteSuccessfullyWithUUID:(id)a0;
- (oneway void)_client_coordinatorDidRegisterForObservationWithUUID:(id)a0;
- (oneway void)_client_coordinatorWithUUID:(id)a0 configuredPromiseDidBeginFulfillment:(unsigned long long)a1;
- (void)unregisterDataPromiseForUpdates:(id)a0;
- (id)_onQueue_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (oneway void)_client_promiseWithUUID:(id)a0 didCancelWithReason:(id)a1 client:(unsigned long long)a2;
- (void)registerAppInstallCoordinatorForUpdates:(id)a0 notifyDaemon:(BOOL)a1;
- (oneway void)_client_coordinatorWithUUID:(id)a0 didUpdateProgress:(double)a1 forPhase:(unsigned long long)a2 overallProgress:(double)a3;
- (oneway void)_client_coordinatorDidInstallPlaceholderWithUUID:(id)a0;
- (void)_onQueue_reSetupObserversAfter:(id)a0;
- (oneway void)_client_coordinatorWithUUID:(id)a0 didCancelWithReason:(id)a1 client:(unsigned long long)a2;
- (oneway void)_client_coordinatorShouldPrioritizeWithUUID:(id)a0;
- (oneway void)_client_coordinatorShouldBeginRestoringUserDataWithUUID:(id)a0;
- (BOOL)_onQueue_createXPCConnectionIfNecessary;
- (void)registerDataPromiseForUpdates:(id)a0 notifyDaemon:(BOOL)a1;

@end
