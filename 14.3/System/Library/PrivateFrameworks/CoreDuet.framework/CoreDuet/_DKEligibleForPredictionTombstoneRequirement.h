@interface _DKEligibleForPredictionTombstoneRequirement : _DKTombstoneRequirement

- (id)predicate;
- (id)propertiesToFetch;
- (id)eventPredicate;
- (id)eligibleForPredictionKey;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (id)identifier;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;

@end
