@interface _DKSyncStreamsTombstoneRequirement : _DKTombstoneRequirement

- (id)propertiesToFetch;
- (id)predicate;
- (id)eventPredicate;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromEvent:(id)a1;
- (void)assignPropertiesToTombstone:(id)a0 extractedFromPartialEvent:(id)a1;

@end
