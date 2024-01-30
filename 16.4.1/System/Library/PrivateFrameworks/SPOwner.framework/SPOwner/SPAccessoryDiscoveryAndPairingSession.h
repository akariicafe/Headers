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

+ (id)remoteInterface;
+ (id)exportedInterface;

- (void)invalidationHandler:(id)a0;
- (void)interruptionHandler:(id)a0;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)initiatePairingWith:(id)a0 completion:(id /* block */)a1;
- (void)accessoryDiscoveryError:(id)a0;
- (void)discoveredAccessory:(id)a0;
- (void)finalizePairingWith:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (id)initWithPreviousState:(id)a0;
- (void)invalidatePairingWith:(id)a0 completion:(id /* block */)a1;
- (void)lostAccessory:(id)a0;
- (void)startAccessoryDiscoveryWithCompletion:(id /* block */)a0;
- (void)stopAccessoryDiscoveryWithCompletion:(id /* block */)a0;

@end
