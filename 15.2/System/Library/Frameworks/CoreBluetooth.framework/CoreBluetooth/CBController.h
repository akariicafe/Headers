@class NSString, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface CBController : NSObject <CBXPCReceivable, CUXPCCodable, CBActivatable, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting> {
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
@property (readonly, nonatomic) int inquiryState;
@property (copy, nonatomic) id /* block */ inquiryStateChangedHandler;
@property (copy, nonatomic) id /* block */ relayMessageHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) long long bluetoothState;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;

+ (id)controllerInfoAndReturnError:(id *)a0;
+ (id)controllerInfoWithEndpoint:(id)a0 error:(id *)a1;
+ (id)performDeviceRequest:(id)a0 device:(id)a1 xpcEndpoint:(id)a2 error:(id *)a3;
+ (void)setOfflineAdvertisingParams:(id)a0;
+ (BOOL)bluetoothModificationAllowed;
+ (BOOL)setBluetoothModificationAllowed:(BOOL)a0 error:(id *)a1;
+ (BOOL)safeToPowerOffBluetooth;
+ (BOOL)systemHasOnlyBluetoothPointingDevices;
+ (id)performDeviceRequest:(id)a0 device:(id)a1 error:(id *)a2;
+ (id)readPrefKeys:(id)a0 error:(id *)a1;
+ (BOOL)writePrefKey:(id)a0 value:(id)a1 error:(id *)a2;

- (void)getPowerStateWithCompletion:(id /* block */)a0;
- (void)_activateXPCCompleted:(id)a0;
- (void)modifyDevice:(id)a0 peerSourceDevice:(id)a1 peerSourceState:(char)a2 completionHandler:(id /* block */)a3;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)getDevicesWithFlags:(unsigned int)a0 completionHandler:(id /* block */)a1;
- (BOOL)setLowPowerModeWithReason:(int)a0 error:(id *)a1;
- (void)_xpcReceivedRelayMessage:(id)a0;
- (void)performDeviceRequest:(id)a0 device:(id)a1 completion:(id /* block */)a2;
- (void)setPowerState:(long long)a0 completion:(id /* block */)a1;
- (void)getControllerSettingsWithCompletionHandler:(id /* block */)a0;
- (void)diagnosticLog:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (id)descriptionWithLevel:(int)a0;
- (void)_activateAssertionWithFlagsXPC:(unsigned int)a0 completion:(id /* block */)a1;
- (id)description;
- (void)modifyControllerSettings:(id)a0 completionHandler:(id /* block */)a1;
- (void)modifyDevice:(id)a0 peerSourceDevice:(id)a1 peerSourceState:(char)a2 requestFlags:(unsigned int)a3 completionHandler:(id /* block */)a4;
- (void)encodeWithXPCObject:(id)a0;
- (void)_invalidateDirect;
- (id)_ensureXPCStarted;
- (void)xpcReceivedMessage:(id)a0;
- (void)_activateDirectStart;
- (void)setLowPowerModeWithReason:(int)a0 completion:(id /* block */)a1;
- (void)updateIdentities:(id)a0 completion:(id /* block */)a1;
- (void)_xpcReceivedInquiryStateChanged:(id)a0;
- (void).cxx_destruct;
- (void)modifyDevice:(id)a0 connectionPriorityDevices:(id)a1 timeoutSeconds:(double)a2 completionHandler:(id /* block */)a3;
- (id)init;
- (void)_activate;
- (void)sendRelayMessageType:(unsigned char)a0 messageData:(id)a1 conduitDevice:(id)a2 destinationDevice:(id)a3 completionHandler:(id /* block */)a4;
- (void)_xpcReceivedDiscoverableStateChanged:(id)a0;
- (void)modifyDevice:(id)a0 settings:(id)a1 completion:(id /* block */)a2;
- (void)activateAssertionWithFlags:(unsigned int)a0 completion:(id /* block */)a1;
- (void)_activateAssertionWithFlagsDirect:(unsigned int)a0 completion:(id /* block */)a1;
- (void)invalidate;
- (void)_update;
- (void)deleteDevice:(id)a0 completion:(id /* block */)a1;
- (void)modifyDevice:(id)a0 completion:(id /* block */)a1;
- (void)_interrupted;
- (void)_invalidated;
- (void)dealloc;
- (void)_xpcReceivedPowerStateChanged:(id)a0;
- (void)diagnosticShow:(id)a0 completion:(id /* block */)a1;
- (void)getControllerInfoWithCompletion:(id /* block */)a0;
- (void)_xpcReceivedMessage:(id)a0;

@end
