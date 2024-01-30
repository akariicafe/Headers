@interface MCManagedDefaultsManager : NSObject

+ (id)sharedManager;

- (id)managedDefaultsPathForDomain:(id)a0;
- (id)managedDefaultsForDomain:(id)a0;
- (void)setDefaults:(id)a0 forManagedDomain:(id)a1;
- (id)managedSystemDefaultsForDomain:(id)a0;
- (void)setGlobalPreferencesDefaults:(id)a0;
- (BOOL)domainHasManagedDefaults:(id)a0;
- (void)addDefaults:(id)a0 toManagedDomain:(id)a1;
- (void)removeDefaults:(id)a0 fromManagedDomain:(id)a1;
- (void)addGlobalPreferenceDefaults:(id)a0;
- (void)removeGlobalPreferenceDefaults:(id)a0;
- (void)removeAllManagedDefaultsFromDomain:(id)a0;
- (void)sendManagedDefaultsChangedNotificationForDomains:(id)a0;

@end
