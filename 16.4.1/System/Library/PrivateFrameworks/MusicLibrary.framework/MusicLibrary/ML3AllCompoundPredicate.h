@interface ML3AllCompoundPredicate : ML3CompoundPredicate

+ (id)predicateByFlatteningAllCompoundPredicate:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)predicateByMergingContainmentPredicatesAllCompoundPredicate:(id)a0;

- (id)compoundOperatorJoiner;

@end
