@class NSMutableArray, AXPhoenixClassifierConfiguration;

@interface PredictionsBuffer : NSObject {
    NSMutableArray *_predictions;
    NSMutableArray *_counts;
    AXPhoenixClassifierConfiguration *_configuration;
}

- (id)description;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)addPrediction:(id)a0;
- (id)logBuffer;
- (id)predictionCounts;
- (struct { unsigned long long x0; unsigned long long x1; })bestPredictionUsingPolicyOption:(int)a0;

@end
