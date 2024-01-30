@interface HDLiveDataCollector : HDDataCollector

- (void)_queue_beginStreaming;
- (void)_queue_handleSensorDatum:(id)a0 context:(id)a1;
- (void)beginUpdatesWithHandler:(id /* block */)a0;
- (id)hkObjectsFromSensorDatum:(id)a0 context:(id)a1;

@end
