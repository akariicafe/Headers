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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interruptionHandler:(id)a0;
- (id)initWithPreviousState:(id)a0;
- (void)invalidationHandler:(id)a0;
- (oneway void)discoveredUnknownAccessory:(id)a0;
- (oneway void)lostUnknownAccessory:(id)a0;
- (oneway void)unknownAccessoryDiscoveryError:(id)a0;
- (void)fetchEncryptedPayloadForUnknownBeacon:(id)a0 completion:(id /* block */)a1;
- (void)stopDiscoveryWithCompletion:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)stop;
- (id)exportedInterface;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;

@end
