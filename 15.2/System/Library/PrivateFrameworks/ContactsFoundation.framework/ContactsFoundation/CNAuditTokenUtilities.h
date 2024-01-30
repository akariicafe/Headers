@interface CNAuditTokenUtilities : NSObject

+ (id)processNameForAuditToken:(id)a0;
+ (id)bundleIdentifierForAuditToken:(id)a0;
+ (int)processIdentifierForAuditToken:(id)a0;
+ (id)_bundleIdentifierFromEntitlementForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)_bundleIdentifierFromInfoPlistForAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)os_log;

@end
