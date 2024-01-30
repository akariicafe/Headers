@class NSPredicate, NSMutableArray, NSMutableSet;

@interface _OSLogPredicateMapper : NSObject <NSPredicateVisitor> {
    int _pass;
}

@property (retain, nonatomic) NSMutableArray *stack;
@property (readonly, nonatomic) NSMutableSet *validKeyPaths;
@property (readonly, nonatomic) unsigned long long flags;
@property (readonly, nonatomic) NSPredicate *mappedPredicate;
@property (readonly, nonatomic) NSMutableArray *validationErrors;

- (void).cxx_destruct;
- (void)visitPredicateExpression:(id)a0;
- (void)processComparisonPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)processCompoundPredicate:(id)a0;
- (id)initWithPredicate:(id)a0 andValidate:(BOOL)a1;
- (id)mapKeywordToConstantExpression:(id)a0 keywordMap:(id)a1;
- (id)mapEventTypeExpression:(id)a0;
- (id)mapMessageTypeExpression:(id)a0;
- (id)mapSignpostScopeExpression:(id)a0;
- (id)mapSignpostTypeExpression:(id)a0;
- (void)mapLeftExpression:(id *)a0 andRightExpression:(id *)a1;
- (void)validateExpression:(id)a0;
- (id)initWithPredicate:(id)a0;
- (void)visitPredicate:(id)a0;

@end
