@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (readonly, nonatomic) unsigned long long predicateType;

+ (id)predicateForAssertionUUIDs:(id)a0;
+ (id)predicateForAnyAssertion;
+ (id)predicateForAssertionClientIdentifiers:(id)a0;
+ (id)predicateForAssertionsTakenBeforeDate:(id)a0;

- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (unsigned long long)predicateType;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
