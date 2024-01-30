@class MLModel;

@interface CMWorkoutClassifierCNN : NSObject

@property (readonly, nonatomic) MLModel *model;

- (id)initWithContentsOfURL:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;
- (id)predictionFromX__0:(id)a0 error:(id *)a1;

@end
