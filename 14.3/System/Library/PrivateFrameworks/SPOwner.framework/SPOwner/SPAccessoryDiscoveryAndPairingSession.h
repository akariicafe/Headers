@class NSString, FMXPCSession, FMXPCServiceDescription, NSObject, SPAccessoryDiscoverySessionState;
@protocol OS_dispatch_queue, SPAccessoryDiscoveryXPCProtocol;

@interface SPAccessoryDiscoveryAndPairingSession : NSObject <SPAccessoryDiscoveryXPCClientProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPAccessoryDiscoveryXPCProtocol> proxy;
@property (copy, nonatomic) SPAccessoryDiscoverySessionState *state;
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
- (id)init;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)stop;
- (oneway void)discoveredAccessory:(id)a0;
- (oneway void)lostAccessory:(id)a0;
- (oneway void)accessoryDiscoveryError:(id)a0;
- (void)startAccessoryDiscoveryWithCompletion:(id /* block */)a0;
- (void)initiatePairingWith:(id)a0 completion:(id /* block */)a1;
- (void)stopAccessoryDiscoveryWithCompletion:(id /* block */)a0;
- (void)finalizePairingWith:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)invalidatePairingWith:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;

@end
