@class AMDModelMetadata, NSString, MLModel, AMDModelAssets;

@interface AMDBaseRecoModel : NSObject <AMDRecoModel>

@property (retain, nonatomic) NSString *modelId;
@property unsigned long long version;
@property long long assetCreationTimestamp;
@property (retain, nonatomic) MLModel *model;
@property (retain, nonatomic) AMDModelMetadata *modelMetadata;
@property (retain, nonatomic) AMDModelAssets *modelAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getCurrentDirURLForName:(id)a0;
+ (id)getModelforId:(id)a0 error:(id *)a1;

- (id)getId;
- (id)initWithId:(id)a0;
- (BOOL)isValid;
- (unsigned long long)getVersion;
- (void).cxx_destruct;
- (void)loadModelMetadataFromDir:(id)a0 error:(id *)a1;
- (BOOL)parseModelInfoFromBuffer:(id)a0 error:(id *)a1;
- (long long)getAssetCreationTimestamp;
- (id)getPredictions:(unsigned long long)a0 andInputBuilder:(id)a1 andOutputBuilder:(id)a2 withColdstartModelId:(id)a3 error:(id *)a4;
- (id)initWithId:(id)a0 andVersion:(unsigned long long)a1;

@end
