@interface NSSelfExpression : NSExpression

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_allowsEvaluation;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultInstance;

- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)retainCount;
- (id)_initPrivate;
- (id)retain;
- (id)autorelease;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)_tryRetain;
- (oneway void)release;

@end
