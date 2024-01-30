@class NSCompoundPredicate, NSMutableDictionary, NSMutableArray;

@interface IAMDecomposedKey : NSObject {
    NSMutableArray *rawPredicateConditions;
    NSCompoundPredicate *compoundPredicate;
    BOOL compoundPredicateNeedsInitialization;
}

@property (retain, nonatomic) NSMutableDictionary *ruleDestructuredIdentifiers;

- (BOOL)hasPredicates;
- (void)constructCompoundPredicateIfNeeded;
- (BOOL)predicatesMatchFigaroEventProperties:(id)a0;
- (id)init;
- (void)addPredicateCondition:(id)a0;
- (void).cxx_destruct;

@end
