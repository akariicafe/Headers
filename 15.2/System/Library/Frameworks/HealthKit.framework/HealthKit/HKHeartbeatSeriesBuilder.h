@class NSMutableData, NSMutableDictionary, NSDate;

@interface HKHeartbeatSeriesBuilder : HKSeriesBuilder {
    NSDate *_startDate;
    NSMutableDictionary *_mutableMetadata;
    NSMutableData *_mutableHeartbeats;
    unsigned long long _count;
    double _lastHeartbeatTimeInterval;
}

@property (class, readonly) unsigned long long maximumCount;

- (void)discard;
- (void)_resourceQueue_addMetadata:(id)a0 completion:(id /* block */)a1;
- (id)initWithHealthStore:(id)a0 device:(id)a1 startDate:(id)a2;
- (void)_resourceQueue_addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)a0 precededByGap:(BOOL)a1 completion:(id /* block */)a2;
- (void)_resourceQueue_finishSeriesWithCompletion:(id /* block */)a0;
- (void)addHeartbeatWithTimeIntervalSinceSeriesStartDate:(double)a0 precededByGap:(BOOL)a1 completion:(id /* block */)a2;
- (void)finishSeriesWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addMetadata:(id)a0 completion:(id /* block */)a1;

@end
