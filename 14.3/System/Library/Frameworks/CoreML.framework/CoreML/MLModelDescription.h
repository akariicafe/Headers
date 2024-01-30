@class NSOrderedSet, NSArray, NSURL, NSDictionary, NSString, MLLayerPath;

@interface MLModelDescription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSOrderedSet *inputFeatureNames;
@property (retain) NSOrderedSet *outputFeatureNames;
@property (copy, nonatomic) NSArray *classLabels;
@property (retain, nonatomic) NSURL *modelURL;
@property (nonatomic) BOOL isUpdatable;
@property (retain, nonatomic) NSDictionary *trainingInputDescriptionsByName;
@property (retain, nonatomic) NSDictionary *parameterDescriptionsByKey;
@property (retain, nonatomic) MLLayerPath *modelPath;
@property (readonly, nonatomic) NSDictionary *inputDescriptionsByName;
@property (readonly, nonatomic) NSDictionary *outputDescriptionsByName;
@property (readonly, copy, nonatomic) NSString *predictedFeatureName;
@property (readonly, copy, nonatomic) NSString *predictedProbabilitiesName;
@property (readonly, nonatomic) NSDictionary *metadata;

+ (id)metadataWithFormat:(struct _MLModelMetadataSpecification { struct shared_ptr<CoreML::Specification::Metadata> { struct Metadata *x0; struct __shared_weak_count *x1; } x0; } *)a0;
+ (id)metadataWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0;

- (id)debugQuickLookObject;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 trainingInputDescriptions:(id)a4 metadata:(id)a5;
- (BOOL)verifyInput:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithInputDescriptions:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 metadata:(id)a4;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithModelDescriptionSpecification:(struct _MLModelDescriptionSpecification { struct shared_ptr<CoreML::Specification::ModelDescription> { struct ModelDescription *x0; struct __shared_weak_count *x1; } x0; } *)a0 error:(id *)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToDescription:(id)a0;
- (id)initWithInputDescriptionsAndFeatureNames:(id)a0 outputDescriptions:(id)a1 predictedFeatureName:(id)a2 predictedProbabilitiesName:(id)a3 trainingInputDescriptions:(id)a4 inputFeatureNames:(id)a5 outputFeatureNames:(id)a6 metadata:(id)a7;
- (void)encodeWithCoder:(id)a0;

@end
