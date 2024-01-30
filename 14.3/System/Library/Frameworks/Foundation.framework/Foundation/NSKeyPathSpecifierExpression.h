@class NSString;

@interface NSKeyPathSpecifierExpression : NSExpression {
    NSString *_value;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyPath;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)constantValue;
- (BOOL)isEqual:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
