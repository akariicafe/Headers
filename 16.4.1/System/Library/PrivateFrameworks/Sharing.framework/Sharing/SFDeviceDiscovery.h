@class NSSet, NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFDeviceDiscovery : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _activateCalled;
    unsigned long long _activateTicks;
    NSObject<OS_dispatch_source> *_consoleUserTimer;
    NSMutableDictionary *_devices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _legacy;
    BOOL _timeoutFired;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long scanRateOverride;
@property (copy, nonatomic) id /* block */ scanStateChangedHandler;
@property (nonatomic) unsigned int changeFlags;
@property (copy, nonatomic) NSSet *deviceFilter;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (nonatomic) unsigned long long discoveryFlags;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long fastScanMode;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) BOOL overrideScreenOff;
@property (copy, nonatomic) NSString *purpose;
@property (nonatomic) BOOL rssiChangeDetection;
@property (nonatomic) long long rssiThreshold;
@property (nonatomic) BOOL scanCache;
@property (nonatomic) long long scanRate;
@property (readonly, nonatomic) long long scanState;
@property (nonatomic) BOOL targetUserSession;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ timeoutHandler;
@property (nonatomic) BOOL trackPeers;
@property (retain, nonatomic) NSSet *useCases;

- (void)encodeWithCoder:(id)a0;
- (int)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)triggerEnhancedDiscovery:(id)a0 useCase:(unsigned int)a1 completion:(id /* block */)a2;
- (id)initWithCoder:(id)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)deviceDiscoveryFoundDevice:(id)a0;
- (void)deviceDiscoveryScanStateChanged:(long long)a0;
- (void)deviceDiscoveryLostDevice:(id)a0;
- (void)_interrupted;
- (void)triggerEnhancedDiscovery:(id)a0;
- (void)_startTimeoutIfNeeded;
- (void)dealloc;
- (void)_invokeBlockActivateSafe:(id /* block */)a0;
- (id)init;
- (void)_retryConsole;
- (void)fastScanTrigger:(id)a0;
- (id)description;
- (void)invalidate;
- (void)fastScanCancel:(id)a0;
- (void)deviceDiscoveryDeviceChanged:(id)a0 changes:(unsigned int)a1;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_timeoutTimerFired;

@end
