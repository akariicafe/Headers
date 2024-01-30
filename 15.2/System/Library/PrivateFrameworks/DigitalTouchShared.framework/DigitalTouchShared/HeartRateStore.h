@class HKQuery, HKHealthStore;

@interface HeartRateStore : NSObject {
    BOOL _heartRateEnabled;
    HKHealthStore *_healthStore;
}

@property (retain, nonatomic) HKQuery *heartRateQuery;
@property (nonatomic) unsigned long long recentHeartRate;
@property (nonatomic) double recentHeartRateTime;

+ (id)sharedStore;

- (void).cxx_destruct;
- (id)init;
- (void)_updateHeartRateEnabled;
- (void)_updateHeartRateWithCompletion:(id /* block */)a0;
- (void)recentHeartRateWithCompletion:(id /* block */)a0;

@end
