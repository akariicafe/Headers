@class NSNumber, HKHealthStore, HKSPObserverSet;

@interface HKSPAgeMonitor : NSObject

@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) BOOL needUpdate;
@property (nonatomic) int characteristicUpdateToken;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSNumber *age;

- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerForNotifications;
- (void)unregisterForNotifications;
- (void)dealloc;
- (void)_withLock:(id /* block */)a0;
- (id)_lock_age;
- (id)initWithCurrentDateProvider:(id /* block */)a0 healthStore:(id)a1;
- (void)checkForAgeChange;

@end
