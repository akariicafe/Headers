@class MLModel, NSString;

@interface MLLinkedModel : MLModel <MLModelSpecificationLoader>

@property (retain) MLModel *linkedModel;
@property (retain) NSString *modelFileName;
@property (retain) NSString *modelSearchPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)findFile:(id)a0 inSearchPath:(id)a1 basePath:(id)a2;
+ (BOOL)areFeaturesIn:(id)a0 modelNamed:(id)a1 aSubsetOf:(id)a2 error:(id *)a3;

- (id)parameterValueForKey:(id)a0 error:(id *)a1;
- (id)predictionsFromBatch:(id)a0 options:(id)a1 error:(id *)a2;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithLinkedModel:(id)a0 modelFileName:(id)a1 modelSearchPath:(id)a2 configuration:(id)a3;
- (void)updateParameterDescriptionsByUnarchivingSpecification:(const void *)a0;

@end
