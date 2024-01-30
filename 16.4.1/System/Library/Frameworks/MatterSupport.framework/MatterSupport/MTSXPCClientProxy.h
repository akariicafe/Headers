@protocol MTSXPCClientProxyDelegate, MTSXPCConnection;

@interface MTSXPCClientProxy : HMFObject <MTSXPCServerInterface>

@property (readonly) id<MTSXPCConnection> connection;
@property (weak) id<MTSXPCClientProxyDelegate> delegate;
@property (readonly) BOOL hasDevicePairingEntitlement;
@property (readonly) BOOL hasPrivateHomeKitEntitlement;
@property (readonly) BOOL hasMatterSetupPayloadEntitlement;

- (id)initWithConnection:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (void)fetchDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchSystemCommissionerPairingsWithCompletionHandler:(id /* block */)a0;
- (void)removeAllDevicePairingsForSystemCommissionerPairingUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeDevicePairingWithUUID:(id)a0 forSystemCommissionerPairingUUID:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeSystemCommissionerPairingWithUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)performDeviceSetupUsingRequest:(id)a0 completionHandler:(id /* block */)a1;

@end
