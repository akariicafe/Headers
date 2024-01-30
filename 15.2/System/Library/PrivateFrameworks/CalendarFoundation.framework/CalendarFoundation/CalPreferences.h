@class NSString, NSMutableSet;

@interface CalPreferences : NSObject {
    NSString *_domain;
    NSMutableSet *_registeredNotificationsToReflect;
}

- (id)initWithDomain:(id)a0;
- (void)_preferenceChangedInternally:(id)a0;
- (void)setIntegerPreference:(id)a0 value:(long long)a1 notificationName:(id)a2;
- (void)setBooleanPreference:(id)a0 value:(BOOL)a1 notificationName:(id)a2;
- (void)registerReflectionForPreferenceWithNotificationName:(id)a0;
- (id)getValueForPreference:(id)a0 expectedClass:(Class)a1;
- (BOOL)getBooleanPreference:(id)a0 defaultValue:(BOOL)a1;
- (void)_preferenceChangedExternally:(id)a0;
- (void).cxx_destruct;
- (long long)getIntegerPreference:(id)a0 defaultValue:(long long)a1;
- (id)init;
- (void)_synchronizePreferences;
- (void)setValueForPreference:(id)a0 value:(id)a1 notificationName:(id)a2;
- (void)dealloc;
- (void)unregisterReflectionForPreferenceWithNotificationName:(id)a0;

@end
