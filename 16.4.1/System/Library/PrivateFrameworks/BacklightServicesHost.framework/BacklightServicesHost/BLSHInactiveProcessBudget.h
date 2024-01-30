@class NSString, BLSHInactiveProcessSecondsBudget, BLSHInactiveProcessMinutesBudget;
@protocol BLSHOSInterfaceProviding;

@interface BLSHInactiveProcessBudget : NSObject <BLSHInactiveProcessBudgeting> {
    NSString *_identifier;
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    BLSHInactiveProcessSecondsBudget *_secondsBudget;
    BLSHInactiveProcessMinutesBudget *_minutesBudget;
    unsigned long long _stateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetFutureSpecifiers;
- (void)chargeRenderedSpecifier:(id)a0 expectedFidelity:(long long)a1;
- (void)performInvalidation;
- (id)initWithIdentifier:(id)a0 osInterfaceProvider:(id)a1;
- (id)validateAndChargeFutureSpecifier:(id)a0 nextSpecifier:(id)a1 expectedFidelity:(long long)a2;
- (void)invalidateAtRequestDate:(id)a0 expectedFidelity:(long long)a1 invalidationBlock:(id /* block */)a2;
- (BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)a0;
- (void)dealloc;
- (long long)allowedFidelityAtDate:(id)a0 expectedFidelity:(long long)a1;
- (void).cxx_destruct;

@end
