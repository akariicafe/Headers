@class NSArray, FIUIWorkoutActivityType;

@interface FIUIWorkoutDefaultMetricsProvider : NSObject {
    FIUIWorkoutActivityType *_activityType;
    long long _activityMoveMode;
    BOOL _supportsElevationMetrics;
    BOOL _supportsGroundElevationMetrics;
}

@property (readonly, nonatomic) long long metricsVersion;
@property (readonly, copy, nonatomic) NSArray *defaultEnabledMetrics;
@property (readonly, copy, nonatomic) NSArray *defaultSecondPlatterMetrics;
@property (readonly, copy, nonatomic) NSArray *supportedMetrics;

- (void).cxx_destruct;
- (id)_defaultEnabledMetricsForActivityType:(id)a0 metricsVersion:(long long)a1;
- (id)_defaultEnabledMetricsForSwimmingWithLocationType:(long long)a0 metricsVersion:(long long)a1;
- (id)_defaultEnabledSecondPlatterMetricsForActivityType:(id)a0 metricsVersion:(long long)a1;
- (id)_defaultGloryIndoorEnabledMetricsForActivityType:(unsigned long long)a0;
- (id)_defaultGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)a0 supportsElevationMetrics:(BOOL)a1;
- (id)_defaultOutdoorEnabledMetricsForActivityType:(unsigned long long)a0 metricsVersion:(long long)a1 supportsElevationMetrics:(BOOL)a2;
- (id)_defaultPreGloryIndoorEnabledMetricsForActivityType:(unsigned long long)a0;
- (id)_defaultPreGloryOutdoorEnabledMetricsForActivityType:(unsigned long long)a0;
- (id)_indoorDefaultEnabledMetricsForActivityType:(unsigned long long)a0 metricsVersion:(long long)a1;
- (id)_machineProvidedMetricsForActivityType:(id)a0;
- (id)_supportedMetricsForActivityType:(id)a0 metricsVersion:(long long)a1;
- (id)appendMachineMetricsToMetrics:(id)a0 maxNumMetrics:(long long)a1 activityType:(id)a2;
- (id)initWithMetricsVersion:(long long)a0 activityType:(id)a1 activityMoveMode:(long long)a2 deviceSupportsElevationMetrics:(BOOL)a3 deviceSupportsGroundElevationMetrics:(BOOL)a4;
- (BOOL)isMetricTypeSupported:(unsigned long long)a0 isMachineWorkout:(BOOL)a1 activityType:(id)a2;
- (id)removeUnsupportedFitnessJuniorMetricsFrom:(id)a0;
- (id)supportedMetricsWithIsMachineWorkout:(BOOL)a0 activityType:(id)a1;

@end
