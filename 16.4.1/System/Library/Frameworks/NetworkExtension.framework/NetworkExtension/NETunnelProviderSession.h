@interface NETunnelProviderSession : NEVPNConnection

- (BOOL)sendProviderMessage:(id)a0 returnError:(id *)a1 responseHandler:(id /* block */)a2;
- (BOOL)startTunnelWithOptions:(id)a0 andReturnError:(id *)a1;
- (void)stopTunnel;

@end
