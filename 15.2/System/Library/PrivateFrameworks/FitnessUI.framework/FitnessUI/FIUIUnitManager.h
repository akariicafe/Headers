@class NSMutableDictionary, HKHealthStore;

@interface FIUIUnitManager : NSObject {
    NSMutableDictionary *_preferredUnits;
    HKHealthStore *_healthStore;
}

+ (id)sharedManager;

- (id)initWithHealthStore:(id)a0;
- (void)_userPreferencesDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_localeDidChange:(id)a0;
- (id)userDistanceWalkingRunningHKUnit;
- (id)userActiveEnergyBurnedUnit;
- (unsigned long long)userDistanceWalkingRunningUnit;
- (id)_loadPreferredUnitsFromDefaults;
- (void)_updatePreferredUnits;
- (void)_storePreferredUnitsInDefaults:(id)a0;
- (void)_notifyUnitPreferencesChanged;
- (id)_preferredHKUnitForQuantityType:(id)a0;
- (id)userDistanceHKUnitForDistanceType:(unsigned long long)a0;
- (id)userDistanceCyclingHKUnit;
- (id)userLapLengthHKUnit;
- (id)userDistanceElevationHKUnit;
- (void)_setPreferredHKUnit:(id)a0 forQuantityType:(id)a1;
- (unsigned long long)userDistanceElevationUnit;
- (unsigned long long)userDistanceUnitForDistanceType:(unsigned long long)a0;
- (double)distanceInDistanceUnit:(unsigned long long)a0 forDistanceInMeters:(double)a1;
- (id)userDistanceHKUnitForActivityType:(id)a0;
- (void)setUserDistanceUnit:(unsigned long long)a0 forDistanceType:(unsigned long long)a1;
- (void)setUserDistanceWalkingRunningUnit:(unsigned long long)a0;
- (unsigned long long)userDistanceCyclingUnit;
- (void)setUserDistanceCyclingUnit:(unsigned long long)a0;
- (double)paceWithDistance:(id)a0 overDuration:(double)a1 paceFormat:(long long)a2;
- (double)distanceInMetersForDistanceInUserUnit:(double)a0 distanceType:(unsigned long long)a1;
- (double)distanceInUserDistanceUnitForDistanceInMeters:(double)a0 distanceType:(unsigned long long)a1;
- (void)setUserActiveEnergyBurnedUnit:(id)a0;
- (id)userBasalEnergyBurnedUnit;
- (void)setUserBasalEnergyBurnedUnit:(id)a0;
- (void)setPreferredUnitsForTesting:(id)a0;

@end
