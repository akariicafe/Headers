@class NSString;

@interface _UITargetContentIdentifierPredicateValidator : NSObject <NSPredicateVisitor> {
    NSString *_compileTimeIssues;
}

- (void).cxx_destruct;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (BOOL)validatePredicate:(id)a0 compileTimeIssues:(id *)a1 runTimeIssues:(id *)a2;
- (void)visitPredicate:(id)a0;

@end
