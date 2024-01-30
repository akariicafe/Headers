@class SNLPServerNLClassifier;

@interface CDMSNLCProtoService : CDMDAGBaseService {
    SNLPServerNLClassifier *_snlcOrchestrator;
}

+ (id)assetFolderName;
+ (id)trialFactorName;
+ (id)getParserEnum;
+ (id)_stockServerResponse;

- (id)handle:(id)a0;
- (void).cxx_destruct;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;
- (id)assetsPathURLForModelBundle:(id)a0;
- (id)doInference:(id)a0;
- (id)getSNLPServerNLClassifierPath:(id)a0 error:(id *)a1;

@end
