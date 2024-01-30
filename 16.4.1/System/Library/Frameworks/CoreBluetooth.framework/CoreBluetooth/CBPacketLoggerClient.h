@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CBPacketLoggerClient : NSObject <CBActivatable, CBErrorReporting, CBInterruptable> {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (copy, nonatomic) id /* block */ rawPacketHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;

- (id)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_xpcReceivedEvent:(id)a0;
- (void)_interrupted;
- (id)init;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activateXPC:(BOOL)a0 completion:(id /* block */)a1;
- (void)_xpcReceivedPacket:(id)a0;

@end
