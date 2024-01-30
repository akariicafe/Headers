@class NSNumber, HKHealthStore, HKSPObserverSet;

@interface HKSPAgeMonitor : NSObject

@property (readonly, copy, nonatomic) id /* block */ currentDateProvider;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKSPObserverSet *observers;
@property (readonly, nonatomic) BOOL needUpdate;
@property (nonatomic) int characteristicUpdateToken;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) NSNumber *age;

- (void)registerForNotifications;
- (id)init;
- (void).cxx_destruct;
- (id)_lock_age;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)unregisterForNotifications;
- (void)_withLock:(id /* block */)a0;
- (id)initWithCurrentDateProvider:(id /* block */)a0 healthStore:(id)a1;
- (void)checkForAgeChange;

@end
