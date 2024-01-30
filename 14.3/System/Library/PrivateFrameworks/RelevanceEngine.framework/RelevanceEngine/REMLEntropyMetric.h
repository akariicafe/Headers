@class NSString, NSMutableArray;

@interface REMLEntropyMetric : NSObject <REMLMetricsProvider> {
    NSString *_metricName;
    NSString *_predictionFeatureName;
    NSString *_truthFeatureName;
    long long _arrayFeatureIndex;
    long long _numExamples;
    double _sumTruth;
    double _sumPrediction;
    double _logScore;
    double _normalizedLogScore;
    unsigned long long _calibrationCurveNumBuckets;
    NSMutableArray *_calibrationCurveTotal;
    NSMutableArray *_calibrationCurveTrue;
}

- (void).cxx_destruct;
- (void)reset;
- (id)name;
- (void)createCheckpoint;
- (void)resetToLastCheckpointBeforeDate:(id)a0;
- (id)initWithName:(id)a0 featureName:(id)a1;
- (void)updateMetricsFromFeatures:(id)a0 prediction:(id)a1 truth:(id)a2;
- (double)getDoubleFromFeatureValue:(id)a0;
- (id)meanEntropy;
- (id)meanNormalizedEntropy;
- (id)meanTruth;
- (id)meanPrediction;
- (long long)numberOfExamples;
- (unsigned long long)calibrationCurveNumBuckets;
- (id)calibrationCurveTotal;
- (id)calibrationCurveTrue;

@end
