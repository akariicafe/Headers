@class NSString, MTSXPCServerProxy;

@interface MTSSystemCommissionerPairingManager : NSObject <HMFLogging>

@property (readonly) MTSXPCServerProxy *serverProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)fetchPairingsWithCompletionHandler:(id /* block */)a0;
- (void)removePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchDevicePairingsWithCompletionHandler:(id /* block */)a0;
- (id)initWithServerProxy:(id)a0;
- (void)removeDevicePairing:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDevicePairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
