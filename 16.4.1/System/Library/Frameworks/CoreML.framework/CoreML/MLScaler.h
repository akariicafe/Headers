@class NSString, MLFeatureValue;

@interface MLScaler : MLModel <MLModelSpecificationLoader>

@property (readonly, nonatomic) MLFeatureValue *shiftValue;
@property (readonly, nonatomic) MLFeatureValue *scaleValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWith:(id)a0 scaleValue:(id)a1 dataTransformerName:(id)a2 inputDescription:(id)a3 outputDescription:(id)a4 orderedInputFeatureNames:(id)a5 orderedOutputFeatureNames:(id)a6 configuration:(id)a7 error:(id *)a8;

@end
