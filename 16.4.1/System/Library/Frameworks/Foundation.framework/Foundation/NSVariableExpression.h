@class NSString;

@interface NSVariableExpression : NSExpression {
    NSString *_variable;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (unsigned long long)expressionType;
- (void)encodeWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)variable;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)predicateFormat;
- (id)_expressionWithSubstitutionVariables:(id)a0;

@end
