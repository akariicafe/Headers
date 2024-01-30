@interface NSFalsePredicate : NSPredicate

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultInstance;

- (void)acceptVisitor:(id)a0 flags:(unsigned long long)a1;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_allowsEvaluation;
- (unsigned long long)retainCount;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)retain;
- (id)autorelease;
- (void)allowEvaluation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
