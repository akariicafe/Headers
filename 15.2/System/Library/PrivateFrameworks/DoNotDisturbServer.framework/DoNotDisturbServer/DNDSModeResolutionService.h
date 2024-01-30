@interface DNDSModeResolutionService : NSObject

- (unsigned long long)_priorityForModeAssertion:(id)a0;
- (id)recalculateModeForSnapshot:(id)a0;
- (BOOL)_preferModeAssertion:(id)a0 toModeAssertion:(id)a1;

@end
