@class NSArray, NSBundle, NSString, CATIBloomFilter, NSDictionary, NSMutableArray;

@interface CDMCATIProtoService : CDMDAGBaseService {
    NSBundle *_catiBundle;
    NSBundle *_modelBundle;
    NSBundle *_weightsBundle;
    NSArray *_enabledModels;
    NSArray *_positiveOverrides;
    NSString *_manifestPath;
    NSString *_posOverridesDirectoryPath;
    NSArray *_negativeOverrides;
    NSString *_negOverridesDirectoryPath;
    CATIBloomFilter *_positiveOverridesBloomFilter;
    NSDictionary *_positiveOverridesDictionary;
    float _threshold;
    struct unique_ptr<float [][193], std::default_delete<float [][193]>> { struct __compressed_pair<float (*)[193], std::default_delete<float [][193]>> { float[193] *__value_; } __ptr_; } _weightPtr;
    unsigned long long _num_models;
    NSMutableArray *_catIDs;
    int _algoType;
    NSString *_usoEntity;
    NSString *_usoVerb;
    NSString *_usoCATId;
}

+ (id)assetFolderName;
+ (id)trialFactorName;

- (BOOL)isEnabled;
- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;
- (long long)getServiceState;
- (id)setupErrorResponse:(id)a0 serviceState:(long long)a1;
- (id)getManifest:(id)a0;
- (id)getEnabledUseCases:(id)a0 directoryContents:(id)a1 typeOfUseCase:(id)a2;
- (void)constructWeightMatrixForInference:(id)a0;
- (id)buildCATIBloomFilterForPositiveRules:(id)a0;
- (id)getEnabledModels;
- (BOOL)shouldSuppressDueTo:(id)a0;
- (id)createEmptyParseForUnsupportedUseCases;
- (id)checkExactMatchForUtterances:(id)a0;
- (id)runCATIModelInferenceWithWeights:(id)a0;
- (id)buildCATIResponse:(id)a0 confidenceScore:(float)a1;
- (id)createEmptyParseDueToNotMeetingInternalThreshold;

@end
