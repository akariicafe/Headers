@class MTRDevice;

@interface MTRClusterWiFiNetworkDiagnostics : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (void)resetCountsWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeBSSIDWithParams:(id)a0;
- (id)readAttributeBeaconLostCountWithParams:(id)a0;
- (id)readAttributeBeaconRxCountWithParams:(id)a0;
- (id)readAttributeBssidWithParams:(id)a0;
- (id)readAttributeChannelNumberWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeCurrentMaxRateWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeOverrunCountWithParams:(id)a0;
- (id)readAttributePacketMulticastRxCountWithParams:(id)a0;
- (id)readAttributePacketMulticastTxCountWithParams:(id)a0;
- (id)readAttributePacketUnicastRxCountWithParams:(id)a0;
- (id)readAttributePacketUnicastTxCountWithParams:(id)a0;
- (id)readAttributeRSSIWithParams:(id)a0;
- (id)readAttributeRssiWithParams:(id)a0;
- (id)readAttributeSecurityTypeWithParams:(id)a0;
- (id)readAttributeWiFiVersionWithParams:(id)a0;
- (void)resetCountsWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)resetCountsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)resetCountsWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;

@end
