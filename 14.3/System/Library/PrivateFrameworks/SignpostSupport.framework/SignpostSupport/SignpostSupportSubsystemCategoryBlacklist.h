@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (unsigned long long)_compoundPredicateType;
- (id)initWithEntries:(id)a0;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (id)liveStreamingPredicate;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (BOOL)_wantsNotSubsystem;

@end
