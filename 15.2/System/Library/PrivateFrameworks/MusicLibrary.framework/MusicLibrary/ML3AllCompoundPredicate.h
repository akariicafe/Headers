@interface ML3AllCompoundPredicate : ML3CompoundPredicate

+ (BOOL)supportsSecureCoding;
+ (id)predicateByMergingContainmentPredicatesAllCompoundPredicate:(id)a0;
+ (id)predicateByFlatteningAllCompoundPredicate:(id)a0;

- (id)compoundOperatorJoiner;

@end
