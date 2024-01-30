@class NPSDomainAccessor, NSMutableDictionary, NPSManager;

@interface FIIntervalWorkoutDefinitionsManager : NSObject {
    NPSDomainAccessor *_domainAccessor;
    NPSManager *_syncManager;
    NSMutableDictionary *_rootIntervalWorkoutDefinitions;
}

- (void).cxx_destruct;
- (id)init;
- (void)_checkVersion;
- (void)loadIntervalWorkoutDefinitions;
- (void)_saveDefaultIntervalWorkouts;
- (id)_deserializeIntervalWorkoutDefinitions:(id)a0;
- (id)_serializeRootIntervalWorkoutDefinitions:(id)a0;
- (void)_saveRootIntervalWorkoutDefinitions:(id)a0;
- (void)_updateIntervalWorkoutDefinition:(id)a0 activityTypeIdentifier:(id)a1;
- (void)_serializeAndSaveRootIntervalWorkoutDefinitions:(id)a0;
- (void)_trimRootIntervalWorkoutDefinitions:(id)a0;
- (id)_defaultUserIntervalWorkouts;
- (id)_mockQuarterMileSprints;
- (id)_mockVariedSpeed;
- (id)_mockHIIT3010;
- (void)saveIntervalWorkoutDefinition:(id)a0 activityTypeIdentifier:(id)a1;
- (void)removeIntervalWorkoutDefinitionAtIndex:(long long)a0 activityTypeIdentifier:(id)a1;
- (id)intervalWorkoutDefinitionsForActivityTypeIdentifier:(id)a0;

@end
