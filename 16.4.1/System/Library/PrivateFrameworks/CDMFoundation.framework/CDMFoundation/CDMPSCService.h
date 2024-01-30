@class SNLPPommesServerClassifier;

@interface CDMPSCService : CDMDAGBaseService {
    SNLPPommesServerClassifier *_pscOrchestrator;
}

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)_emptyResponse;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)doInference:(id)a0 error:(id *)a1;
- (id)getSNLPPommesServerClassifierPath:(id)a0 error:(id *)a1;
- (id)handleRequestCommandTypeNames;

@end
