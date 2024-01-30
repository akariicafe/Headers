@interface _ATXClientModelShadowMetricsDataSourceBase : NSObject {
    long long _clientModelType;
}

- (BOOL)isPrediction:(id)a0 equalToPrediction:(id)a1;
- (id)_eventBodyDateForEvent:(id)a0;
- (void)enumeratePredictionsInCache:(id)a0 ofType:(long long)a1 usingBlock:(id /* block */)a2;
- (id)initWithClientModelType:(long long)a0;
- (unsigned long long)numberOfPredictionsInCache:(id)a0 ofType:(long long)a1;
- (id)predictionCachePublisherFromStartDate:(id)a0;
- (void)replayHistoryWithShadowEventPublisher:(id)a0 startDate:(id)a1 endDate:(id)a2 shadowEventHandler:(id /* block */)a3 predictionCacheHandler:(id /* block */)a4;

@end
