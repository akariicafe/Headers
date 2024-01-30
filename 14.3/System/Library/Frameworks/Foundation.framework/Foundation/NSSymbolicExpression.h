@class NSString;

@interface NSSymbolicExpression : NSExpression {
    NSString *_token;
}

+ (BOOL)supportsSecureCoding;

- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)constantValue;
- (BOOL)isEqual:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
