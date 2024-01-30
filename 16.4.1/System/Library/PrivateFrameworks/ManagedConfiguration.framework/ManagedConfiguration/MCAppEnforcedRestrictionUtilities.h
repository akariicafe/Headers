@interface MCAppEnforcedRestrictionUtilities : NSObject

+ (id)appUnavailableInRegionRestrictionForBundleID:(id)a0;
+ (id)clientUUIDForBundleID:(id)a0;
+ (id)enforcedRestrictionsForBundleID:(id)a0 restrictionPlistURL:(id)a1 countryCodes:(id)a2;
+ (id)currentCountryCodes;

@end
