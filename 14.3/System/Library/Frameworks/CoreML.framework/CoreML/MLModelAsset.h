@class MLModelConfiguration, NSURL, NSObject;
@protocol MLModeling, MLRegressor, MLClassifier;

@interface MLModelAsset : NSObject

@property BOOL ranLoad;
@property (retain) NSObject<MLModeling> *asset;
@property (readonly, nonatomic) MLModelConfiguration *loadConfiguration;
@property (readonly) NSURL *compiledURL;
@property (readonly, nonatomic) id<MLModeling> model;
@property (readonly, nonatomic) id<MLRegressor> regressor;
@property (readonly, nonatomic) id<MLClassifier> classifier;

+ (id)modelAssetWithURL:(id)a0 configuration:(id)a1 error:(id *)a2;
+ (id)modelAssetWithSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 error:(id *)a1;
+ (id)fetchNetworkURLFromCompiledModelAtURL:(id)a0 error:(id *)a1;
+ (BOOL)isANESupported;
+ (id)modelAssetWithSpecificationURL:(id)a0 error:(id *)a1;
+ (BOOL)needsANECompilationForModelAtURL:(id)a0 result:(BOOL *)a1 error:(id *)a2;
+ (BOOL)purgeANEBinaryForModelAtURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithURL:(id)a0 error:(id *)a1;
+ (BOOL)purgeANEIRForModelAtURL:(id)a0 error:(id *)a1;

- (BOOL)load:(id *)a0;
- (void).cxx_destruct;
- (id)regressorWithError:(id *)a0;
- (id)description;
- (id)modelWithError:(id *)a0;
- (id)classifierWithError:(id *)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1 error:(id *)a2;
- (id)initWithURL:(id)a0 error:(id *)a1;

@end
