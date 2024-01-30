@interface ELSEntitlementUtilities : NSObject

+ (BOOL)auditToken:(struct { unsigned int x0[8]; } *)a0 hasEntitlement:(id)a1;
+ (BOOL)currentProcessHasEntitlement:(id)a0;
+ (id)entitlementMissingMessage;

@end
