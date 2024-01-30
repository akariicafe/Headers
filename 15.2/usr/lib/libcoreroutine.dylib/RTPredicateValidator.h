@class NSPredicate, NSSet, NSError;

@interface RTPredicateValidator : NSObject <NSPredicateVisitor>

@property (nonatomic) BOOL validated;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSSet *allowedKeys;
@property (retain, nonatomic) NSError *error;

+ (BOOL)validatePredicate:(id)a0 allowedKeys:(id)a1 error:(id *)a2;

- (BOOL)validateWithError:(id *)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 allowedKeys:(id)a1;

@end
