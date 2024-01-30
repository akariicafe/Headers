@interface DNDSModeResolutionService : NSObject

- (BOOL)_preferModeAssertion:(id)a0 toModeAssertion:(id)a1;
- (id)recalculateModeForSnapshot:(id)a0;
- (unsigned long long)_priorityForModeAssertion:(id)a0;

@end
