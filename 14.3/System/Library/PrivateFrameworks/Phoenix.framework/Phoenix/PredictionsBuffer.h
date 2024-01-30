@class NSMutableArray, AXPhoenixClassifierConfiguration;

@interface PredictionsBuffer : NSObject {
    NSMutableArray *_predictions;
    NSMutableArray *_counts;
    AXPhoenixClassifierConfiguration *_configuration;
}

- (void).cxx_destruct;
- (void)reset;
- (id)initWithConfiguration:(id)a0;
- (id)description;
- (id)logBuffer;
- (id)predictionCounts;
- (void)addPrediction:(id)a0;
- (struct { unsigned long long x0; unsigned long long x1; })bestPredictionUsingPolicyOption:(int)a0;

@end
