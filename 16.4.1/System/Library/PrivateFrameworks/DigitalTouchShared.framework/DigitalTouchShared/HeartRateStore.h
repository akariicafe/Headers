@class HKQuery, HKHealthStore;

@interface HeartRateStore : NSObject {
    BOOL _heartRateEnabled;
    HKHealthStore *_healthStore;
}

@property (retain, nonatomic) HKQuery *heartRateQuery;
@property (nonatomic) unsigned long long recentHeartRate;
@property (nonatomic) double recentHeartRateTime;

+ (id)sharedStore;

- (id)init;
- (void).cxx_destruct;
- (void)_updateHeartRateWithCompletion:(id /* block */)a0;
- (void)_updateHeartRateEnabled;
- (void)recentHeartRateWithCompletion:(id /* block */)a0;

@end
