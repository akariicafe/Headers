@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface DSKappaSession : NSObject {
    BOOL _shouldActivate;
    id /* block */ _activateCompletionHandler;
    BOOL _shouldInvalidate;
    BOOL _invalidateFinished;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) unsigned char coordinationStatus;
@property (nonatomic) unsigned char tiebreaker;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_activate;
- (void)_interrupted;
- (id)init;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_handleXPCMessage:(id)a0;
- (void)_updateKappaCoordinationStatus:(unsigned char)a0;
- (void)_activateXPC;
- (void)_activateXPCHandleReply:(id)a0;
- (void)_deviceChangedMessage:(id)a0;
- (void)_deviceFoundMessage:(id)a0;
- (void)_deviceLostMessage:(id)a0;
- (id)_getXPCConnection;
- (void)_invalidateXPC;
- (void)_xpcEventHandler:(id)a0;
- (void)_xpcHandleCompletionBlockReply:(id)a0 error:(id *)a1;
- (void)cancelElection;
- (void)encodeSelf:(id)a0;
- (void)startElectionWithTimeout:(double)a0 completion:(id /* block */)a1;
- (void)updateKappaCoordinationStatus:(unsigned char)a0;

@end
