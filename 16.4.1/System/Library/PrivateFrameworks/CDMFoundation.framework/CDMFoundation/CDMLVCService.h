@class SNLPLanguageVariantClassifier, SiriNLUOverrideProxy;

@interface CDMLVCService : CDMDAGBaseService {
    SNLPLanguageVariantClassifier *_lvcOrchestrator;
    SiriNLUOverrideProxy *_overrideProxy;
}

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)assetsPathURLForModelBundle:(id)a0;
+ (id)buildMultiLingualVariant:(id)a0;
+ (BOOL)deviceSupportsLVC;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (void)_prewarmModelWithEmbeddingConfigItem:(id)a0;
- (id)doInference:(id)a0 error:(id *)a1;
- (id)getSNLPLanguageVariantClassifierPath:(id)a0 error:(id *)a1;
- (id)handleRequestCommandTypeNames;
- (BOOL)initializeLVCOverrides:(id)a0;

@end
