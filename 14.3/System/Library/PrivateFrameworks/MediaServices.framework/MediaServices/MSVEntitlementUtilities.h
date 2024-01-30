@interface MSVEntitlementUtilities : NSObject

+ (void)_processKeyChainResult:(id)a0;
+ (BOOL)_checkEntitlement:(id)a0 inGroup:(id)a1;
+ (id)_checkBooleanEntitlement:(id)a0 task:(struct __SecTask { } *)a1;
+ (BOOL)hasBoolEntitlement:(id)a0;
+ (id)_checkArrayEntitlement:(id)a0 group:(id)a1 task:(struct __SecTask { } *)a2;
+ (BOOL)hasEntitlement:(id)a0 inGroup:(id)a1;

@end
