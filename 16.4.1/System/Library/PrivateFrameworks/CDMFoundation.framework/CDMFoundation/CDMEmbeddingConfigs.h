@class NSDictionary, NSString;

@interface CDMEmbeddingConfigs : NSObject <NSSecureCoding> {
    NSDictionary *_assetPaths;
    NSString *_stableEmbeddingModelVersion;
    NSDictionary *_embeddingConfigItems;
    NSDictionary *_serviceDependentEmbeddingModelVersions;
    BOOL _setupCalled;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (BOOL)isInternalBuild;
+ (int)getMaxEmbeddingConcurrencyConst;
+ (id)generateEmbeddingModelIdList:(id)a0;
+ (int)getMaxEmbeddingConcurrency;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)setupWithError:(id *)a0;
- (id)generateEmbeddingConfigItemsWithError:(id *)a0;
- (id)generateServiceDependentEmbeddingModelVersionsWithError:(id *)a0;
- (id)getAllEmbeddingConfigs;
- (id)getAssetPaths;
- (id)getDependentEmbeddingConfigs;
- (id)getEmbeddingConfigForEmbeddingModelVersion:(id)a0;
- (id)getEmbeddingConfigForFactor:(id)a0;
- (id)getStableEmbeddingConfig;
- (id)initWithAssetPaths:(id)a0;

@end
