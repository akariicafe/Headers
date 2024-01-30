@class NSString, NRDevicePairingCriteria, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface NRDevicePairingManager : NSObject {
    NSString *_name;
    NRDevicePairingCriteria *_pairingCriteria;
    NSData *_extendedMetadata;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (nonatomic) unsigned long long managerState;
@property (copy, nonatomic) id /* block */ candidateDiscoveredHandler;
@property (copy, nonatomic) id /* block */ candidateLostHandler;
@property (copy, nonatomic) id /* block */ authRequestHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)startDiscoveryWithCompletion:(id /* block */)a0;
- (void)cancelPairing;
- (void)cancelDiscovery;
- (id)initWithDeviceName:(id)a0 pairingCriteria:(id)a1 extendedMetadata:(id)a2 queue:(id)a3;
- (void)prepareForPairingWithCompletion:(id /* block */)a0;
- (void)requestAuthMethodForDevice:(id)a0 authMethod:(unsigned long long)a1 withCompletion:(id /* block */)a2;
- (void)retrieveExtendedMetadata:(id)a0 withCompletion:(id /* block */)a1;
- (void)startPairingDevice:(id)a0 withCompletion:(id /* block */)a1 resultBlock:(id /* block */)a2;

@end
