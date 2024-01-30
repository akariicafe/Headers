@class NSString;

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (int)requiredEntitlement;
- (void)validateWithCompletionHandler:(id /* block */)a0;
- (void)setAppUUIDMap:(id)a0;
- (void)setVirtualInterfaceSocket:(id)a0;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(id /* block */)a0;
- (void)requestSocket:(BOOL)a0 interface:(id)a1 local:(id)a2 remote:(id)a3 completionHandler:(id /* block */)a4;

@end
