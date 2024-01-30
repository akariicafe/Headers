@interface CNBundleIdentifierUtilities : NSObject

+ (id)bundleIdentifierForAuditToken:(struct { unsigned int x0[8]; } *)a0;
+ (id)bundleIdentifierFromInfoPlistForAuditToken:(struct { unsigned int x0[8]; } *)a0;
+ (id)bundleIdentifierFromEntitlementForAuditToken:(struct { unsigned int x0[8]; } *)a0;
+ (id)os_log;

@end
