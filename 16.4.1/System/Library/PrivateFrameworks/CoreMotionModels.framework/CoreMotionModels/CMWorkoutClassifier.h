@class CMWorkoutClassifierCNN;

@interface CMWorkoutClassifier : NSObject {
    CMWorkoutClassifierCNN *_predictor;
}

- (id)init;
- (void).cxx_destruct;
- (id)predictionFromX__0:(id)a0 error:(id *)a1;

@end
