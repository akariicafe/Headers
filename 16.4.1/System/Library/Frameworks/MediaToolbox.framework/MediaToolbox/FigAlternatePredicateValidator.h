@class NSPredicate, NSError;

@interface FigAlternatePredicateValidator : NSObject <NSPredicateVisitor> {
    NSPredicate *_predicate;
    struct OpaqueFigSimpleMutex { } *_mutex;
    BOOL _result;
    NSError *_error;
    BOOL _isEvaluated;
}

- (id)initWithPredicate:(id)a0;
- (void)visitPredicateExpression:(id)a0;
- (void)visitPredicate:(id)a0;
- (void)dealloc;
- (BOOL)_validateKeyPath:(id)a0;
- (BOOL)validateWithError:(id *)a0;
- (void)visitPredicateOperator:(id)a0;
- (BOOL)_keyPathComponentIsAllowed:(id)a0;
- (id)_keyPathComponents:(id)a0;
- (BOOL)_unsafeEvaluateKeyPathWithDummy:(id)a0;

@end
