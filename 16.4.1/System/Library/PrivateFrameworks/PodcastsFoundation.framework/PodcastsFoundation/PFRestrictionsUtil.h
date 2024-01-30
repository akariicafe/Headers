@interface PFRestrictionsUtil : NSObject

+ (BOOL)isExplicitContentAllowed;
+ (void)reloadSettings;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (void)setAllowExplicitContent;
+ (BOOL)_fetchIsExplicitContentAllowed;
+ (BOOL)isRestrictedByAdministrator;
+ (BOOL)mustResolveInScreenTimePreferences;

@end
