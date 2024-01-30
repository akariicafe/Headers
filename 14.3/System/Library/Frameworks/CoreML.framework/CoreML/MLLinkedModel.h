@class MLModel, NSString;

@interface MLLinkedModel : MLModel <MLModelSpecificationLoader>

@property (retain) MLModel *linkedModel;
@property (retain) NSString *modelFileName;
@property (retain) NSString *modelSearchPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)findFile:(id)a0 inSearchPath:(id)a1 basePath:(id)a2;
+ (BOOL)areFeaturesIn:(id)a0 modelNamed:(id)a1 aSubsetOf:(id)a2 error:(id *)a3;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)updateParameterDescriptionsByUnarchivingSpecification:(const struct LinkedModelFile { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct StringParameter *x2; struct StringParameter *x3; int x4; } *)a0;
- (id)initWithLinkedModel:(id)a0 modelFileName:(id)a1 modelSearchPath:(id)a2 configuration:(id)a3;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;

@end
