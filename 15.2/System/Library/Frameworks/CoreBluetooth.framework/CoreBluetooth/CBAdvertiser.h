@class NSData, NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CBAdvertiser : NSObject <CBXPCReceivable, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _changesPending;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (nonatomic) unsigned int clientID;
@property (nonatomic) unsigned int internalFlags;
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcListenerEndpoint;
@property (nonatomic) int advertiseRate;
@property (nonatomic) unsigned int nearbyActionFlags;
@property (nonatomic) unsigned char nearbyActionType;
@property (nonatomic) unsigned int nearbyActionV2Flags;
@property (copy, nonatomic) NSData *nearbyActionV2TargetData;
@property (nonatomic) unsigned char nearbyActionV2Type;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) long long bluetoothState;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;

- (void)_activateXPCCompleted:(id)a0;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)description;
- (void)encodeWithXPCObject:(id)a0;
- (void)_invalidateDirect;
- (id)_ensureXPCStarted;
- (void)xpcReceivedMessage:(id)a0;
- (void)_activateDirectStart;
- (void).cxx_destruct;
- (id)init;
- (void)_activate;
- (void)invalidate;
- (void)_update;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (void)_xpcReceivedPowerStateChanged:(id)a0;
- (void)_xpcReceivedMessage:(id)a0;
- (BOOL)updateWithCBAdvertiser:(id)a0;

@end
