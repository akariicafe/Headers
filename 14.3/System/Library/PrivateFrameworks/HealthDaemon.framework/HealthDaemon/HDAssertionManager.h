@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDAssertionManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    BOOL _invalidated;
    BOOL _consumeBudgets;
    NSObject<OS_dispatch_source> *_budgetConsumptionTimer;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionExpirationQueue;

- (void)_budgetConsumptionTimerDidFire;
- (id)init;
- (void).cxx_destruct;
- (BOOL)takeAssertion:(id)a0;
- (id)activeAssertionsForIdentifier:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_lock_resumeBudgetConsumption;
- (void)_lock_releaseAssertion:(id)a0;
- (void)dealloc;
- (void)_lock_consumeBudgetsThroughTime:(double)a0;
- (void)_lock_consumeBudgetsThenResetTimerWithIntermediateBlock:(id /* block */)a0;
- (void)addObserver:(id)a0 forAssertionIdentifier:(id)a1 queue:(id)a2;
- (BOOL)hasActiveAssertionForIdentifier:(id)a0;
- (void)resumeBudgetConsumption;
- (id)ownerIdentifiersForAssertionIdentifier:(id)a0;
- (void)_postNotification:(id)a0 forAssertion:(id)a1;
- (id)allAssertionsForIdentifier:(id)a0;
- (void)_lock_suspendBudgetConsumption;
- (void)removeObserver:(id)a0 forAssertionIdentifier:(id)a1;
- (void)_releaseAssertion:(id)a0;
- (void)suspendBudgetConsumption;
- (void)_lock_setBudgetConsumptionTimerWithStartTime:(double)a0;
- (void)invalidate;
- (void)_lock_enumerateActiveAssertionsWithIdentifier:(id)a0 handler:(id /* block */)a1;

@end
