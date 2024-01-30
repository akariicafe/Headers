@class HKQuantitySample, HKAnchoredObjectQuery, HKHealthStore, HKHeartRateSummaryQuery, NSHashTable, HKHeartRateSummary, NSObject;
@protocol OS_dispatch_queue;

@interface NTKHeartRateQueryManager : NSObject {
    BOOL _deviceIsLocked;
    NSObject<OS_dispatch_queue> *_healthQueue;
    NSObject<OS_dispatch_queue> *_sampleQueue;
    HKHealthStore *_healthStore;
    HKAnchoredObjectQuery *_heartRateQuery;
    HKHeartRateSummaryQuery *_heartRateSummaryQuery;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (retain, nonatomic) HKQuantitySample *latestHeartRateSample;
@property (nonatomic, getter=hasCheckedDefaults) BOOL checkedDefaults;
@property (readonly, nonatomic) HKHeartRateSummary *latestHeartRateSummary;
@property (readonly, nonatomic) BOOL canUseFutureSamples;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)_startObserving;
- (id)_init;
- (void)_stopObserving;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)_enumerateObserversUsingBlock:(id /* block */)a0;
- (void)_notifyObserversOfLatestSummary;
- (BOOL)_alreadyObserving;
- (void)_findLatestHeartRateSample:(id)a0;
- (void)_handleDeviceLockChange;
- (BOOL)_haveObservers;
- (void)_notifyObserversOfLatestSample;
- (void)_queue_clearHeartRateSampleQueryWithError:(id)a0;
- (void)_queue_clearHeartRateSummaryQueryWithError:(id)a0;
- (void)_queue_retrieveLatestHeartRateOnce;
- (void)_queue_startObservingHeartRate;
- (void)_queue_startObservingHeartRateSummary;
- (void)_queue_stopObservingHeartRate;
- (void)_queue_stopObservingHeartRateSummary;
- (void)_stopObservingIfNeeded;
- (void)setHeartRateSamples:(id)a0;
- (void)setLatestHeartRateSummary:(id)a0;
- (void)startObservingIfNeeded;

@end
