@class NSUUID, NSString, HDAssertionManager;

@interface HDAssertion : NSObject {
    HDAssertionManager *_manager;
    long long _state;
    double _remainingBudget;
    double _budgetIntervalStartTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) long long rawState;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *assertionIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly) long long state;
@property (nonatomic) double budget;
@property (readonly) double remainingBudget;

- (long long)_takeWithManager:(id)a0;
- (long long)_lock_consumeBudgetThroughTime:(double)a0 error:(id *)a1;
- (id)description;
- (void)_setBudgetIntervalStartTime:(double)a0;
- (long long)_lock_state;
- (void).cxx_destruct;
- (id)_lock_cloneWithOwnerIdentifier:(id)a0;
- (double)_lock_remainingBudget;
- (id)_lock_setBudgetIntervalStartTime:(double)a0;
- (id)_lock_description;
- (void)invalidate;
- (id)cloneWithOwnerIdentifier:(id)a0;
- (void)dealloc;
- (id)initWithAssertionIdentifier:(id)a0 ownerIdentifier:(id)a1;
- (void)_invalidateAndRelease:(BOOL)a0;
- (BOOL)_consumeFromBudgetThroughTime:(double)a0;
- (BOOL)_lock_setBudget:(double)a0 error:(id *)a1;

@end
