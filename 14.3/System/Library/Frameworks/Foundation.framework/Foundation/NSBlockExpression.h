@class NSArray;

@interface NSBlockExpression : NSExpression {
    id /* block */ _block;
    NSArray *_arguments;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)arguments;
- (id)initWithType:(unsigned long long)a0 block:(id /* block */)a1 arguments:(id)a2;
- (id)initWithCoder:(id)a0;
- (id /* block */)expressionBlock;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
