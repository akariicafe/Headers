@class NSString;

@interface NEExtensionPacketTunnelProviderContext : NEExtensionTunnelProviderContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol> {
    BOOL _testDisconnectAndDisposeTimeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (id)extensionPoint;
- (void)dispose;
- (void)startWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)completeSession;
- (void)stopWithReason:(int)a0;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(id /* block */)a0;
- (void)requestSocket:(BOOL)a0 interface:(id)a1 local:(id)a2 remote:(id)a3 completionHandler:(id /* block */)a4;
- (Class)requiredProviderSuperClass;
- (void)setAppUUIDMap:(id)a0;
- (void)setTunnelConfiguration:(id)a0 completionHandler:(id /* block */)a1;
- (void)setupVirtualInterface:(id)a0;

@end
