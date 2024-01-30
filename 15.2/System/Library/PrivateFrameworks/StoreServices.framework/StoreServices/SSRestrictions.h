@interface SSRestrictions : NSObject

+ (BOOL)_isExplicitContentDisallowedInCurrentStoreFront;
+ (void)setAllowExplicitContent;
+ (BOOL)_calculateIsRestrictionsPasscodeSet;
+ (BOOL)isActiveAccountAllowedToUpdateRestrictions;
+ (BOOL)_isExplicitContentRestrictedByDefaultInCurrentStoreFront;
+ (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id /* block */)a0;
+ (void)didDisplayExplicitRestrictionAlertOfType:(long long)a0;
+ (void)isExplicitContentDisallowedInCurrentStoreFront:(id /* block */)a0;
+ (void)shouldDisplayExplicitRestrictionAlertOfType:(long long)a0 completionBlock:(id /* block */)a1;
+ (id)setOfActiveRestrictionUUIDs;
+ (void)isRestrictionsPasscodeSet:(id /* block */)a0;

@end
