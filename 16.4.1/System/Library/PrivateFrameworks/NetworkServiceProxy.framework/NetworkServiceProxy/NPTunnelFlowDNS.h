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
- (void)closeFromTunnel;
- (id)resultToString:(long long)a0;
- (id)addDNSInfoToTelemetry:(id)a0;
- (BOOL)checkAndReportTelemetry;
- (void)cleanupLosingConnection:(BOOL)a0;
- (void)closeFromDirectConnectionWithError:(int)a0;
- (id)createStateDictionaryWithResult:(long long)a0 response:(id)a1;
- (void)handleAppData:(id)a0;
- (void)handleTunnelConnected;
- (void)sendDataToClient:(id)a0 fromTunnel:(BOOL)a1;
- (BOOL)shouldSendDataToClient:(id)a0 fromTunnel:(BOOL)a1;

@end
