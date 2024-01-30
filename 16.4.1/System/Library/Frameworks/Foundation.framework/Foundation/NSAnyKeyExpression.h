@interface NSAnyKeyExpression : NSExpression

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (BOOL)_allowsEvaluation;

- (id)retain;
- (unsigned long long)expressionType;
- (void)encodeWithCoder:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (id)_initPrivate;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (BOOL)_tryRetain;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isDeallocating;
- (id)init;
- (id)autorelease;
- (id)predicateFormat;
- (unsigned long long)retainCount;

@end
