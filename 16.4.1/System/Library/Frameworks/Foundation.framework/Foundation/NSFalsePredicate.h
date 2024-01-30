@interface NSFalsePredicate : NSPredicate

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)supportsSecureCoding;
+ (id)defaultInstance;

- (id)retain;
- (void)encodeWithCoder:(id)a0;
- (oneway void)release;
- (id)initWithCoder:(id)a0;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (BOOL)_allowsEvaluation;
- (unsigned long long)hash;
- (void)allowEvaluation;
- (id)autorelease;
- (id)predicateFormat;
- (unsigned long long)retainCount;

@end
