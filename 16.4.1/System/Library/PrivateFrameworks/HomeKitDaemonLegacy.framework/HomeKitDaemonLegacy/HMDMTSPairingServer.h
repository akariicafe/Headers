@class NSString, HMMTRSystemCommissionerPairingManager;

@interface HMDMTSPairingServer : HMFObject <HMFLogging, MTSDevicePairingServerInterface, MTSSystemCommissionerPairingServerInterface>

@property (readonly) HMMTRSystemCommissionerPairingManager *systemCommissionerPairingManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (id)initWithAccessoryBrowser:(id)a0;
- (id)initWithSystemCommissionerPairingManager:(id)a0;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
