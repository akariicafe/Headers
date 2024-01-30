@class NSMutableDictionary, NSMapTable, IDSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface IDSXPCDaemonController : NSObject {
    BOOL _sync;
}

@property (retain, nonatomic) IDSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSMutableDictionary *collaboratorPromiseDictionary;
@property (retain, nonatomic) NSMutableDictionary *syncCollaboratorDictionary;
@property (retain, nonatomic) NSMapTable *interruptionHandlerByTarget;

+ (void)performDaemonControllerTask:(id /* block */)a0;
+ (id)weakSharedInstance;

- (id)_initWithQueue:(id)a0 isSync:(BOOL)a1;
- (id)initSyncControllerWithQueue:(id)a0;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)opportunisticCollaboratorWithErrorHandler:(id /* block */)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)pairingCollaboratorWithTimeout:(double)a0 errorHandler:(id /* block */)a1;
- (void)dealloc;
- (id)registrationCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)reunionSyncCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)_sync_collaboratorWithIdentifier:(id)a0 errorHandler:(id /* block */)a1 resolverBlock:(id /* block */)a2;
- (id)interalTestingCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)_daemonProxyWithErrorHandler:(id /* block */)a0;
- (id)activityMonitorCollaboratorWithErrorHandler:(id /* block */)a0;
- (void)performTask:(id /* block */)a0;
- (void)removeInterruptionHandlerForTarget:(id)a0;
- (id)pairingCollaboratorWithErrorHandler:(id /* block */)a0;
- (void)addInterruptionHandler:(id /* block */)a0 forTarget:(id)a1;
- (id)pairedDeviceManagerCollaboratorWithErrorHandler:(id /* block */)a0;
- (id)_timingOutDaemonProxyWithTimeout:(double)a0 errorHandler:(id /* block */)a1;
- (id)_collaboratorWithIdentifier:(id)a0 interface:(id)a1 timeout:(double)a2 errorHandler:(id /* block */)a3 resolverBlock:(id /* block */)a4;

@end
