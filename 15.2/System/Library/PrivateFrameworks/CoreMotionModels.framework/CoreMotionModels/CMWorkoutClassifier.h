@class CMWorkoutClassifierCNN;

@interface CMWorkoutClassifier : NSObject {
    CMWorkoutClassifierCNN *_predictor;
}

- (void).cxx_destruct;
- (id)init;
- (id)predictionFromX__0:(id)a0 error:(id *)a1;

@end
