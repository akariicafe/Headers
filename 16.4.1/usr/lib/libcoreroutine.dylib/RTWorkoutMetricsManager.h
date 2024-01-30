@class RTManagedConfiguration;

@interface RTWorkoutMetricsManager : NSObject

@property (retain, nonatomic) RTManagedConfiguration *managedConfiguration;

+ (id)stringFromWorkoutMetricsEvent:(unsigned long long)a0;

- (id)init;
- (void).cxx_destruct;
- (id)initWithManagedConfiguration:(id)a0;
- (BOOL)_computeMetricsForClustersEventWithData:(id)a0 error:(id *)a1;
- (BOOL)_computeMetricsForEvent:(unsigned long long)a0 data:(id)a1 error:(id *)a2;
- (BOOL)_computeMetricsForProcessNewWorkoutEventWithData:(id)a0 error:(id *)a1;
- (BOOL)_computeMetricsForProcessWorkoutsEventWithData:(id)a0 error:(id *)a1;
- (BOOL)_computeMetricsForUpdateRelevanceScoresEventWithData:(id)a0 error:(id *)a1;
- (BOOL)_doesMandatoryKeysExist:(unsigned long long)a0 data:(id)a1 error:(id *)a2;
- (id)_mandatoryMetricKeysForEvent:(unsigned long long)a0 error:(id *)a1;
- (BOOL)_submitMetricsForEvent:(unsigned long long)a0 data:(id)a1 error:(id *)a2;
- (BOOL)_updateNSNumberMetricsData:(id)a0 key:(id)a1 binsStart:(id)a2 binsEnd:(id)a3 gap:(id)a4 error:(id *)a5;
- (BOOL)submitMetricsForEvent:(unsigned long long)a0 data:(id)a1 error:(id *)a2;

@end
