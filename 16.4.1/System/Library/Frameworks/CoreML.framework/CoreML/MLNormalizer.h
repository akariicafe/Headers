@class NSString;

@interface MLNormalizer : MLModel <MLModelSpecificationLoader>

@property (readonly, nonatomic) int norm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadModelFromSpecification:(void *)a0 configuration:(id)a1 error:(id *)a2;
+ (id)inputDescriptionFrom:(id)a0 outputDescription:(id)a1 orderedInputFeatureNames:(id)a2 orderedOutputFeatureNames:(id)a3;
+ (id)normFrom:(int)a0 dataTransformerName:(id)a1 inputDescription:(id)a2 outputDescription:(id)a3 orderedInputFeatureNames:(id)a4 orderedOutputFeatureNames:(id)a5;
+ (id)normFrom:(int)a0 inputDescription:(id)a1 outputDescription:(id)a2 orderedInputFeatureNames:(id)a3 orderedOutputFeatureNames:(id)a4;

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWith:(int)a0 dataTransformerName:(id)a1 inputDescription:(id)a2 outputDescription:(id)a3 orderedInputFeatureNames:(id)a4 orderedOutputFeatureNames:(id)a5 configuration:(id)a6;

@end
