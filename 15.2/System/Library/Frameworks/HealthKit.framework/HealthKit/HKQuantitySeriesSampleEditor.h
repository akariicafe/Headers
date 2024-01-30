@class NSString, HKHealthStore, NSUUID, HKTaskServerProxyProvider, NSMutableSet, HKQuantitySample;

@interface HKQuantitySeriesSampleEditor : NSObject <_HKXPCExportable> {
    HKHealthStore *_healthStore;
    NSUUID *_identifier;
    HKTaskServerProxyProvider *_proxyProvider;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _state;
    NSMutableSet *_datesIntervalsToRemove;
}

@property (readonly, nonatomic) long long unitTest_state;
@property (readonly, copy) HKQuantitySample *quantitySample;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;

- (void)connectionInvalidated;
- (void)discard;
- (id)remoteInterface;
- (void)commitWithCompletion:(id /* block */)a0;
- (BOOL)_performWithError:(id *)a0 stateValidator:(id /* block */)a1 lockedBlock:(id /* block */)a2;
- (id)initWithHealthStore:(id)a0 quantitySample:(id)a1;
- (BOOL)removeQuantityForDateInterval:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)dealloc;

@end
