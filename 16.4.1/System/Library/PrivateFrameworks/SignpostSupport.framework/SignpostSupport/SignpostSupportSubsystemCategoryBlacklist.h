@interface SignpostSupportSubsystemCategoryBlacklist : SignpostSupportSubsystemCategoryFilter

- (id)initWithEntries:(id)a0;
- (void)_forceInclusionOfSubsystem:(id)a0 category:(id)a1;
- (BOOL)passesSubsystem:(id)a0 category:(id)a1;
- (unsigned long long)_compoundPredicateType;
- (BOOL)_wantsNotSubsystem;
- (id)liveStreamingPredicate;

@end
