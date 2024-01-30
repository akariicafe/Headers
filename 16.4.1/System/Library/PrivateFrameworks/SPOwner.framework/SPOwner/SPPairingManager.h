@class FMXPCServiceDescription, FMXPCSession, NSObject;
@protocol OS_dispatch_queue, SPPairingManagerXPCProtocol;

@interface SPPairingManager : NSObject

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPPairingManagerXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)remoteInterface;
- (id)userAgentProxy;
- (void)currentBeaconingKeyWithCompletion:(id /* block */)a0;
- (void)initiatePairingSessionWithCompletion:(id /* block */)a0;
- (void)finalizePairingWithSession:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
- (void)getLocalPairingDataWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)invalidatePairingSession:(id)a0 completion:(id /* block */)a1;
- (void)finalizePairingWithSession:(id)a0 name:(id)a1 roleId:(long long)a2 roleEmoji:(id)a3 keyStatus:(id)a4 collaborativeKey:(id)a5 signature:(id)a6 completion:(id /* block */)a7;
- (void)getOfflineFindingInfoWithCurrentData:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)alwaysBeaconWildStateWithCompletion:(id /* block */)a0;
- (void)setAlwaysBeaconState:(BOOL)a0 completion:(id /* block */)a1;
- (void)verifyPairingWithPairingSession:(id)a0 signature:(id)a1 attestation:(id)a2 systemPublicKey:(id)a3 refKeyPublicKey:(id)a4 systemVersion:(id)a5 vendorId:(long long)a6 productId:(long long)a7 ecid:(id)a8 chipId:(id)a9 serialNumber:(id)a10 collaborativeKey:(id)a11 completion:(id /* block */)a12;
- (void)setAlwaysBeaconWildState:(BOOL)a0 completion:(id /* block */)a1;
- (void)allPairingErrorsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)unpairUUID:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;

@end
