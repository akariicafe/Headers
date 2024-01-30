@class NSDictionary, MLModelConfiguration, NSURL, NSObject;
@protocol MLModeling, MLRegressor, MLClassifier;

@interface MLModelAsset : NSObject

@property BOOL ranLoad;
@property (retain) NSObject<MLModeling> *asset;
@property (retain, nonatomic) MLModelConfiguration *loadConfiguration;
@property (readonly, nonatomic) NSDictionary *archiveData;
@property (readonly) NSURL *compiledURL;
@property (readonly, nonatomic) id<MLModeling> model;
@property (readonly, nonatomic) id<MLRegressor> regressor;
@property (readonly, nonatomic) id<MLClassifier> classifier;

+ (id)modelAssetWithSpecificationData:(id)a0 error:(id *)a1;
+ (id)modelAssetWithSpecification:(void *)a0 error:(id *)a1;
+ (BOOL)isANESupported;
+ (id)modelAssetWithSpecification:(void *)a0 compilerOptions:(id)a1 error:(id *)a2;
+ (BOOL)purgeANEBinaryForModelAtURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithSpecificationURL:(id)a0 error:(id *)a1;
+ (BOOL)needsANECompilationForModelAtURL:(id)a0 result:(BOOL *)a1 error:(id *)a2;
+ (id)modelAssetWithURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithSpecificationURL:(id)a0 compilerOptions:(id)a1 error:(id *)a2;
+ (id)resolveExternalReferencesInSpecificationData:(id)a0 specificationURL:(id)a1 error:(id *)a2;
+ (id)fetchNetworkURLFromCompiledModelAtURL:(id)a0 error:(id *)a1;
+ (BOOL)purgeANEIRForModelAtURL:(id)a0 error:(id *)a1;
+ (id)modelAssetWithURL:(id)a0 configuration:(id)a1 error:(id *)a2;

- (BOOL)load:(id *)a0;
- (id)modelWithError:(id *)a0;
- (id)initWithArchiveData:(id)a0;
- (id)modelWithConfiguration:(id)a0 error:(id *)a1;
- (id)classifierWithError:(id *)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)description;
- (void).cxx_destruct;
- (id)regressorWithError:(id *)a0;
- (id)initWithURL:(id)a0 configuration:(id)a1 error:(id *)a2;

@end
