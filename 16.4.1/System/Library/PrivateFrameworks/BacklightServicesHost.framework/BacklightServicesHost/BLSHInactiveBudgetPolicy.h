@class NSString, NSMutableDictionary, BLSHNullInactiveProcessBudget;

@interface BLSHInactiveBudgetPolicy : NSObject <BLSHInactiveBudgetPolicing_Private> {
    NSMutableDictionary *_budgets;
    id /* block */ _budgetFactory;
    BLSHNullInactiveProcessBudget *_nullBudget;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateAndChargeFutureSpecifier:(id)a0 nextSpecifier:(id)a1 forEnvironment:(id)a2;
- (long long)allowedFidelityAtDate:(id)a0 forEnvironment:(id)a1 expectedFidelity:(long long)a2;
- (void)resetFutureSpecifiers;
- (void)performInvalidation;
- (void)purgeStaleDataForNowDate:(id)a0;
- (id)initWithOSInterfaceProvider:(id)a0;
- (void)chargeRenderedSpecifier:(id)a0;
- (void)invalidateAtRequestDate:(id)a0 forEnvironment:(id)a1 invalidationBlock:(id /* block */)a2;
- (void)resetBudgetForProcess:(id)a0 reason:(id)a1;
- (id)initWithBudgetFactory:(id /* block */)a0;
- (void).cxx_destruct;

@end
