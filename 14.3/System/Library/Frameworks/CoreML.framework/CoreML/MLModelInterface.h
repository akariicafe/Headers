@class NSOrderedSet, NSDictionary, NSString, MLFeatureDescription;

@interface MLModelInterface : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) MLFeatureDescription *predictedValueFeatureDescription;
@property (readonly) MLFeatureDescription *predictedClassFeatureDescription;
@property (readonly) MLFeatureDescription *classProbabilityFeatureDescription;
@property (readonly, getter=isValidRegressorInterface) BOOL validRegressorInterface;
@property (readonly, getter=isValidClassifierInterface) BOOL validClassifierInterface;
@property (readonly) NSDictionary *inputDescription;
@property (readonly) NSDictionary *outputDescription;
@property (readonly) NSOrderedSet *inputFeatureNames;
@property (readonly) NSOrderedSet *outputFeatureNames;
@property (readonly) NSDictionary *trainingInputDescription;
@property (readonly) NSString *predictedFeatureName;
@property (readonly) NSString *predictedProbabilitiesName;

+ (id)modelInterfaceWithInputDescription:(id)a0 orderedInputFeatureNames:(id)a1 outputDescription:(id)a2 orderedOutputFeatureNames:(id)a3 predictedFeatureName:(id)a4 predictedProbabilitiesName:(id)a5;
+ (id)modelInterfaceWithInputDescription:(id)a0 orderedInputFeatureNames:(id)a1 outputDescription:(id)a2 orderedOutputFeatureNames:(id)a3 predictedFeatureName:(id)a4 predictedProbabilitiesName:(id)a5 trainingInputDescription:(id)a6;
+ (BOOL)validateSingleFeatureInDescription:(id)a0 withSet:(id)a1;

- (void).cxx_destruct;
- (BOOL)validateClassifierInterfaceWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInterfaceFormat:(struct _MLModelDescriptionSpecification { struct shared_ptr<CoreML::Specification::ModelDescription> { struct ModelDescription *x0; struct __shared_weak_count *x1; } x0; } *)a0 error:(id *)a1;
- (BOOL)validateRegressorInterfaceWithError:(id *)a0;
- (id)initWithInputDescription:(id)a0 outputDescription:(id)a1 orderedInputFeatureNames:(id)a2 orderedOutputFeatureNames:(id)a3 predictedFeatureName:(id)a4 predictedProbabilitiesName:(id)a5 trainingInputDescription:(id)a6;
- (id)initWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;

@end
