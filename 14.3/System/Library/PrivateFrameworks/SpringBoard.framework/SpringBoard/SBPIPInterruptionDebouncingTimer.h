@class SBPIPInterruptionAssertion;

@interface SBPIPInterruptionDebouncingTimer : BSTimer

@property (weak, nonatomic) SBPIPInterruptionAssertion *debouncedAssertion;

- (void).cxx_destruct;

@end
