@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface BTServicesClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)diagnosticShow:(id)a0 completion:(id /* block */)a1;
- (void)_ensureXPCStarted;
- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;

@end
