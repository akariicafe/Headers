@interface NSUTIPredicateOperator : NSPredicateOperator

- (id)initForVariant:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)performPrimitiveOperationUsingObject:(id)a0 andObject:(id)a1;
- (unsigned long long)variant;
- (id)predicateFormat;

@end
