@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)bundleURL;
- (BOOL)isPermittedToUsePublicAPI;
- (id)initWithClient:(id)a0;
- (BOOL)isConnected;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (id)localizedName;
- (int)processIdentifier;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleIdentifier;
- (id)vendorProtocolDelegate;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;

@end
