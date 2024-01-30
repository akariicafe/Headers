@interface NPTunnelFlowTelemetry : NPTunnelFlowHTTP

- (void)handleTunnelConnected;
- (BOOL)isBestEffort;
- (id)initWithTunnel:(id)a0 service:(id)a1 postURL:(id)a2;
- (void)reportTelemetry:(id)a0;

@end
