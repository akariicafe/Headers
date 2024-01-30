@interface NSConstantValueExpression : NSExpression {
    id constantValue;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (id)constantValue;
- (id)initWithObject:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)expressionValueWithObject:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
