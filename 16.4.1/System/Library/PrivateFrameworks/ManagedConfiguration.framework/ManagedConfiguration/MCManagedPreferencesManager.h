@interface MCManagedPreferencesManager : NSObject

+ (BOOL)addManagedPreferences:(id)a0 toDomain:(id)a1;
+ (id)globalManagedPreferencesDomain;
+ (id)managedPreferencesForDomain:(id)a0;
+ (id)managedPreferencesPathForDomain:(id)a0;
+ (BOOL)removeManagedPreferences:(id)a0 fromDomain:(id)a1;
+ (void)sendManagedPreferencesChangedNotificationForDomains:(id)a0;
+ (BOOL)setManagedPreferences:(id)a0 forDomain:(id)a1;
+ (void)updateGlobalManagedPreferencesByAddingPreferences:(id)a0 removingPreferences:(id)a1;

@end
