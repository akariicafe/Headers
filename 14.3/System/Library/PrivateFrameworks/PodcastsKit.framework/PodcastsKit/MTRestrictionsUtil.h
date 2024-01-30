@interface MTRestrictionsUtil : NSObject

+ (void)reloadSettings;
+ (void)didDisplayExplicitRestrictionAlertOfType:(int)a0;
+ (BOOL)isExplicitContentAllowed;
+ (id)settingsURL;
+ (BOOL)_fetchIsExplicitContentAllowed;
+ (id)settingsURLString;
+ (BOOL)_isActiveAccountAllowedToUpdateRestrictions;
+ (id)_userDefaultsKeyForExplicitRestrictionAlertType:(int)a0;
+ (int)explicitRestrictionAlertTypeForTypeString:(id)a0;
+ (BOOL)_isRestrictedByAdministrator;
+ (BOOL)_mustResolveInScreenTimePreferences;
+ (void)_setAllowExplicitContent;

@end
