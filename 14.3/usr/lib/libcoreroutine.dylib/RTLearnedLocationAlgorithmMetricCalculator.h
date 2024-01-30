@class RTDistanceCalculator, RTMetricManager;

@interface RTLearnedLocationAlgorithmMetricCalculator : NSObject

@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTMetricManager *metricManager;

+ (id)normalize:(id)a0;
+ (void)submitMetricsForInferredPlaces:(id)a0 existingPlaces:(id)a1 rottedPlaces:(id)a2 distanceCalculator:(id)a3 metricManager:(id)a4;
+ (id)collectPlaceVersionsFromInferredPlaces:(id)a0 existingPlaces:(id)a1 rottedPlaces:(id)a2;
+ (id)newAlgorithmInstanceWithInference:(id)a0 distanceCalculator:(id)a1;
+ (void)updateAlgorithmInstance:(id)a0 byComparingInferredMapItem:(id)a1 withTruthfulMapItem:(id)a2 withDistanceCalculator:(id)a3;
+ (unsigned long long)addressComponentMatchesBetweenInferredAddress:(id)a0 trueAddress:(id)a1;
+ (BOOL)inferredAddressComponent:(id)a0 consistentWithTrueComponent:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDistanceCalculator:(id)a0 metricManager:(id)a1;
- (void)submitMetricsForInferredPlaces:(id)a0 existingPlaces:(id)a1 rottedPlaces:(id)a2;

@end
