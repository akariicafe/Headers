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

- (void)_invalidate;
- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (void)_ensureXPCStarted;
- (void).cxx_destruct;
- (id)init;
- (void)diagnosticBLEModeWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (void)bluetoothUserInteraction;
- (void)diagnosticMock:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (void)diagnosticMockStart:(id /* block */)a0;
- (void)diagnosticMockStop:(id /* block */)a0;
- (void)_logControl:(id)a0 completion:(id /* block */)a1;
- (void)_show:(id)a0 completion:(id /* block */)a1;
- (void)logControl:(id)a0 completion:(id /* block */)a1;
- (void)show:(id)a0 completion:(id /* block */)a1;
- (void)unlockTestClientWithDevice:(id)a0;
- (void)unlockTestServer;

@end
