@class NSString;

@interface NSVariableExpression : NSExpression {
    NSString *_variable;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)_expressionWithSubstitutionVariables:(id)a0;
- (id)variable;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
