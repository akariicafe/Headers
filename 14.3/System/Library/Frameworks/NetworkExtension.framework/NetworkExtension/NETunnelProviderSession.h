@interface NETunnelProviderSession : NEVPNConnection

- (BOOL)startTunnelWithOptions:(id)a0 andReturnError:(id *)a1;
- (void)stopTunnel;
- (BOOL)sendProviderMessage:(id)a0 returnError:(id *)a1 responseHandler:(id /* block */)a2;

@end
