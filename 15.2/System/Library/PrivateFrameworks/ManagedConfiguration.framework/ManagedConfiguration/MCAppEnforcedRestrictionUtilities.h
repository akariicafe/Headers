@interface MCAppEnforcedRestrictionUtilities : NSObject

+ (id)currentCountryCodes;
+ (id)enforcedRestrictionsForBundleID:(id)a0 restrictionPlistURL:(id)a1 countryCodes:(id)a2;
+ (id)appUnavailableInRegionRestrictionForBundleID:(id)a0;
+ (id)clientUUIDForBundleID:(id)a0;

@end
