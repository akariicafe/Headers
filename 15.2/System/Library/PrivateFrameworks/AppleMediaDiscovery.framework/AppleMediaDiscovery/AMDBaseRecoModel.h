@class AMDModelMetadata, NSString, MLModel, AMDModelAssets;

@interface AMDBaseRecoModel : NSObject <AMDRecoModel>

@property (retain, nonatomic) NSString *modelId;
@property short version;
@property long long assetCreationTimestamp;
@property (retain, nonatomic) MLModel *model;
@property (retain, nonatomic) AMDModelMetadata *modelMetadata;
@property (retain, nonatomic) AMDModelAssets *modelAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getModelforId:(id)a0 error:(id *)a1;
+ (id)getCurrentDirURLForName:(id)a0;

- (id)initWithId:(id)a0;
- (id)getId;
- (void).cxx_destruct;
- (BOOL)isValid;
- (short)getVersion;
- (id)initWithId:(id)a0 andVersion:(short)a1;
- (long long)getAssetCreationTimestamp;
- (id)topNPredictions:(unsigned long long)a0 usingFeatureProvider:(id)a1 andInputBuilder:(id)a2 andOutputBuilder:(id)a3 withColdstartModelId:(id)a4 error:(id *)a5;
- (void)loadModelMetadataFromDir:(id)a0 error:(id *)a1;
- (BOOL)parseModelInfoFromBuffer:(id)a0 error:(id *)a1;

@end
