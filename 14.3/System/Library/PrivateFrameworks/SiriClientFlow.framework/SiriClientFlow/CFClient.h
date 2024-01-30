@class NSObject, CFCommandQueuer;
@protocol AFServiceHelper, OS_dispatch_queue;

@interface CFClient : NSObject

@property (retain) id<AFServiceHelper> serviceHelper;
@property (retain) CFCommandQueuer *commandQueuer;
@property (retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)executeCommand:(id)a0 completion:(id /* block */)a1;
- (void)warmUpWithSignal:(id)a0 completion:(id /* block */)a1;
- (void)cancelOperationsForRequestID:(id)a0;
- (void)resetScriptExecutorCache;
- (id)initWithServiceHelper:(id)a0 withConnectionName:(id)a1;
- (id)initWithClientLiteWithConnectionName:(id)a0;
- (void)rebootScripter;
- (void)_executeRemoteCommand:(id)a0 peerInfo:(id)a1 completion:(id /* block */)a2;
- (void)runMaintenanceWithCompletion:(id /* block */)a0;
- (void)executeCommand:(id)a0 peerInfo:(id)a1 completion:(id /* block */)a2;

@end
