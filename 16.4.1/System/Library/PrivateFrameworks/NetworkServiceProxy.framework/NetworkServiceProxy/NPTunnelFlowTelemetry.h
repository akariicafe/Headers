@interface NPTunnelFlowTelemetry : NPTunnelFlowHTTP

- (id)initWithTunnel:(id)a0 service:(id)a1 postURL:(id)a2;
- (void)handleTunnelConnected;
- (BOOL)isBestEffort;
- (void)reportTelemetry:(id)a0;

@end
