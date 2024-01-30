@class SBPIPInterruptionAssertion;

@interface SBPIPInterruptionDebouncingTimer : BSAbsoluteMachTimer

@property (weak, nonatomic) SBPIPInterruptionAssertion *debouncedAssertion;

- (void).cxx_destruct;

@end
