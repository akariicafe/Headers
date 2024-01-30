@class HMDMTSPairingServer, HMDMTSDeviceSetupServer, MTSXPCServer;

@interface HMDMTSXPCServer : HMFObject

@property (readonly) MTSXPCServer *xpcServer;
@property (readonly) HMDMTSPairingServer *pairingServer;
@property (readonly) HMDMTSDeviceSetupServer *deviceSetupServer;

- (void)start;
- (void).cxx_destruct;
- (id)initWithPairingServer:(id)a0 deviceSetupServer:(id)a1;
- (id)initWithPairingServer:(id)a0 deviceSetupServer:(id)a1 xpcServer:(id)a2;

@end
