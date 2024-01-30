@interface NSMatchingPredicateOperator : NSStringPredicateOperator {
    int _contextLock;
    struct { id x0; void *x1; long long x2; } *_regexContext;
}

- (id)symbol;
- (id)initWithOperatorType:(unsigned long long)a0 modifier:(unsigned long long)a1 variant:(unsigned long long)a2;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (void)_clearContext;
- (BOOL)_shouldEscapeForLike;
- (SEL)selector;
- (void)dealloc;

@end
