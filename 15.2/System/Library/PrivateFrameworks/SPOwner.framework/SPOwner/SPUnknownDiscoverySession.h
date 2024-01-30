@class SPUnknownDiscoverySessionState, NSString, FMXPCSession, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue, SPUnknownDiscoveryXPCProtocol;

@interface SPUnknownDiscoverySession : NSObject <SPUnknownDiscoveryXPCClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPUnknownDiscoveryXPCProtocol> proxy;
@property (copy, nonatomic) SPUnknownDiscoverySessionState *state;
@property (copy, nonatomic) id /* block */ sessionInvalidatedCallback;
@property (copy, nonatomic) id /* block */ accessoryDiscoveredCallback;
@property (copy, nonatomic) id /* block */ accessoryDiscoveryErrorCallback;
@property (copy, nonatomic) id /* block */ accessoryDiscoveryFinishedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)remoteInterface;
+ (id)exportedInterface;

- (void)invalidationHandler:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)interruptionHandler:(id)a0;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;
- (void)stop;
- (id)initWithPreviousState:(id)a0;
- (oneway void)discoveredUnknownAccessory:(id)a0;
- (oneway void)lostUnknownAccessory:(id)a0;
- (oneway void)unknownAccessoryDiscoveryError:(id)a0;
- (oneway void)unknownAccessoryDiscoveryFinished;
- (void)startDiscoveryWithScanRate:(long long)a0 timeout:(double)a1 completion:(id /* block */)a2;
- (void)fetchEncryptedPayloadForUnknownBeacon:(id)a0 completion:(id /* block */)a1;
- (void)stopDiscoveryWithCompletion:(id /* block */)a0;

@end
