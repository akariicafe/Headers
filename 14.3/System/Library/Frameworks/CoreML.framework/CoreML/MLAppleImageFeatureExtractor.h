@class MLAppleImageFeatureExtractorParameters, NSString, NSArray;

@interface MLAppleImageFeatureExtractor : MLModel <MLModelSpecificationLoader> {
    NSString *_inputFeatureName;
    NSArray *_outputFeatureName;
    long long _outputDataType;
    int _extractorType;
}

@property (readonly) MLAppleImageFeatureExtractorParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)featureValueFromScenePrint:(id)a0 elementSize:(unsigned long long)a1;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithParameters:(id)a0 modelDescription:(id)a1 featureExtractorType:(int)a2 configuration:(id)a3 error:(id *)a4;
- (id)computeScenePrintFeatures:(struct __CVBuffer { } *)a0 handle:(id)a1 useCPUOnly:(BOOL)a2 error:(id *)a3;
- (id)featureValueFromObjectPrint:(id)a0 key:(id)a1 shape:(id)a2;

@end
