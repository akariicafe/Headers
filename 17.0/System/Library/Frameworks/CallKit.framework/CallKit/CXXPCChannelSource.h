@class CXChannelServiceClient;

@interface CXXPCChannelSource : CXChannelSource

@property (retain, nonatomic) CXChannelServiceClient *client;

- (id)initWithClient:(id)a0;
- (BOOL)isConnected;
- (id)vendorProtocolDelegate;
- (struct { unsigned int x0[8]; })auditToken;
- (id)bundleIdentifier;
- (id)localizedName;
- (void).cxx_destruct;
- (BOOL)isPermittedToUsePrivateAPI;
- (id)bundleURL;
- (int)processIdentifier;
- (BOOL)isPermittedToUseBluetoothAccessories;
- (BOOL)isPermittedToUsePublicAPI;

@end
