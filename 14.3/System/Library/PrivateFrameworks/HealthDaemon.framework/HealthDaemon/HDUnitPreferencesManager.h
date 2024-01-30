@class HKObserverSet, NSArray, HDProfile, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HDUnitPreferencesManager : NSObject {
    HDProfile *_profile;
    NSArray *_versionedUnitPreferences;
    NSMutableDictionary *_defaultPreferredUnits;
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_resourceQueue;
}

- (id)initWithProfile:(id)a0;
- (id)_authorizationStatusesForTypes:(id)a0 authorizationServer:(id)a1 error:(id *)a2;
- (void)setPreferredUnitToDefaultIfNotSetForType:(id)a0;
- (id)_queue_versionedUnitPreferenceDictionaryWithError:(id *)a0;
- (id)_queue_unitForType:(id)a0 versionedUnitPreferences:(id)a1 version:(long long)a2;
- (void).cxx_destruct;
- (void)addUnitPreferenceObserver:(id)a0 queue:(id)a1;
- (id)_queue_generateUnitPreferencesWithDomain:(id)a0 error:(id *)a1;
- (void)_unitPreferencesDidChange;
- (id)_unitPreferencesDictionaryFromKeyValueDictionary:(id)a0;
- (void)dealloc;
- (BOOL)setPreferredUnit:(id)a0 forType:(id)a1 error:(id *)a2;
- (void)_queue_updateUnitPreferenceCacheWithUnitPreferencesVersionToUnit:(id)a0 type:(id)a1;
- (id)_stringFromQuantityType:(id)a0;
- (id)_quantityTypeFromKeyString:(id)a0;
- (id)_queue_generateVersionedUnitPreferencesWithError:(id *)a0;
- (void)unitTesting_resetUnits;
- (id)unitPreferencesDictionaryForTypes:(id)a0 version:(long long)a1 authorizationServer:(id)a2 error:(id *)a3;
- (id)_queue_defaultUnitForType:(id)a0 version:(long long)a1;
- (id)unitTesting_preferredUnitForType:(id)a0 error:(id *)a1;
- (BOOL)removePreferredUnitForType:(id)a0 error:(id *)a1;
- (void)_queue_notifyObserversWithUnitPreferences;
- (void)_persistUnitPreferenceForType:(id)a0 unitPreferencesVersionToUnit:(id)a1;
- (void)_localeDidChange:(id)a0;
- (id)domainForVersion:(long long)a0;
- (BOOL)_queue_removePreferredUnitForType:(id)a0 error:(id *)a1;
- (BOOL)_queue_doesVersionedUnitPreferences:(id)a0 containPreferenceForType:(id)a1;
- (void)_queue_setUnit:(id)a0 forType:(id)a1;
- (void)removeUnitPreferenceObserver:(id)a0;
- (id)_unitFromValueString:(id)a0 quantityType:(id)a1;

@end
