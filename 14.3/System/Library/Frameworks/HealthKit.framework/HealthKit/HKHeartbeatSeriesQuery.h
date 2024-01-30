@class NSString, HKHeartbeatSeriesSample;

@interface HKHeartbeatSeriesQuery : HKQuery <HKHeartbeatSeriesQueryClientInterface> {
    id /* block */ _dataHandler;
    HKHeartbeatSeriesSample *_heartbeatSeries;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterfaceProtocol;

- (void)queue_queryDidDeactivate:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateHeartbeatsWithHandler:(id /* block */)a0;
- (void)client_deliverHeartbeats;
- (id)initWithHeartbeatSeries:(id)a0 dataHandler:(id /* block */)a1;
- (void)queue_deliverError:(id)a0;

@end
