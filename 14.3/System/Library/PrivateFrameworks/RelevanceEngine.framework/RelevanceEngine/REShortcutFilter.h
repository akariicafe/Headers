@interface REShortcutFilter : NSObject

+ (unsigned long long)filterVersion;

- (id)init;
- (id)intentByFilteringIntent:(id)a0 withLevel:(unsigned long long)a1;
- (id)identifierForIntent:(id)a0 bundleIdentifier:(id)a1;
- (id)userActivityByFilteringUserActivity:(id)a0 withLevel:(unsigned long long)a1;
- (id)identifierForUserActivity:(id)a0 bundleIdentifier:(id)a1;
- (unsigned long long)_actionIdentifierForIntent:(id)a0;
- (unsigned long long)_actionIdentifierForUserActivity:(id)a0;

@end
