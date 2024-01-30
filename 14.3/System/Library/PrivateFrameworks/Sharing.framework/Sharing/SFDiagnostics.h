@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SFDiagnostics : NSObject {
    BOOL _btUser;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_ensureXPCStarted;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidated;
- (void)diagnosticBLEModeWithCompletion:(id /* block */)a0;
- (void)_invalidate;
- (void)bluetoothUserInteraction;
- (void)diagnosticMock:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (void)show:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticMockStart:(id /* block */)a0;
- (void)diagnosticMockStop:(id /* block */)a0;
- (void)_logControl:(id)a0 completion:(id /* block */)a1;
- (void)_show:(id)a0 completion:(id /* block */)a1;
- (void)logControl:(id)a0 completion:(id /* block */)a1;
- (void)unlockTestClientWithDevice:(id)a0;
- (void)unlockTestServer;
- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (void)invalidate;

@end
