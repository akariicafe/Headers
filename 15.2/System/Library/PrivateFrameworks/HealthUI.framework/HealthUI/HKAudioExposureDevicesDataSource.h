@class HKObserverSet, NSSet, NSDictionary, HKHealthStore, HKQuery;

@interface HKAudioExposureDevicesDataSource : NSObject

@property (nonatomic, getter=isReady) BOOL ready;
@property (nonatomic) unsigned long long deviceType;
@property (copy, nonatomic) NSSet *devices;
@property (copy, nonatomic) NSDictionary *devicesByName;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKObserverSet *observers;
@property (retain, nonatomic) HKQuery *query;
@property (readonly, nonatomic) long long deviceCount;

- (void)startQuery;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_cleanUp;
- (id)initWithDeviceType:(unsigned long long)a0 healthStore:(id)a1;
- (id)_makeDeviceQueryForDeviceType;
- (void)_notify_dataSourceIsReady;
- (id)_localizedNameForDevice:(id)a0;
- (id)_sampleTypeForDeviceType;
- (void)cancelQuery;

@end
