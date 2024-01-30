@class NSArray, NSString, NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CBDiscovery : NSObject <CBSystemOverridable, CUXPCCodable, CBActivatable, CBDeviceReporting, CBLabelable, CBStateReporting> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _changesPending;
    NSMutableDictionary *_deviceMap;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (nonatomic) int bleScanRateOverride;
@property (nonatomic) unsigned int clientID;
@property (nonatomic) BOOL disabledActive;
@property (nonatomic) BOOL disabledPending;
@property (nonatomic) unsigned long long extraDiscoveryFlags;
@property (nonatomic) unsigned int internalFlags;
@property (nonatomic) unsigned int systemOverrideFlags;
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint;
@property (nonatomic) char bleRSSIThresholdHint;
@property (nonatomic) int bleScanRate;
@property (nonatomic) unsigned long long changeFlags;
@property (nonatomic) unsigned long long discoveryFlags;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ systemOverrideHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (readonly, copy) NSArray *discoveredDevices;
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
- (void)_xpcReceivedDeviceFound:(id)a0;
- (void)_lostAllDevices;
- (void)_activate;
- (void)_invalidated;
- (unsigned long long)updateWithXPCSubscriberInfo:(id)a0;
- (void)_xpcReceivedEvent:(id)a0;
- (id)description;
- (void)_update;
- (void)_xpcReceivedDeviceLost:(id)a0;
- (void)encodeWithXPCObject:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_interrupted;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)_activateXPCCompleted:(id)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (void)invalidate;

@end
