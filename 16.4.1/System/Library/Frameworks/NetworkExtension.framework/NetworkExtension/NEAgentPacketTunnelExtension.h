@interface NEAgentPacketTunnelExtension : NEAgentTunnelExtension {
    BOOL _isUserEthernetInterfaceCreated;
    long long _interfaceType;
}

- (void)extension:(id)a0 didSetTunnelConfiguration:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleExtensionStartedWithCompletionHandler:(id /* block */)a0;
- (void)setAppUUIDMap:(id)a0;

@end
