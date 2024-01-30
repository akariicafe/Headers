@interface SignpostSupportSubsystemCategoryBlocklist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)a0;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;
- (unsigned long long)_compoundPredicateType;
- (id)liveStreamingPredicate;

@end
