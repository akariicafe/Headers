@class NSPredicate, NSError;

@interface FigAlternatePredicateValidator : NSObject <NSPredicateVisitor> {
    NSPredicate *_predicate;
    struct OpaqueFigSimpleMutex { } *_mutex;
    BOOL _result;
    NSError *_error;
    BOOL _isEvaluated;
}

- (BOOL)validateWithError:(id *)a0;
- (id)initWithPredicate:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)visitPredicateOperator:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)dealloc;
- (BOOL)_validateKeyPath:(id)a0;

@end
