@class HKHealthStore, NSMutableDictionary;

@interface HKUnitPreferenceController : NSObject {
    NSMutableDictionary *_unitStrings;
    NSMutableDictionary *_unitPreferencesByObjectType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) HKHealthStore *healthStore;

- (id)initWithHealthStore:(id)a0;
- (id)_longDisplayNameForUnit:(id)a0;
- (id)_displayNameKeyForDisplayType:(id)a0 withNumber:(BOOL)a1 nameContext:(long long)a2;
- (id)_displayNameKey:(id)a0 withNumber:(BOOL)a1;
- (id)_longDisplayNameOverrideForDisplayType:(id)a0;
- (id)localizedDisplayNameForDisplayType:(id)a0 value:(id)a1;
- (void)_postNotificationWithChangedKeys:(id)a0;
- (void)_initHKUnitPreferences;
- (void)_unitPreferencesDidUpdate:(id)a0;
- (id)_lock_updatePreferredUnits:(id)a0;
- (id)_lock_unitForDisplayType:(id)a0;
- (id)_displayNameKeyForDisplayType:(id)a0 withNumber:(BOOL)a1;
- (id)displayRangeForDisplayType:(id)a0;
- (id)localizedDisplayNameForDisplayType:(id)a0 value:(id)a1 nameContext:(long long)a2;
- (id)localizedDisplayNameForUnit:(id)a0 value:(id)a1 nameContext:(long long)a2;
- (void).cxx_destruct;
- (void)_fetchHKUnitPreferencesWithAttempt:(long long)a0;
- (void)_localeDidChange:(id)a0;
- (void)updatePreferredUnit:(id)a0 forDisplayType:(id)a1;
- (double)scaleFactorForYAxisLabeling:(id)a0;
- (id)localizedDisplayNameForUnit:(id)a0 value:(id)a1;
- (id)_generateDefaultHKUnitPreferences;
- (id)localizedLongDisplayNameForDisplayType:(id)a0;
- (void)_refreshHKUnitPreferencesWithCompletion:(id /* block */)a0;
- (void)_lock_updatePreferredUnit:(id)a0 forDisplayType:(id)a1;
- (id)localizedHealthUIStringForDisplayType:(id)a0 key:(id)a1 value:(id)a2;
- (id)unitForDisplayType:(id)a0;
- (void)dealloc;
- (id)_changedKeysBetweenDictionary:(id)a0 andDictionary:(id)a1;
- (id)_unitDisplayNameKeyForDisplayType:(id)a0 nameContext:(long long)a1;
- (id)localizedDisplayNameForDisplayType:(id)a0;
- (id)_displayNameKeyForUnit:(id)a0 nameContext:(long long)a1;

@end
