@class HKSleepHealthStore, HKHealthStore;

@interface HKSPHealthStoreProvider : NSObject

@property (readonly, nonatomic) HKSleepHealthStore *sleepHealthStore;
@property (readonly, nonatomic) HKHealthStore *healthStore;

+ (id)_initializedLocalDeviceHealthStore;

- (id)initWithLocalDeviceHealthStore;
- (id)initWithSleepHealthStore:(id)a0 healthStore:(id)a1;
- (void).cxx_destruct;

@end
