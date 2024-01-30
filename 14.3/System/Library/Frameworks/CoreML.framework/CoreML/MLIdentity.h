@class NSString;

@interface MLIdentity : MLModel <MLModelSpecificationLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(struct _MLModelSpecification { } *)a0 configuration:(id)a1 error:(id *)a2;

- (id)init;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;

@end
