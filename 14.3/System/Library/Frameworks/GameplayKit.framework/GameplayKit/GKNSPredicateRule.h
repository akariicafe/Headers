@class NSPredicate;

@interface GKNSPredicateRule : GKRule

@property (readonly, retain, nonatomic) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0;
- (BOOL)evaluatePredicateWithSystem:(id)a0;

@end
