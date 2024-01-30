@class NSString;

@interface BLSHNullInactiveBudgetPolicy : NSObject <BLSHInactiveBudgetPolicing_Private>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateAndChargeFutureSpecifier:(id)a0 nextSpecifier:(id)a1 forEnvironment:(id)a2;
- (long long)allowedFidelityAtDate:(id)a0 forEnvironment:(id)a1 expectedFidelity:(long long)a2;
- (void)resetFutureSpecifiers;
- (void)performInvalidation;
- (void)purgeStaleDataForNowDate:(id)a0;
- (void)chargeRenderedSpecifier:(id)a0;
- (void)invalidateAtRequestDate:(id)a0 forEnvironment:(id)a1 invalidationBlock:(id /* block */)a2;
- (void)resetBudgetForProcess:(id)a0 reason:(id)a1;

@end
