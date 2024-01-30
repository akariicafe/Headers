@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AFSiriActivationConnection : NSObject <AFInvalidating, AFSiriActivationService> {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
    long long _servicePort;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_connectionInterrupted;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)_connectionInvalidated;
- (void)_invalidate;
- (id)_connection;
- (void).cxx_destruct;
- (oneway void)activateWithRequestInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (oneway void)deactivateForReason:(long long)a0 options:(unsigned long long)a1 context:(id)a2 completion:(id /* block */)a3;
- (oneway void)handleContext:(id)a0 completion:(id /* block */)a1;
- (oneway void)handleIntent:(id)a0 inBackgroundAppWithBundleId:(id)a1 reply:(id /* block */)a2;
- (oneway void)handleIntentForwardingAction:(id)a0 inBackgroundApplicationWithBundleIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithServicePort:(long long)a0;
- (oneway void)prewarmWithRequestInfo:(id)a0 context:(id)a1 completion:(id /* block */)a2;

@end
