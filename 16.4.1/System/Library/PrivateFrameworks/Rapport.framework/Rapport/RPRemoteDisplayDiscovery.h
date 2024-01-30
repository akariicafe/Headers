@class NSArray, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayDiscovery : NSObject <NSSecureCoding, RPRemoteDisplayXPCClientInterface> {
    BOOL _activateCalled;
    NSMutableDictionary *_discoveredDevices;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) unsigned long long controlFlags;
@property (readonly, copy, nonatomic) NSArray *discoveredDevices;
@property (copy, nonatomic) id /* block */ deviceFoundHandler;
@property (copy, nonatomic) id /* block */ deviceLostHandler;
@property (copy, nonatomic) id /* block */ deviceChangedHandler;
@property (nonatomic) unsigned long long errorFlags;
@property (copy, nonatomic) id /* block */ errorFlagsChangedHandler;

- (void)encodeWithCoder:(id)a0;
- (void)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (void)_lostAllDevices;
- (id)init;
- (id)description;
- (void)invalidate;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(BOOL)a1;
- (void)remoteDisplayChangedDevice:(id)a0 changes:(unsigned int)a1;
- (void)remoteDisplayFoundDevice:(id)a0;
- (void)remoteDisplayLostDevice:(id)a0;
- (void)remoteDisplayUpdateErrorFlags:(unsigned long long)a0;
- (BOOL)shouldReportDevice:(id)a0;

@end
