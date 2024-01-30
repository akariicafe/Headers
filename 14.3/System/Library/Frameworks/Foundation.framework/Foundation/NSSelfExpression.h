@interface NSSelfExpression : NSExpression

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (BOOL)_allowsEvaluation;

- (id)predicateFormat;
- (id)_initPrivate;
- (id)init;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)retain;
- (BOOL)isEqual:(id)a0;
- (id)expressionValueWithObject:(id)a0 context:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
