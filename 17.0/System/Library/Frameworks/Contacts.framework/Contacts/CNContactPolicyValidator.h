@interface CNContactPolicyValidator : NSObject

+ (id)contactFromContact:(id)a0 conformingToPolicy:(id)a1 options:(unsigned long long)a2;
+ (id)contactFromContact:(id)a0 conformingToPolicy:(id)a1 options:(unsigned long long)a2 valueToStringTransform:(id /* block */)a3;
+ (BOOL)shouldIgnoreValidationCheckForProperty:(id)a0;

@end
