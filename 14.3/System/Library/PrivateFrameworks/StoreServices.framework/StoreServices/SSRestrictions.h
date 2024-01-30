@interface SSRestrictions : NSObject

+ (BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+ (BOOL)_calculateIsRestrictionsPasscodeSet;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+ (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id /* block */)a0;
+ (void)setAllowExplicitContent;
+ (void)isExplicitContentDisallowedInCurrentStoreFront:(id /* block */)a0;
+ (void)shouldDisplayExplicitRestrictionAlertOfType:(long long)a0 completionBlock:(id /* block */)a1;
+ (void)didDisplayExplicitRestrictionAlertOfType:(long long)a0;
+ (void)isRestrictionsPasscodeSet:(id /* block */)a0;
+ (id)setOfActiveRestrictionUUIDs;

@end
