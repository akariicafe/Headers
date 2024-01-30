@class FMXPCServiceDescription, FMXPCSession, NSObject;
@protocol OS_dispatch_queue, SPPairingManagerXPCProtocol;

@interface SPPairingManager : NSObject

@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) FMXPCSession *session;
@property (retain, nonatomic) id<SPPairingManagerXPCProtocol> proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)alwaysBeaconStateWithCompletion:(id /* block */)a0;
- (id)init;
- (void)unpairUUID:(id)a0 force:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)remoteInterface;
- (void)currentBeaconingKeyWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void)setAlwaysBeaconState:(BOOL)a0 completion:(id /* block */)a1;
- (void)getLocalPairingDataWithCompletion:(id /* block */)a0;
- (void)allPairingErrorsWithCompletion:(id /* block */)a0;
- (id)userAgentProxy;

@end
