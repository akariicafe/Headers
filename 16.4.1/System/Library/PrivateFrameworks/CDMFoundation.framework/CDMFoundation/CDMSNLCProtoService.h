@class SNLPServerNLClassifier;

@interface CDMSNLCProtoService : CDMDAGBaseService {
    SNLPServerNLClassifier *_snlcOrchestrator;
}

+ (id)_stockServerResponse;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)getParserEnum;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)doInference:(id)a0;
- (id)getSNLPServerNLClassifierPath:(id)a0 error:(id *)a1;
- (id)handleRequestCommandTypeNames;

@end
