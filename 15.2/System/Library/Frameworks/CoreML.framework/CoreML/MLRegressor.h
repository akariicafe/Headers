@class MLModelMetadata, MLPredictionEvent, MLModelDescription;

@interface MLRegressor : MLModel <MLRegressor>

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelMetadata *metadata;
@property (retain, nonatomic) MLPredictionEvent *predictionEvent;

+ (id)predictionFromFeatures:(id)a0 regressor:(id)a1 options:(id)a2 error:(id *)a3;

@end
