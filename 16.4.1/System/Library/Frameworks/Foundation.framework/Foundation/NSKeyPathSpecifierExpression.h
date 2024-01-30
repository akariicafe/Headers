@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (unsigned long long)expressionType;
- (void)encodeWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)keyPath;
- (id)constantValue;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)predicateFormat;

@end
