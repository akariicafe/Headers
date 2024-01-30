@interface HDLiveDataCollector : HDDataCollector

- (void)_queue_beginStreaming;
- (void)beginUpdatesWithHandler:(id /* block */)a0;
- (id)hkObjectsFromSensorDatum:(id)a0 context:(id)a1;

@end
