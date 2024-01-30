@interface NSBoundedByPredicateOperator : NSPredicateOperator

- (id)symbol;
- (unsigned long long)operatorType;
- (void)_setOptions:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (SEL)selector;

@end
