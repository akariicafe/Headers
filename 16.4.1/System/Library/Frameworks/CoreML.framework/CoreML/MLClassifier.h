@class MLModelMetadata, MLModelDescription;

@interface MLClassifier : MLModel <MLClassifier>

@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelMetadata *metadata;

+ (id)predictionFromFeatures:(id)a0 classifier:(id)a1 options:(id)a2 error:(id *)a3;

- (id)classify:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)classLabels;
- (id)classifierResultFromOutputFeatures:(id)a0 error:(id *)a1;
- (id)initDescriptionOnlyWithSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithDescription:(id)a0 configuration:(id)a1 error:(id *)a2;

@end
