@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CBController : NSObject <CUXPCCodable, CBActivatable, CBLabelable, CBStateReporting> {
    BOOL _activateAssertionCalled;
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _changesPending;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (class, readonly, nonatomic) unsigned int featureFlags;

@property (nonatomic) unsigned int assertionFlags;
@property (nonatomic) unsigned int clientID;
@property (nonatomic) unsigned int internalFlags;
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint;
@property (readonly, nonatomic) int discoverableState;
@property (copy, nonatomic) id /* block */ discoverableStateChangedHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (readonly, nonatomic) int inquiryState;
@property (copy, nonatomic) id /* block */ inquiryStateChangedHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) long long bluetoothState;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;

- (id)_ensureXPCStarted;
- (void)_invalidateDirect;
- (id)init;
- (void)_xpcReceivedPowerStateChanged:(id)a0;
- (void)_xpcReceivedMessage:(id)a0;
- (void).cxx_destruct;
- (void)_activateDirectStart;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)_activateAssertionWithFlagsXPC:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_xpcReceivedInquiryStateChanged:(id)a0;
- (void)_xpcReceivedDiscoverableStateChanged:(id)a0;
- (void)_activateAssertionWithFlagsDirect:(unsigned int)a0 completion:(id /* block */)a1;
- (void)activateAssertionWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)getControllerInfoWithCompletion:(id /* block */)a0;
- (void)modifyDevice:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticLog:(id)a0 completion:(id /* block */)a1;
- (void)getPowerStateWithCompletion:(id /* block */)a0;
- (void)setPowerState:(long long)a0 completion:(id /* block */)a1;
- (void)updateIdentities:(id)a0 completion:(id /* block */)a1;
- (void)_activate;
- (void)_invalidated;
- (void)_xpcReceivedEvent:(id)a0;
- (id)description;
- (void)_update;
- (void)encodeWithXPCObject:(id)a0;
- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticShow:(id)a0 completion:(id /* block */)a1;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_interrupted;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)_activateXPCCompleted:(id)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (void)invalidate;

@end
