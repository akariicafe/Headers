@class MLUpdateProgressHandlers, NSArray, NSDictionary, MLParameterContainer, NSOrderedSet, NSObject, NSString;
@protocol OS_dispatch_queue, MLNearestNeighborsIndex;

@interface MLKNearestNeighborsClassifier : MLModel <MLSpecificationCompiler, MLCompiledModelLoader, MLUpdatable, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MLUpdateProgressHandlers *progressHandlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *progressHandlersDispatchQueue;
@property (retain, nonatomic) NSDictionary *updateParameters;
@property (nonatomic) BOOL continueWithUpdate;
@property (retain, nonatomic) MLParameterContainer *parameterContainer;
@property (nonatomic) unsigned long long numberOfDimensions;
@property (nonatomic) long long indexType;
@property (retain, nonatomic) id<MLNearestNeighborsIndex> index;
@property (nonatomic) long long labelType;
@property (retain, nonatomic) NSArray *labelsForDataPoints;
@property (retain, nonatomic) NSOrderedSet *labelsSet;
@property (retain, nonatomic) NSObject *defaultLabel;
@property (nonatomic) long long weightingScheme;
@property (retain, nonatomic) NSString *nearestLabelsFeatureName;
@property (retain, nonatomic) NSString *nearestDistancesFeatureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)compileSpecification:(void *)a0 toArchive:(void *)a1 options:(id)a2 error:(id *)a3;
+ (id)loadModelFromCompiledArchive:(void *)a0 modelVersionInfo:(id)a1 compilerVersionInfo:(id)a2 configuration:(id)a3 error:(id *)a4;
+ (id)compiledVersionForSpecification:(void *)a0 options:(id)a1 error:(id *)a2;

- (void)resumeUpdate;
- (void)encodeWithCoder:(id)a0;
- (void)resumeUpdateWithParameters:(id)a0;
- (id)initWithDescription:(id)a0 configuration:(id)a1 parameters:(id)a2 dataPoints:(void *)a3 labels:(id)a4 error:(id *)a5;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })computeKClosestLabels:(id)a0;
- (void)computeClassProbabilities:(id *)a0 from:(void *)a1;
- (id)inputMultiArray:(id)a0 error:(id *)a1;
- (void)extractNearestNeighborLabels:(id *)a0 distances:(id *)a1 from:(struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x0; void *x1; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x0; } x2; })a2;
- (id)packageOutputWithPredictedLabel:(id)a0 classProbabilities:(id)a1 nearestLabels:(id)a2 nearestDistances:(id)a3;
- (void).cxx_destruct;
- (void)setUpdateProgressHandlers:(id)a0 dispatchQueue:(id)a1;
- (BOOL)writeToURL:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void)cancelUpdate;
- (void)updateModelWithData:(id)a0;
- (id)parameterValueForKey:(id)a0 error:(id *)a1;

@end
