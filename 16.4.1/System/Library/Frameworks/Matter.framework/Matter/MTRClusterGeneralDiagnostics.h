@class MTRDevice;

@interface MTRClusterGeneralDiagnostics : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeActiveHardwareFaultsWithParams:(id)a0;
- (id)readAttributeActiveNetworkFaultsWithParams:(id)a0;
- (id)readAttributeActiveRadioFaultsWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeBootReasonWithParams:(id)a0;
- (id)readAttributeBootReasonsWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (id)readAttributeNetworkInterfacesWithParams:(id)a0;
- (id)readAttributeRebootCountWithParams:(id)a0;
- (id)readAttributeTestEventTriggersEnabledWithParams:(id)a0;
- (id)readAttributeTotalOperationalHoursWithParams:(id)a0;
- (id)readAttributeUpTimeWithParams:(id)a0;
- (void)testEventTriggerWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)testEventTriggerWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;

@end
