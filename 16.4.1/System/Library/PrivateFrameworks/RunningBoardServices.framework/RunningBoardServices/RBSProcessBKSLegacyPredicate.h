@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl

+ (id)legacyPredicateMatchingBundleIdentifier:(id)a0;
+ (id)legacyPredicate;
+ (id)legacyPredicateMatchingProcessIdentifier:(id)a0;

- (BOOL)matchesProcess:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
