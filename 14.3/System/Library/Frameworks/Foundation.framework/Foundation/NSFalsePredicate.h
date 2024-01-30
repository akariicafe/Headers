@interface NSFalsePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;
+ (BOOL)_allowsEvaluation;

- (id)predicateFormat;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)retain;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;

@end
