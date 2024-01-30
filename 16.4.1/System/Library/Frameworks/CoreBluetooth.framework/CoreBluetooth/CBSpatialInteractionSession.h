@class NSArray, NSString, NSData, NSMutableDictionary, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, OS_dispatch_source;

@interface CBSpatialInteractionSession : NSObject <CUXPCCodable, CBActivatable, CBDeviceReporting, CBErrorReporting, CBInterruptable, CBLabelable, CBStateReporting, CBSystemOverridable> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    NSObject<OS_dispatch_source> *_advertiseRateTimer;
    BOOL _changesPending;
    NSMutableDictionary *_deviceMap;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSMutableDictionary *_peerMap;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (copy, nonatomic) NSData *advertisingAddressData;
@property (nonatomic) unsigned int clientID;
@property (copy, nonatomic) NSData *identifierData;
@property (nonatomic) unsigned int internalFlags;
@property (copy, nonatomic) NSData *irkData;
@property (nonatomic) int scanRateOverride;
@property (retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint;
@property (copy, nonatomic) NSData *tokenData;
@property (nonatomic) int advertiseRate;
@property (copy, nonatomic) id /* block */ advertisingAddressChangedHandler;
@property (copy, nonatomic) id /* block */ aopDataHandler;
@property (nonatomic) unsigned int controlFlags;
@property (copy, nonatomic) id /* block */ measurementHandler;
@property (nonatomic) int scanRate;
@property (nonatomic) int scanRateScreenOff;
@property (copy, nonatomic) id /* block */ tokenChangedHandler;
@property (copy) NSData *uwbConfigData;
@property (nonatomic) unsigned int uwbTokenFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (readonly, copy) NSArray *discoveredDevices;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) long long bluetoothState;
@property (copy, nonatomic) id /* block */ bluetoothStateChangedHandler;
@property (readonly, nonatomic) unsigned int systemOverrideFlags;
@property (copy, nonatomic) id /* block */ systemOverrideHandler;

+ (id)dictionaryWithTokenData:(id)a0 error:(id *)a1;

- (void)_xpcReceivedMessage:(id)a0;
- (void)_xpcReceivedAdvertisingAddressChanged:(id)a0;
- (id)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)encodeWithXPCObject:(id)a0;
- (void)_activateXPCStart:(BOOL)a0;
- (BOOL)updateWithSession:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)_addPeerToken:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)_updateIfNeededWithBlock:(id /* block */)a0;
- (void)_update;
- (void)_xpcReceivedDeviceFound:(id)a0;
- (void)_reAddTokens;
- (void)addPeerToken:(id)a0 completion:(id /* block */)a1;
- (void)_xpcReceivedEvent:(id)a0;
- (void)_xpcReceivedPowerStateChanged:(id)a0;
- (void)_invalidateDirect;
- (void)_activate;
- (void)_interrupted;
- (id)descriptionWithLevel:(int)a0;
- (void)_lostAllDevices;
- (void)addPeerToken:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;
- (void)removePeerToken:(id)a0 completion:(id /* block */)a1;
- (void)dealloc;
- (void)setAdvertiseRate:(int)a0 timeout:(double)a1;
- (void)_xpcReceivedSystemOverrideChanged:(id)a0;
- (void)_activateXPCCompleted:(id)a0 reactivate:(BOOL)a1;
- (void)_xpcReceivedDeviceLost:(id)a0;
- (id)init;
- (id)description;
- (void)_xpcReceivedAOPData:(id)a0;
- (void)invalidate;
- (BOOL)matchesWithDevice:(id)a0;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activateDirectStart;

@end
