@class MTRDevice;

@interface MTRClusterBarrierControl : MTRCluster

@property (readonly, nonatomic) unsigned short endpoint;
@property (readonly, nonatomic) MTRDevice *device;

- (void).cxx_destruct;
- (void)writeAttributeBarrierOpenPeriodWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeBarrierOpenEventsWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)barrierControlGoToPercentWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)barrierControlGoToPercentWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (void)barrierControlStopWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completion:(id /* block */)a2;
- (void)barrierControlStopWithExpectedValues:(id)a0 expectedValueInterval:(id)a1 completionHandler:(id /* block */)a2;
- (void)barrierControlStopWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completion:(id /* block */)a3;
- (void)barrierControlStopWithParams:(id)a0 expectedValues:(id)a1 expectedValueInterval:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithDevice:(id)a0 endpoint:(unsigned short)a1 queue:(id)a2;
- (id)initWithDevice:(id)a0 endpointID:(id)a1 queue:(id)a2;
- (id)readAttributeAcceptedCommandListWithParams:(id)a0;
- (id)readAttributeAttributeListWithParams:(id)a0;
- (id)readAttributeBarrierCapabilitiesWithParams:(id)a0;
- (id)readAttributeBarrierCloseEventsWithParams:(id)a0;
- (id)readAttributeBarrierClosePeriodWithParams:(id)a0;
- (id)readAttributeBarrierCommandCloseEventsWithParams:(id)a0;
- (id)readAttributeBarrierCommandOpenEventsWithParams:(id)a0;
- (id)readAttributeBarrierMovingStateWithParams:(id)a0;
- (id)readAttributeBarrierOpenEventsWithParams:(id)a0;
- (id)readAttributeBarrierOpenPeriodWithParams:(id)a0;
- (id)readAttributeBarrierPositionWithParams:(id)a0;
- (id)readAttributeBarrierSafetyStatusWithParams:(id)a0;
- (id)readAttributeClusterRevisionWithParams:(id)a0;
- (id)readAttributeFeatureMapWithParams:(id)a0;
- (id)readAttributeGeneratedCommandListWithParams:(id)a0;
- (void)writeAttributeBarrierCloseEventsWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeBarrierCloseEventsWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeBarrierClosePeriodWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeBarrierClosePeriodWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeBarrierCommandCloseEventsWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(id)a0 expectedValueInterval:(id)a1;
- (void)writeAttributeBarrierCommandOpenEventsWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeBarrierOpenEventsWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;
- (void)writeAttributeBarrierOpenPeriodWithValue:(id)a0 expectedValueInterval:(id)a1 params:(id)a2;

@end
