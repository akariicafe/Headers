@class NSOrderedSet, NSString, MLModelDescription, MLModelMetadata;

@interface MLOneHotEncoder : MLModel <MLModelSpecificationLoader, MLModeling>

@property (readonly, nonatomic) NSOrderedSet *featureEncoding;
@property (readonly, nonatomic) BOOL ouputSparse;
@property (readonly, nonatomic) BOOL handleUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MLModelDescription *modelDescription;
@property (readonly) MLModelMetadata *metadata;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)featureEncoderFrom:(id)a0 dataTransformerName:(id)a1 ouputSparse:(BOOL)a2 handleUnknown:(BOOL)a3 inputDescription:(id)a4 outputDescription:(id)a5 orderedInputFeatureNames:(id)a6 orderedOutputFeatureNames:(id)a7;
+ (id)featureEncoderFrom:(id)a0 inputDescription:(id)a1 orderedInputFeatureNames:(id)a2;
+ (id)featureEncoderFrom:(id)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)encodeFeatureValue:(id)a0;
- (id)encodeFeatureValueIntString:(unsigned long long)a0;
- (id)initWith:(id)a0 dataTransformerName:(id)a1 ouputSparse:(BOOL)a2 handleUnknown:(BOOL)a3 inputDescription:(id)a4 outputDescription:(id)a5 orderedInputFeatureNames:(id)a6 orderedOutputFeatureNames:(id)a7 configuration:(id)a8;
- (id)unknownDenseVector;

@end
