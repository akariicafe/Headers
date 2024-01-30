@class HKHealthStore, NSMutableDictionary;

@interface FIUnitManager : NSObject {
    HKHealthStore *_healthStore;
    NSMutableDictionary *_preferredUnits;
}

- (id)initWithHealthStore:(id)a0;
- (id)userActiveEnergyBurnedUnit;
- (void)_setPreferredHKUnit:(id)a0 forQuantityType:(id)a1;
- (id)userLapLengthHKUnit;
- (id)_preferredHKUnitForQuantityType:(id)a0;
- (void)_userPreferencesDidChange:(id)a0;
- (id)userDistanceWalkingRunningHKUnit;
- (void)_storePreferredUnitsInDefaults:(id)a0;
- (id)userBasalEnergyBurnedUnit;
- (void)setUserBasalEnergyBurnedUnit:(id)a0;
- (id)_loadPreferredUnitsFromDefaults;
- (void)_updatePreferredUnits;
- (void)_notifyUnitPreferencesChanged;
- (void)_localeDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setUserActiveEnergyBurnedUnit:(id)a0;

@end
