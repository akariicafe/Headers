@class NSString;

@interface NSSymbolicExpression : NSExpression {
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithString:(id)a0;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (id)constantValue;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
