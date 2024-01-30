@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}

- (id)initWithDomain:(id)a0;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getValueForPreference:(id)a0 expectedClass:(Class)a1;
- (void)_preferenceChangedExternally:(id)a0;
- (BOOL)getBooleanPreference:(id)a0 defaultValue:(BOOL)a1;
- (long long)getIntegerPreference:(id)a0 defaultValue:(long long)a1;
- (void)setIntegerPreference:(id)a0 value:(long long)a1 notificationName:(id)a2;
- (void)setValueForPreference:(id)a0 value:(id)a1 notificationName:(id)a2;
- (void)_preferenceChangedInternally:(id)a0;
- (void)registerReflectionForPreferenceWithNotificationName:(id)a0;
- (void)_synchronizePreferences;
- (void)setBooleanPreference:(id)a0 value:(BOOL)a1 notificationName:(id)a2;

@end
