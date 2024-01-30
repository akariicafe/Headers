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

- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)diagnosticShow:(id)a0 completion:(id /* block */)a1;

@end
