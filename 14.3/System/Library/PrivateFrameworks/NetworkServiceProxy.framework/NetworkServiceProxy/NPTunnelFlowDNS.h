@class NSPDNSPacket;

@interface NPTunnelFlowDNS : NPTunnelFlowUDP

@property (retain) NSPDNSPacket *query;
@property long long tunnelResult;
@property (retain) NSPDNSPacket *tunnelDNSResponse;
@property long long directResult;
@property (retain) NSPDNSPacket *directDNSResponse;
@property void *tunnelResponseTimer;
@property BOOL telemetryReported;

- (void).cxx_destruct;
- (void)handleAppData:(id)a0;
- (void)sendDataToClient:(id)a0 fromTunnel:(BOOL)a1;
- (void)closeFromDirectConnectionWithError:(int)a0;
- (BOOL)shouldSendDataToClient:(id)a0 fromTunnel:(BOOL)a1;
- (BOOL)checkAndReportTelemetry;
- (void)closeFromTunnel;
- (id)addDNSInfoToTelemetry:(id)a0;
- (id)resultToString:(long long)a0;
- (id)createStateDictionaryWithResult:(long long)a0 response:(id)a1;
- (void)handleTunnelConnected;
- (void)cleanupLosingConnection:(BOOL)a0;

@end
