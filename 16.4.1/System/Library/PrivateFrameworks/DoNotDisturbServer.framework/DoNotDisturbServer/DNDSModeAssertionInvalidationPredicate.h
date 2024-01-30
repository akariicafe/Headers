@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (readonly, nonatomic) unsigned long long predicateType;

+ (id)predicateForAnyAssertion;
+ (id)predicateForAssertionClientIdentifiers:(id)a0;
+ (id)predicateForAssertionUUIDs:(id)a0;
+ (id)predicateForAssertionsTakenBeforeDate:(id)a0;

- (id)_init;
- (BOOL)evaluateWithObject:(id)a0 substitutionVariables:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)predicateType;

@end
