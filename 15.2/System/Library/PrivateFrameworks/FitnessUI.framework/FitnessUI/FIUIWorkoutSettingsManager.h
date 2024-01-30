@class FIUIWorkoutDefaultMetricsProvider, NPSManager, NSMutableDictionary, NPSDomainAccessor, FIUIWorkoutActivityType, NSMutableArray;

@interface FIUIWorkoutSettingsManager : NSObject {
    FIUIWorkoutActivityType *_workoutActivityType;
    long long _activityMoveMode;
    NSMutableDictionary *_settingsByActivityType;
    NSMutableDictionary *_settingOverridesByMetric;
    NSMutableArray *_enabledMetrics;
    FIUIWorkoutDefaultMetricsProvider *_defaultMetricsProvider;
}

@property (retain, nonatomic) NPSDomainAccessor *domainAccessor;
@property (retain, nonatomic) NPSManager *syncManager;

+ (long long)readWorkoutMetricsActivityMoveMode;
+ (void)obliterateUserConfiguredWorkoutMetrics;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_useUserConfiguredWorkoutMetricsForMetricsActivityMoveMode:(long long)a0 activityMoveMode:(long long)a1;
- (void)_clearOldMetricsIfNeeded;
- (void)_readFromDomain;
- (BOOL)_hasUserMadeMetricChangesToWorkoutType:(id)a0 enabledMetrics:(id)a1 settingOverridesByMetric:(id)a2 metricFormatVersion:(id)a3;
- (void)_writeToDomainWithShouldUpdateVersion:(BOOL)a0;
- (id)supportedMetrics;
- (id)orderedDisabledMetrics;
- (BOOL)isMetricEnabled:(unsigned long long)a0;
- (BOOL)_enabledMetricsAreDefaultAfterPaceMigration:(id)a0 workoutActivityType:(id)a1;
- (void)_migratePaceViewSettingIfNeeded;
- (id)initWithWorkoutActivityType:(id)a0 activityMoveMode:(long long)a1;
- (id)orderedEnabledMetrics;
- (id)orderedSupportedMetrics;
- (id)orderedEnabledAndSupportedMetrics;
- (void)setEnabled:(BOOL)a0 forMetricType:(unsigned long long)a1 didChange:(BOOL *)a2;
- (void)moveMetricType:(unsigned long long)a0 toEnabledIndex:(long long)a1;
- (void)assignMetricType:(unsigned long long)a0 toSlotIndex:(long long)a1;
- (long long)disabledIndexForMetricType:(unsigned long long)a0;
- (void)reloadMetrics;

@end
