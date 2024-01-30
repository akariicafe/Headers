@class NSSet, NSArray, NSMutableSet, NSError, NSPredicate;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor>

@property (retain, nonatomic) NSSet *allowedKeysSet;
@property (retain, nonatomic) NSMutableSet *usedKeysSet;
@property (nonatomic) BOOL validated;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSPredicate *predicate;
@property (retain, nonatomic) NSArray *allowedKeys;
@property (readonly, copy, nonatomic) NSArray *usedKeys;

- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (BOOL)validateWithError:(id *)a0;
- (void)visitPredicateOperator:(id)a0;
- (void).cxx_destruct;
- (void)resetUsedKeys;

@end
