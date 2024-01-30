@interface RBSProcessBKSLegacyPredicate : RBSProcessPredicateImpl

+ (id)legacyPredicate;
+ (id)legacyPredicateMatchingBundleIdentifier:(id)a0;
+ (id)legacyPredicateMatchingProcessIdentifier:(id)a0;

- (BOOL)matchesProcess:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
